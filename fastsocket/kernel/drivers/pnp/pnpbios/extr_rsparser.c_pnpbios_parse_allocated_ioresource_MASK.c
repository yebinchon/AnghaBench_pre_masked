
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pnp_dev*,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct pnp_dev *VAR_1,
            int VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = VAR_2 + VAR_3 - 1;

 if (VAR_3 <= 0 || VAR_5 >= 0x10003)
  VAR_4 |= VAR_0;

 FUNC_0(VAR_1, VAR_2, VAR_5, VAR_4);
}
