
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mthca_mailbox {int dma; int * buf; } ;
struct mthca_dev {int dummy; } ;
struct mthca_adapter {int board_id; int inta_pin; int revision_id; int device_id; int vendor_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mthca_mailbox*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (struct mthca_mailbox*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,int ) ;
 struct mthca_mailbox* FUNC_4 (struct mthca_dev*,int ) ;
 int FUNC_5 (struct mthca_dev*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct mthca_dev*,struct mthca_mailbox*) ;
 int FUNC_7 (struct mthca_dev*) ;

int FUNC_8(struct mthca_dev *VAR_8,
   struct mthca_adapter *VAR_9)
{
 struct mthca_mailbox *VAR_10;
 u32 *VAR_11;
 int VAR_12;
 VAR_10 = FUNC_4(VAR_8, VAR_2);
 if (FUNC_0(VAR_10))
  return FUNC_2(VAR_10);
 VAR_11 = VAR_10->buf;

 VAR_12 = FUNC_5(VAR_8, 0, VAR_10->dma, 0, 0, VAR_0,
       VAR_1);

 if (VAR_12)
  goto out;

 if (!FUNC_7(VAR_8)) {
  FUNC_1(VAR_9->vendor_id, VAR_11,
     0x00);
  FUNC_1(VAR_9->device_id, VAR_11,
     0x04);
  FUNC_1(VAR_9->revision_id, VAR_11,
     0x08);
 }
 FUNC_1(VAR_9->inta_pin, VAR_11, 0x10);

 FUNC_3(VAR_11 + 0x20 / 4,
       VAR_9->board_id);

out:
 FUNC_6(VAR_8, VAR_10);
 return VAR_12;
}
