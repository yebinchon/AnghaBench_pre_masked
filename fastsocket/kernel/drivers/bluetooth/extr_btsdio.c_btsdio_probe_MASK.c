
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func_tuple {struct sdio_func_tuple* next; int size; int code; } ;
struct sdio_func {int dev; int class; struct sdio_func_tuple* tuples; } ;
struct sdio_device_id {int dummy; } ;
struct hci_dev {int owner; int destruct; int send; int flush; int close; int open; struct btsdio_data* driver_data; int type; } ;
struct btsdio_data {struct hci_dev* hdev; int txq; int work; struct sdio_func* func; } ;


 int FUNC_0 (char*,struct sdio_func*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct hci_dev*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct hci_dev* FUNC_3 () ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct btsdio_data*) ;
 struct btsdio_data* FUNC_7 (int,int ) ;
 int FUNC_8 (struct sdio_func*,struct btsdio_data*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct sdio_func *VAR_10,
    const struct sdio_device_id *VAR_11)
{
 struct btsdio_data *VAR_12;
 struct hci_dev *VAR_13;
 struct sdio_func_tuple *VAR_14 = VAR_10->tuples;
 int VAR_15;

 FUNC_0("func %p id %p class 0x%04x", VAR_10, VAR_11, VAR_10->class);

 while (VAR_14) {
  FUNC_0("code 0x%x size %d", VAR_14->code, VAR_14->size);
  VAR_14 = VAR_14->next;
 }

 VAR_12 = FUNC_7(sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->func = VAR_10;

 FUNC_1(&VAR_12->work, VAR_9);

 FUNC_9(&VAR_12->txq);

 VAR_13 = FUNC_3();
 if (!VAR_13) {
  FUNC_6(VAR_12);
  return -VAR_0;
 }

 VAR_13->type = VAR_2;
 VAR_13->driver_data = VAR_12;

 VAR_12->hdev = VAR_13;

 FUNC_2(VAR_13, &VAR_10->dev);

 VAR_13->open = VAR_7;
 VAR_13->close = VAR_4;
 VAR_13->flush = VAR_6;
 VAR_13->send = VAR_8;
 VAR_13->destruct = VAR_5;

 VAR_13->owner = VAR_3;

 VAR_15 = FUNC_5(VAR_13);
 if (VAR_15 < 0) {
  FUNC_4(VAR_13);
  FUNC_6(VAR_12);
  return VAR_15;
 }

 FUNC_8(VAR_10, VAR_12);

 return 0;
}
