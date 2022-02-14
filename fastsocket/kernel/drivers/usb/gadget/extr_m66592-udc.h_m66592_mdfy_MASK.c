
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct m66592 {int dummy; } ;


 int FUNC_0 (struct m66592*,unsigned long) ;
 int FUNC_1 (struct m66592*,int,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct m66592 *VAR_0, u16 VAR_1, u16 VAR_2,
  unsigned long VAR_3)
{
 u16 VAR_4;
 VAR_4 = FUNC_0(VAR_0, VAR_3);
 VAR_4 = VAR_4 & (~VAR_2);
 VAR_4 = VAR_4 | VAR_1;
 FUNC_1(VAR_0, VAR_4, VAR_3);
}
