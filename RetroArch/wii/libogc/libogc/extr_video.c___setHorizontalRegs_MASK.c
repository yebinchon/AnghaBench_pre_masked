
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct _timing {int hcs; int hce; int hlw; int hbe640; int hbs640; int hsy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static inline void FUNC_1(const struct _timing *VAR_2,u16 VAR_3,u16 VAR_4)
{
 u32 VAR_5,VAR_6;

 VAR_1[2] = (VAR_2->hcs<<8)|VAR_2->hce;
 VAR_1[3] = VAR_2->hlw;
 VAR_0 |= FUNC_0(2);
 VAR_0 |= FUNC_0(3);

 VAR_5 = (VAR_2->hbe640+VAR_3-40)&0x01ff;
 VAR_6 = (VAR_2->hbs640+VAR_3+40)-(720-VAR_4);
 VAR_1[4] = (VAR_5>>9)|(VAR_6<<1);
 VAR_1[5] = (VAR_5<<7)|VAR_2->hsy;
 VAR_0 |= FUNC_0(4);
 VAR_0 |= FUNC_0(5);
}
