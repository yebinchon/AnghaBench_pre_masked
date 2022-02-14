
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_3)
{
 unsigned long VAR_4;

 FUNC_2(&VAR_2, VAR_4);
 if (VAR_3 > 7) {
  VAR_1 |= 1 << (VAR_3-8);
  FUNC_0(0xA1);
  FUNC_1(VAR_1, 0xA1);
  FUNC_1(0x20, 0xA0);
  FUNC_1(0x20, 0x20);
 } else {
  VAR_0 |= 1 << VAR_3;
  FUNC_0(0x21);
  FUNC_1(VAR_0, 0x21);
  FUNC_1(0x20, 0x20);
 }
 FUNC_3(&VAR_2, VAR_4);
}
