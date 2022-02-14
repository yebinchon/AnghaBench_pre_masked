
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int pdev; int fn; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ,int ) ;
 int FUNC_1 (int ,int,int,int *) ;

__attribute__((used)) static int FUNC_2(struct adapter *VAR_1, unsigned int VAR_2, u32 VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2, VAR_1->fn, VAR_0);

 if (VAR_4 >= 0)
  VAR_4 = FUNC_1(VAR_1->pdev, VAR_4, sizeof(u32), &VAR_3);
 return VAR_4 < 0 ? VAR_4 : 0;
}
