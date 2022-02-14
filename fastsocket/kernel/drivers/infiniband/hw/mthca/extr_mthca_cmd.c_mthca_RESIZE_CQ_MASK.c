
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mthca_mailbox {int dma; int * buf; } ;
struct mthca_dev {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mthca_mailbox*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct mthca_mailbox*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int ,int ) ;
 struct mthca_mailbox* FUNC_4 (struct mthca_dev*,int ) ;
 int FUNC_5 (struct mthca_dev*,int ,int,int,int ,int ) ;
 int FUNC_6 (struct mthca_dev*,struct mthca_mailbox*) ;

int FUNC_7(struct mthca_dev *VAR_6, int VAR_7, u32 VAR_8, u8 VAR_9)
{
 struct mthca_mailbox *VAR_10;
 __be32 *VAR_11;
 int VAR_12;





 VAR_10 = FUNC_4(VAR_6, VAR_2);
 if (FUNC_0(VAR_10))
  return FUNC_2(VAR_10);
 VAR_11 = VAR_10->buf;

 FUNC_3(VAR_11, 0, 0x40);




 FUNC_1(VAR_11, VAR_9, 0x0c);
 FUNC_1(VAR_11, VAR_8, 0x1c);

 VAR_12 = FUNC_5(VAR_6, VAR_10->dma, VAR_7, 1, VAR_0,
   VAR_1);

 FUNC_6(VAR_6, VAR_10);
 return VAR_12;
}
