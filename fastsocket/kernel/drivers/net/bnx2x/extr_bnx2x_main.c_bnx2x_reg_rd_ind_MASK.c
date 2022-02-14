
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static u32 FUNC_2(struct bnx2x *VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 FUNC_1(VAR_3->pdev, VAR_0, VAR_4);
 FUNC_0(VAR_3->pdev, VAR_1, &VAR_5);
 FUNC_1(VAR_3->pdev, VAR_0,
          VAR_2);

 return VAR_5;
}
