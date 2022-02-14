
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static int FUNC_1(void)
{
 int VAR_4, VAR_5 = 0;
 VAR_4 = FUNC_0(VAR_3, &VAR_5, 4);
 if (VAR_5 & 0x02)
  VAR_5 |= 0x05;
 if (VAR_5 & 0x08)
  VAR_5 |= 0x14;
 if (VAR_5 & 0x20)
  VAR_5 |= 0x50;
 if (VAR_5 & 0x80)
  VAR_5 |= 0x41;


 VAR_5 &= 0x7ff55;
 if (VAR_5 & (1 << 16))
  VAR_5 |= 1 << VAR_2;
 if (VAR_5 & (1 << 17))
  VAR_5 |= 1 << VAR_1;
 if (VAR_5 & (1 << 18))
  VAR_5 |= 1 << VAR_0;
 VAR_5 &= ~0x70000;

 return VAR_5;
}
