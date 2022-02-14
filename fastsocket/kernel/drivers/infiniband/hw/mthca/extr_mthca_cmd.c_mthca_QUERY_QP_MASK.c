
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mthca_mailbox {int dma; } ;
struct mthca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mthca_dev*,int ,int ,int,int ,int ,int ) ;

int FUNC_1(struct mthca_dev *VAR_2, u32 VAR_3, int VAR_4,
     struct mthca_mailbox *VAR_5)
{
 return FUNC_0(VAR_2, 0, VAR_5->dma, (!!VAR_4 << 24) | VAR_3, 0,
        VAR_0, VAR_1);
}
