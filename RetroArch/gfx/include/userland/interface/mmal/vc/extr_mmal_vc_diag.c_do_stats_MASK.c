
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {char* name; int offset; } ;
typedef int MMAL_VC_STATS_T ;
typedef scalar_t__ MMAL_STATUS_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,char*) ;
 char* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (char*,char*,int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 unsigned int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(int VAR_3, const char **VAR_4)
{
   MMAL_VC_STATS_T VAR_5;
   int VAR_6 = FUNC_4(VAR_4[1], "reset") == 0;
   MMAL_STATUS_T VAR_7 = FUNC_2(&VAR_5, VAR_6);
   int VAR_8;
   (void)VAR_3; (void)VAR_4;
   if (VAR_7 != VAR_0)
   {
      FUNC_0(VAR_2, "error getting status (%li,%s)\n", VAR_7, FUNC_1(VAR_7));
      VAR_8 = -1;
   }
   else
   {
      unsigned VAR_9;
      uint32_t *VAR_10 = (uint32_t*)&VAR_5;
      for (VAR_9=0; VAR_9<FUNC_5(VAR_1); VAR_9++)
      {
         FUNC_3("%-32s: %u\n", VAR_1[VAR_9].name, VAR_10[VAR_1[VAR_9].offset/sizeof(uint32_t)]);
      }
      VAR_8 = 0;
   }
   return VAR_8;
}
