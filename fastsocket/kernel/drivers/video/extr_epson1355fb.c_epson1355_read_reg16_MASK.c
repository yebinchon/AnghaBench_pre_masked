
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct epson1355_par {int dummy; } ;


 int FUNC_0 (struct epson1355_par*,int) ;

__attribute__((used)) static inline u16 FUNC_1(struct epson1355_par *VAR_0, int VAR_1)
{
 u8 VAR_2 = FUNC_0(VAR_0, VAR_1);
 u8 VAR_3 = FUNC_0(VAR_0, VAR_1 + 1);

 return (VAR_3 << 8) | VAR_2;
}
