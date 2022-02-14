
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mthca_eq {int dummy; } ;
struct mthca_dev {int dummy; } ;


 int FUNC_0 (struct mthca_dev*,struct mthca_eq*,int ) ;
 scalar_t__ FUNC_1 (struct mthca_dev*) ;
 int FUNC_2 (struct mthca_dev*,struct mthca_eq*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct mthca_dev *VAR_0, struct mthca_eq *VAR_1, u32 VAR_2)
{
 if (FUNC_1(VAR_0))
  FUNC_0(VAR_0, VAR_1, VAR_2);
 else
  FUNC_2(VAR_0, VAR_1, VAR_2);
}
