
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(int VAR_3, const char **VAR_4)
{
   uint32_t VAR_5;

   if (VAR_3 > 2)
   {
      if (FUNC_3(VAR_4[2], "a") == 0)
      {
         FUNC_1(VAR_0, &VAR_5);
         FUNC_2("Triggered aggressive compaction on VC - duration %u us.\n", VAR_5);
      }
      else if (FUNC_3(VAR_4[2], "d") == 0)
      {
         FUNC_1(VAR_1, &VAR_5);
         FUNC_2("Triggered discard compaction on VC - duration %u us.\n", VAR_5);
      }
      else if (FUNC_3(VAR_4[2], "n") == 0)
      {
         FUNC_1(VAR_2, &VAR_5);
         FUNC_2("Triggered normal compaction on VC - duration %u us.\n", VAR_5);
      }
      else
      {
         FUNC_2("Invalid memory compaction option %s\n.", VAR_4[2]);
         FUNC_0(1);
      }
   }
   else
   {
      FUNC_2("Invalid memory compaction arguments.  Need to specify 'a', 'n' or 't'.\n");
      FUNC_0(1);
   }
   return 0;
}
