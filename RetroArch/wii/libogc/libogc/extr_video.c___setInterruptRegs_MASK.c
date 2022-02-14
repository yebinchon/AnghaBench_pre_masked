
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct _timing {int nhlines; int hlw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static inline void FUNC_1(const struct _timing *VAR_2)
{
 u16 VAR_3;

 VAR_3 = 0;
 if(VAR_2->nhlines%2) VAR_3 = VAR_2->hlw;
 VAR_1[24] = 0x1000|((VAR_2->nhlines/2)+1);
 VAR_1[25] = VAR_3+1;
 VAR_0 |= FUNC_0(24);
 VAR_0 |= FUNC_0(25);
}
