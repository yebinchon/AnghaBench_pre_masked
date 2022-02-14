
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct epson1355_par {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct epson1355_par*,int ) ;
 int FUNC_1 (struct epson1355_par*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct epson1355_par *VAR_1, int VAR_2)
{
 u8 VAR_3 = FUNC_0(VAR_1, VAR_0);

 if (VAR_2)
  VAR_3 |= 1;
 else
  VAR_3 &= ~1;

 FUNC_1(VAR_1, VAR_3, VAR_0);
}
