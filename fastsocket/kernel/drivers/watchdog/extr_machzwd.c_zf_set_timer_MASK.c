
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,unsigned short) ;

__attribute__((used)) static inline void FUNC_2(unsigned short VAR_2, unsigned char VAR_3)
{
 switch (VAR_3) {
 case 129:
  FUNC_1(VAR_0, VAR_2);
 case 128:
  FUNC_0(VAR_1, VAR_2 > 0xff ? 0xff : VAR_2);
 default:
  return;
 }
}
