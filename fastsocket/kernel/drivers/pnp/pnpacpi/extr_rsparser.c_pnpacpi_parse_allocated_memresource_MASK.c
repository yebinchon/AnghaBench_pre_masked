
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pnp_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pnp_dev*,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct pnp_dev *VAR_3,
      u64 VAR_4, u64 VAR_5,
      int VAR_6)
{
 int VAR_7 = 0;
 u64 VAR_8 = VAR_4 + VAR_5 - 1;

 if (VAR_5 == 0)
  VAR_7 |= VAR_1;
 if (VAR_6 == VAR_0)
  VAR_7 |= VAR_2;

 FUNC_0(VAR_3, VAR_4, VAR_8, VAR_7);
}
