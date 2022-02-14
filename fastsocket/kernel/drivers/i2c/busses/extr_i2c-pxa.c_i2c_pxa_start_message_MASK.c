
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pxa_i2c {int msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pxa_i2c*) ;
 int FUNC_1 (struct pxa_i2c*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static inline void FUNC_5(struct pxa_i2c *VAR_4)
{
 u32 VAR_5;




 FUNC_4(FUNC_2(VAR_4->msg), FUNC_1(VAR_4));




 VAR_5 = FUNC_3(FUNC_0(VAR_4)) & ~(VAR_2 | VAR_0);
 FUNC_4(VAR_5 | VAR_1 | VAR_3, FUNC_0(VAR_4));
}
