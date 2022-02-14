
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx24110_state {int dummy; } ;
typedef int fe_spectral_inversion_t ;


 int VAR_0 ;



 int FUNC_0 (struct cx24110_state*,int) ;
 int FUNC_1 (struct cx24110_state*,int,int) ;

__attribute__((used)) static int FUNC_2 (struct cx24110_state* VAR_1, fe_spectral_inversion_t VAR_2)
{


 switch (VAR_2) {
 case 129:
  FUNC_1(VAR_1,0x37,FUNC_0(VAR_1,0x37)|0x1);

  FUNC_1(VAR_1,0x5,FUNC_0(VAR_1,0x5)&0xf7);

  FUNC_1(VAR_1,0x22,FUNC_0(VAR_1,0x22)&0xef);



  break;
 case 128:
  FUNC_1(VAR_1,0x37,FUNC_0(VAR_1,0x37)|0x1);

  FUNC_1(VAR_1,0x5,FUNC_0(VAR_1,0x5)|0x08);

  FUNC_1(VAR_1,0x22,FUNC_0(VAR_1,0x22)|0x10);

  break;
 case 130:
  FUNC_1(VAR_1,0x37,FUNC_0(VAR_1,0x37)&0xfe);

  break;
 default:
  return -VAR_0;
 }

 return 0;
}
