
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct mthca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mthca_dev*,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_1 (struct mthca_dev*,char*,int ,unsigned long long) ;

int FUNC_2(struct mthca_dev *VAR_2, u64 VAR_3, u32 VAR_4)
{
 FUNC_1(VAR_2, "Unmapping %d pages at %llx from ICM.\n",
    VAR_4, (unsigned long long) VAR_3);

 return FUNC_0(VAR_2, VAR_3, VAR_4, 0,
   VAR_1, VAR_0);
}
