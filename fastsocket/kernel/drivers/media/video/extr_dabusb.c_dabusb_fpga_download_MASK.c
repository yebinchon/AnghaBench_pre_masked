
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct firmware {int* data; } ;
typedef TYPE_2__* pdabusb_t ;
typedef TYPE_3__* pbulk_transfer_t ;
typedef int bulk_transfer_t ;
struct TYPE_15__ {int pipe; int* data; int size; } ;
struct TYPE_14__ {TYPE_1__* usbdev; } ;
struct TYPE_13__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (int,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int*,int*,int) ;
 int FUNC_9 (struct firmware const*) ;
 int FUNC_10 (struct firmware const**,char*,int *) ;

__attribute__((used)) static int FUNC_11 (pdabusb_t VAR_2, const char *VAR_3)
{
 pbulk_transfer_t VAR_4 = FUNC_6 (sizeof (bulk_transfer_t), VAR_1);
 const struct firmware *VAR_5;
 unsigned int VAR_6, VAR_7;
 int VAR_8;

 FUNC_3("Enter dabusb_fpga_download (internal)");

 if (!VAR_4) {
  FUNC_4(&VAR_2->usbdev->dev,
   "kmalloc(sizeof(bulk_transfer_t))==NULL\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_10(&VAR_5, "dabusb/bitstream.bin", &VAR_2->usbdev->dev);
 if (VAR_8) {
  FUNC_4(&VAR_2->usbdev->dev,
   "Failed to load \"dabusb/bitstream.bin\": %d\n", VAR_8);
  FUNC_5(VAR_4);
  return VAR_8;
 }

 VAR_4->pipe = 1;
 VAR_8 = FUNC_1 (VAR_2, VAR_4);
 FUNC_7 (10);
 VAR_6 = VAR_5->data[73] + (VAR_5->data[72] << 8);

 FUNC_3("Bitstream len: %i", VAR_6);

 VAR_4->data[0] = 0x2b;
 VAR_4->data[1] = 0;
 VAR_4->data[2] = 0;
 VAR_4->data[3] = 60;

 for (VAR_7 = 0; VAR_7 <= VAR_6 + 60; VAR_7 += 60) {

  VAR_4->size = 64;
  FUNC_8 (VAR_4->data + 4, VAR_5->data + 74 + VAR_7, 60);
  VAR_8 = FUNC_0 (VAR_2, VAR_4);
  if (VAR_8 < 0) {
   FUNC_4(&VAR_2->usbdev->dev, "dabusb_bulk failed.\n");
   break;
  }
  FUNC_7 (1);
 }

 VAR_8 = FUNC_2 (VAR_2, VAR_4);
 FUNC_5 (VAR_4);
 FUNC_9(VAR_5);

 FUNC_3("exit dabusb_fpga_download");

 return VAR_8;
}
