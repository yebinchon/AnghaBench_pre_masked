
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
 uint VAR_2 = FUNC_1();
 char VAR_3[40];
 uint VAR_4;
 uint VAR_5;
 uint VAR_6;

 VAR_3[0] = 0;
 for(VAR_6=0;VAR_6<8;VAR_6++)
 {
  if(VAR_2&(1<<VAR_6))
  {
   VAR_4 = VAR_6;
   VAR_5 = 0;
   while(VAR_6<7 && (VAR_2&(1<<(VAR_6+1))))
   {
    VAR_6++;
    VAR_5++;
   }
   if(VAR_3[0] != 0)
    FUNC_3(VAR_3, "/");
   FUNC_2(VAR_3+FUNC_4(VAR_3), "D%d", VAR_4);
   if(VAR_5 > 0)
    FUNC_2(VAR_3+FUNC_4(VAR_3), "-D%d", VAR_4 + VAR_5);
  }
 }
 for(VAR_6=0;VAR_6<8;VAR_6++)
 {
  if(VAR_2&(1<<(VAR_6+8)))
  {
   VAR_4 = VAR_6;
   VAR_5 = 0;
   while(VAR_6<7 && (VAR_2&(1<<(VAR_6+8+1))))
   {
    VAR_6++;
    VAR_5++;
   }
   if(VAR_3[0] != 0)
    FUNC_3(VAR_3, "/");
   FUNC_2(VAR_3+FUNC_4(VAR_3), "A%d", VAR_4);
   if(VAR_5 > 0)
    FUNC_2(VAR_3+FUNC_4(VAR_3), "-A%d", VAR_4 + VAR_5);
  }
 }
 FUNC_2(VAR_1, "movem.l %s, %s", FUNC_0(VAR_0), VAR_3);
}
