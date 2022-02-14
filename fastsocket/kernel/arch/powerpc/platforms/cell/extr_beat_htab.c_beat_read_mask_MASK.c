
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int,int*) ;
 unsigned int VAR_2 ;

__attribute__((used)) static inline unsigned int FUNC_1(unsigned VAR_3)
{
 unsigned long VAR_4 = 0;
 u64 VAR_5[5];

 FUNC_0(0, VAR_3 + 0, VAR_5);
 if (!(VAR_5[0] & VAR_1))
  VAR_4 |= 0x8000;
 if (!(VAR_5[1] & VAR_1))
  VAR_4 |= 0x4000;
 if (!(VAR_5[2] & VAR_1))
  VAR_4 |= 0x2000;
 if (!(VAR_5[3] & VAR_1))
  VAR_4 |= 0x1000;
 FUNC_0(0, VAR_3 + 4, VAR_5);
 if (!(VAR_5[0] & VAR_1))
  VAR_4 |= 0x0800;
 if (!(VAR_5[1] & VAR_1))
  VAR_4 |= 0x0400;
 if (!(VAR_5[2] & VAR_1))
  VAR_4 |= 0x0200;
 if (!(VAR_5[3] & VAR_1))
  VAR_4 |= 0x0100;
 VAR_3 = ~VAR_3 & (VAR_2 * VAR_0);
 FUNC_0(0, VAR_3 + 0, VAR_5);
 if (!(VAR_5[0] & VAR_1))
  VAR_4 |= 0x80;
 if (!(VAR_5[1] & VAR_1))
  VAR_4 |= 0x40;
 if (!(VAR_5[2] & VAR_1))
  VAR_4 |= 0x20;
 if (!(VAR_5[3] & VAR_1))
  VAR_4 |= 0x10;
 FUNC_0(0, VAR_3 + 4, VAR_5);
 if (!(VAR_5[0] & VAR_1))
  VAR_4 |= 0x08;
 if (!(VAR_5[1] & VAR_1))
  VAR_4 |= 0x04;
 if (!(VAR_5[2] & VAR_1))
  VAR_4 |= 0x02;
 if (!(VAR_5[3] & VAR_1))
  VAR_4 |= 0x01;
 return VAR_4;
}
