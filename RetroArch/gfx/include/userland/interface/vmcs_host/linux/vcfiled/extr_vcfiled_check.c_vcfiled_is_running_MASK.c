
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {int l_len; scalar_t__ l_pid; scalar_t__ l_start; int l_whence; int l_type; } ;
typedef int flock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,struct flock*) ;
 int FUNC_1 (struct flock*,int ,int) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (char*,char*,char const*,char*) ;
 char* FUNC_4 (int ) ;

int FUNC_5(const char *VAR_5)
{
   int VAR_6;

   int VAR_7 = FUNC_2(VAR_5, VAR_2);
   if (VAR_7 < 0)
   {

      VAR_6 = 0;
   }

   else
   {
      struct flock VAR_8;
      FUNC_1(&VAR_8, 0, sizeof(VAR_8));
      VAR_8.l_type = VAR_1;
      VAR_8.l_whence = VAR_3;
      VAR_8.l_start = 0;
      VAR_8.l_len = 1;
      int VAR_9 = FUNC_0(VAR_7, VAR_0, &VAR_8);
      if (VAR_9 != 0)
      {

         FUNC_3("%s: Could not access lockfile %s: %s\n",
            "vmcs_main", VAR_5, FUNC_4(VAR_4));
         VAR_6 = 0;
      }
      else if (VAR_8.l_pid == 0)
      {

         VAR_6 = 0;
      }
      else
      {

         VAR_6 = 1;
      }
   }

   return VAR_6;
}
