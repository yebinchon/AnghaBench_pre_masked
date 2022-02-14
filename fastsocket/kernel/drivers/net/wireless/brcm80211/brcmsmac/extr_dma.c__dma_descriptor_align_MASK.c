
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dma_info {scalar_t__ d64txregbase; scalar_t__ d64rxregbase; int core; } ;


 int FUNC_0 (struct dma_info*,int ) ;
 int FUNC_1 (struct dma_info*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static bool FUNC_4(struct dma_info *VAR_1)
{
 u32 VAR_2;


 if (VAR_1->d64txregbase != 0) {
  FUNC_3(VAR_1->core, FUNC_1(VAR_1, VAR_0), 0xff0);
  VAR_2 = FUNC_2(VAR_1->core, FUNC_1(VAR_1, VAR_0));
  if (VAR_2 != 0)
   return 0;
 } else if (VAR_1->d64rxregbase != 0) {
  FUNC_3(VAR_1->core, FUNC_0(VAR_1, VAR_0), 0xff0);
  VAR_2 = FUNC_2(VAR_1->core, FUNC_0(VAR_1, VAR_0));
  if (VAR_2 != 0)
   return 0;
 }
 return 1;
}
