
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int at_start; int limit; int is_zero; scalar_t__ number_was_valid; scalar_t__ is_negative; scalar_t__ state; scalar_t__ cdigits_in_state; int check_state; scalar_t__ cnumber; } ;
typedef TYPE_1__ checkfp_control ;
struct TYPE_6__ {int limit; int ctimes; int cmillions; int cinvalid; scalar_t__ cnoaccept; int verbose; scalar_t__* number; } ;
typedef TYPE_2__ checkfp_command ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*,char*,int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int VAR_2 ;

int FUNC_5(int VAR_3, int VAR_4, char **VAR_5)
{
   int VAR_6;
   checkfp_command VAR_7;
   checkfp_control VAR_8;

   VAR_7.number[0] = 0;
   VAR_7.limit = 3;
   VAR_7.verbose = VAR_2;
   VAR_7.ctimes = 0;
   VAR_7.cmillions = 0;
   VAR_7.cinvalid = 0;
   VAR_7.cnoaccept = 0;

   while (--VAR_4 > 0)
   {
      ++VAR_5;
      if (VAR_4 > 1 && FUNC_4(*VAR_5, "-l") == 0)
      {
         --VAR_4;
         VAR_7.limit = FUNC_0(*++VAR_5);
      }

      else
      {
         FUNC_2(VAR_1, "unknown argument %s\n", *VAR_5);
         return 1;
      }
   }

   VAR_8.cnumber = 0;
   VAR_8.check_state = VAR_0;
   VAR_8.at_start = 1;
   VAR_8.cdigits_in_state = 0;
   VAR_8.limit = VAR_7.limit;
   VAR_8.state = 0;
   VAR_8.is_negative = 0;
   VAR_8.is_zero = 1;
   VAR_8.number_was_valid = 0;

   VAR_6 = FUNC_1(&VAR_7, VAR_8);

   FUNC_3("checkfp: %s: checked %d,%.3d,%.3d,%.3d strings (%d invalid)\n",
      VAR_6 ? "pass" : "FAIL", VAR_7.cmillions / 1000,
      VAR_7.cmillions % 1000, VAR_7.ctimes / 1000, VAR_7.ctimes % 1000,
      VAR_7.cinvalid);

   return VAR_6;
}
