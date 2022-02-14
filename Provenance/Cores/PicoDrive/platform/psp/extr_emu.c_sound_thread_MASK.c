
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SceSize ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_5(SceSize VAR_9, void *VAR_10)
{
 int VAR_11 = 0;

 FUNC_0("sthr: started, priority %i\n", FUNC_3());

 while (!VAR_8)
 {
  if (VAR_3 - VAR_2 < VAR_1) {


   while (VAR_3 - VAR_2 <= VAR_1*2 && !VAR_8)
    VAR_11 = FUNC_4(VAR_7, 1, 0);
   if (VAR_11 < 0) FUNC_0("sthr: sceKernelWaitSema: %i\n", VAR_11);
   continue;
  }



  VAR_11 = FUNC_1(VAR_0, VAR_6);

  VAR_2 += VAR_1;
  VAR_6 += VAR_1;
  if (VAR_6 >= VAR_5)
   VAR_6 = VAR_4;

  if (VAR_11 < 0)
   FUNC_0("sthr: sceAudio_E0727056: %08x; pos %i/%i\n", VAR_11, VAR_2, VAR_3);


  if (VAR_3 - VAR_2 >= VAR_1*3) {

   VAR_2 += VAR_1;
   VAR_6 += VAR_1;
  }

 }

 FUNC_0("sthr: exit\n");
 FUNC_2(0);
 return 0;
}
