
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dma_pub {int dummy; } ;
struct dma_info {scalar_t__ ntxd; int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dma_info*,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int) ;

bool FUNC_5(struct dma_pub *VAR_7)
{
 struct dma_info *VAR_8 = (struct dma_info *)VAR_7;
 u32 VAR_9;

 if (VAR_8->ntxd == 0)
  return 1;


 FUNC_3(VAR_8->core, FUNC_0(VAR_8, VAR_5), VAR_0);
 FUNC_1(((VAR_9 =
     (FUNC_2(VAR_8->core, FUNC_0(VAR_8, VAR_6)) &
      VAR_3)) != VAR_1) &&
    (VAR_9 != VAR_2) && (VAR_9 != VAR_4),
   10000);

 FUNC_3(VAR_8->core, FUNC_0(VAR_8, VAR_5), 0);
 FUNC_1(((VAR_9 =
     (FUNC_2(VAR_8->core, FUNC_0(VAR_8, VAR_6)) &
      VAR_3)) != VAR_1), 10000);


 FUNC_4(300);

 return VAR_9 == VAR_1;
}
