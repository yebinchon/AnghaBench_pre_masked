
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dma_pub {int dummy; } ;
struct dma_info {scalar_t__ nrxd; int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dma_info*,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

bool FUNC_4(struct dma_pub *VAR_4)
{
 struct dma_info *VAR_5 = (struct dma_info *)VAR_4;
 u32 VAR_6;

 if (VAR_5->nrxd == 0)
  return 1;

 FUNC_3(VAR_5->core, FUNC_0(VAR_5, VAR_2), 0);
 FUNC_1(((VAR_6 =
     (FUNC_2(VAR_5->core, FUNC_0(VAR_5, VAR_3)) &
      VAR_1)) != VAR_0), 10000);

 return VAR_6 == VAR_0;
}
