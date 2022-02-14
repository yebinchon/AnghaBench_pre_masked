
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_pub {int dummy; } ;
struct dma_info {scalar_t__ ntxd; int core; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_info*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;

bool FUNC_2(struct dma_pub *VAR_2)
{
 struct dma_info *VAR_3 = (struct dma_info *)VAR_2;

 return (VAR_3->ntxd == 0) ||
        ((FUNC_1(VAR_3->core,
        FUNC_0(VAR_3, VAR_1)) & VAR_0) ==
  VAR_0);
}
