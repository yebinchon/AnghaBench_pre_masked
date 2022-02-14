
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct pm3_par {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pm3_par*,int) ;
 int FUNC_1 (struct pm3_par*,int ,unsigned int) ;
 int FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(struct pm3_par *VAR_3, unsigned VAR_4, u8 VAR_5)
{
 FUNC_0(VAR_3, 3);
 FUNC_1(VAR_3, VAR_0, (VAR_4 >> 8) & 0xff);
 FUNC_1(VAR_3, VAR_1, VAR_4 & 0xff);
 FUNC_2();
 FUNC_1(VAR_3, VAR_2, VAR_5);
 FUNC_2();
}
