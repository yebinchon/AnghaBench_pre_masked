
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SceSize ;


 int FUNC_0 (char*,...) ;
 int* VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;

__attribute__((used)) static int FUNC_8(SceSize VAR_7, void *VAR_8)
{
 int VAR_9, VAR_10;

 FUNC_0("decode_thread started with id %08x, priority %i\n",
                FUNC_7(), FUNC_6());

 while (!VAR_4)
 {
  FUNC_1(VAR_5);
  if (VAR_4) break;

  FUNC_1(VAR_3);


  VAR_10 = FUNC_3(VAR_6);
  if (VAR_10 > 0)
  {
   VAR_0[6] = (unsigned long)VAR_2[VAR_6];
   VAR_0[8] = (unsigned long)VAR_1[VAR_6];
   VAR_0[7] = VAR_0[10] = VAR_10;
   VAR_0[9] = 1152 * 4;

   VAR_9 = FUNC_4(VAR_0, 0x1002);
   if (VAR_9 < 0) FUNC_0("sceAudiocodecDecode failed with %08x\n", VAR_9);
  }


  FUNC_2(VAR_3);
 }

 FUNC_0("leaving decode thread\n");
 FUNC_5(0);
 return 0;
}
