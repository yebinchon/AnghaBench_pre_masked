
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ frameBuffer; } ;
typedef TYPE_1__ PrintConsole ;
typedef int Handle ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int,int*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_1 ;
 int* FUNC_5 () ;
 int** VAR_2 ;
 int FUNC_6 () ;
 int ** VAR_3 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (int *,char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;

__attribute__((used)) static void FUNC_17(void* VAR_4)
{
   Handle VAR_5;
   u32 VAR_6;
   u8 VAR_7;
   u8 VAR_8 = 0xFF;

   extern PrintConsole* VAR_9;

   (void)VAR_4;
   FUNC_10();
   FUNC_15();
   FUNC_11(((void*)0), 0);

   if ((VAR_2[0] == (u8*)VAR_9->frameBuffer)
         && (VAR_1 == VAR_0))
      FUNC_16();

   FUNC_0(&VAR_7);

   if (VAR_7 && FUNC_12(&VAR_5, "gsp::Lcd") >= 0)
   {
      u32* VAR_10 = FUNC_5();
      VAR_10[0] = 0x00110040;
      VAR_10[1] = 2;
      FUNC_14(VAR_5);
      FUNC_13(VAR_5);
   }





   FUNC_1(&VAR_8);
   if ((VAR_8 == 0) || (VAR_8 == 1))
   {
      VAR_6 = (*(float*)0x1FF81080 == 0.0) ? 0x0 : 0x00010001;
      FUNC_2(0x202000, &VAR_6, 4);
   }

   FUNC_7();
   FUNC_9();
   FUNC_3();
   FUNC_8();
   FUNC_4();
   VAR_3[0] = ((void*)0);
   VAR_3[1] = ((void*)0);
   FUNC_6();

}
