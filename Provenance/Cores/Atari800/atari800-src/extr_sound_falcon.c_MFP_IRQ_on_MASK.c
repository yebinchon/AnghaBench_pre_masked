
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (long,int ) ;
 int FUNC_3 (int ,int,int,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_4(void)
{
 FUNC_2((long)VAR_4, VAR_6);
 if (VAR_5 == VAR_2)
  VAR_0[0x10] = 0x80 | 2;
 else if (VAR_5 == VAR_3)
  VAR_0[0x10] = 0x80 | 3;
 else
  VAR_0[0x10] = 0x80 | 1;

 VAR_0[0] = 0x400 | 3;

 FUNC_1(13, VAR_7);
 FUNC_3(0, 8, 1, VAR_7);
 VAR_1 &= ~(1 << 3);
 FUNC_0(13);
}
