
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ,int) ;
 int * VAR_5 ;

void FUNC_5(const char *VAR_6, bool VAR_7)
{
   if (VAR_3)
      return;





   VAR_2 = VAR_5;
   if (VAR_6 == ((void*)0))
      return;

   VAR_2 = (FILE*)FUNC_2(VAR_6, VAR_7 ? "ab" : "wb");

   if (!VAR_2)
   {
      VAR_2 = VAR_5;
      FUNC_0("Failed to open system event log file: %s\n", VAR_6);
      return;
   }

   VAR_3 = 1;



   VAR_1 = FUNC_1(1, 0x4000);
   FUNC_4(VAR_2, (char*)VAR_1, VAR_0, 0x4000);

}
