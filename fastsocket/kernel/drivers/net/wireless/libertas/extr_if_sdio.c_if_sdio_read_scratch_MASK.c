
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct if_sdio_card {scalar_t__ scratch_reg; int func; } ;


 int FUNC_0 (int ,scalar_t__,int*) ;

__attribute__((used)) static u16 FUNC_1(struct if_sdio_card *VAR_0, int *VAR_1)
{
 int VAR_2;
 u16 VAR_3;

 VAR_3 = FUNC_0(VAR_0->func, VAR_0->scratch_reg, &VAR_2);
 if (!VAR_2)
  VAR_3 |= FUNC_0(VAR_0->func, VAR_0->scratch_reg + 1,
     &VAR_2) << 8;

 if (VAR_1)
  *VAR_1 = VAR_2;

 if (VAR_2)
  return 0xffff;

 return VAR_3;
}
