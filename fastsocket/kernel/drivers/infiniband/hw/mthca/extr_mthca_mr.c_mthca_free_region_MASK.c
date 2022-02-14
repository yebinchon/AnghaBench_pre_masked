
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mpt_alloc; int mpt_table; } ;
struct mthca_dev {TYPE_1__ mr_table; } ;


 int FUNC_0 (struct mthca_dev*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct mthca_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mthca_dev *VAR_0, u32 VAR_1)
{
 FUNC_2(VAR_0, VAR_0->mr_table.mpt_table,
   FUNC_0(VAR_0, VAR_1));

 FUNC_1(&VAR_0->mr_table.mpt_alloc, FUNC_0(VAR_0, VAR_1));
}
