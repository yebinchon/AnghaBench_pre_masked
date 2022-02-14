
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned int,unsigned int,unsigned int,int ) ;
 int FUNC_3 (unsigned int,unsigned int,unsigned int,int ) ;

void FUNC_4(void)
{
 unsigned VAR_2, VAR_3, VAR_4;

 if (!FUNC_1())
  return;

 for (VAR_2 = 0; VAR_2 < 256; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < 32; VAR_3++) {
   for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
    u32 VAR_5;
    u8 VAR_6;

    VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4,
       VAR_0);
    if (VAR_5 == 0xffffffff)
     continue;

    FUNC_0(VAR_2, VAR_3, VAR_4);

    if (VAR_4 == 0) {
     VAR_6 = FUNC_3(VAR_2, VAR_3,
            VAR_4,
              VAR_1);
     if (!(VAR_6 & 0x80))
      break;
    }
   }
  }
 }
}
