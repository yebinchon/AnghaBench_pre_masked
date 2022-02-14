
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;


 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

int FUNC_4(int VAR_8)
{
 int VAR_9 = -1;

 switch (FUNC_1(VAR_8)) {
 case 129:
  VAR_9 = FUNC_3(VAR_6 + VAR_4 +
    FUNC_2(VAR_8) * 0x70);
  VAR_9 &= VAR_0;
  VAR_9 >>= VAR_2;
  break;

 case 128:
  VAR_9 = FUNC_3(VAR_7 + VAR_5 +
    FUNC_2(VAR_8) * 0x70);
  VAR_9 &= VAR_1;
  VAR_9 >>= VAR_3;
  break;
 default:
  FUNC_0();
 }
 return VAR_9;
}
