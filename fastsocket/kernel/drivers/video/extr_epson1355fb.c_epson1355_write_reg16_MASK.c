
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct epson1355_par {int dummy; } ;


 int FUNC_0 (struct epson1355_par*,int,int) ;

__attribute__((used)) static inline void FUNC_1(struct epson1355_par *VAR_0, u16 VAR_1, int VAR_2)
{
 u8 VAR_3 = VAR_1 & 0xff;
 u8 VAR_4 = (VAR_1 >> 8) & 0xff;

 FUNC_0(VAR_0, VAR_3, VAR_2);
 FUNC_0(VAR_0, VAR_4, VAR_2 + 1);
}
