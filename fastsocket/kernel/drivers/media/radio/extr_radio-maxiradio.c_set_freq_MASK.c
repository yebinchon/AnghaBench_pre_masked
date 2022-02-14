
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct maxiradio {int io; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct maxiradio*,int,char*,int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct maxiradio*,int) ;

__attribute__((used)) static void FUNC_4(struct maxiradio *VAR_0, u32 VAR_1)
{
 unsigned long int VAR_2;
 int VAR_3;
 int VAR_4 = VAR_0->io;
 int VAR_5 = FUNC_0(VAR_1);



 FUNC_2(0, VAR_4);
 FUNC_2(1, VAR_4);

 FUNC_2(0, VAR_4);

 FUNC_2(0, VAR_4);
 FUNC_2(0, VAR_4);

 FUNC_2(0, VAR_4);
 FUNC_2(0, VAR_4);

 FUNC_2(0, VAR_4);
 FUNC_2(0, VAR_4);

 VAR_2 = 0x8000;
 for (VAR_3 = 1; VAR_3 <= 16; VAR_3++) {
  FUNC_2(VAR_5 & VAR_2, VAR_4);
  VAR_2 >>= 1;
 }

 FUNC_1(VAR_0, 1, "Radio freq set to %d.%02d MHz\n",
    VAR_1 / 16000,
    VAR_1 % 16000 * 100 / 16000);

 FUNC_3(VAR_0, 1);
}
