
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct bfusb_data {TYPE_1__* udev; int bulk_out_ep; } ;
struct TYPE_6__ {scalar_t__* toggle; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,struct bfusb_data*,TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (unsigned char*,unsigned char const*,int) ;
 int FUNC_6 (int ,int,scalar_t__) ;
 int VAR_7 ;
 int FUNC_7 (TYPE_1__*,int,unsigned char*,int,int*,int ) ;
 int FUNC_8 (TYPE_1__*,int,int ,int ,int,int ,int *,int ,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_11(struct bfusb_data *VAR_8,
          const unsigned char *VAR_9, int VAR_10)
{
 unsigned char *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16 = 0;

 FUNC_0("bfusb %p udev %p", VAR_8, VAR_8->udev);

 FUNC_2("BlueFRITZ! USB loading firmware");

 VAR_13 = FUNC_10(VAR_8->udev, 0);

 if (FUNC_8(VAR_8->udev, VAR_13, VAR_6,
    0, 1, 0, ((void*)0), 0, VAR_5) < 0) {
  FUNC_1("Can't change to loading configuration");
  return -VAR_2;
 }

 VAR_8->udev->toggle[0] = VAR_8->udev->toggle[1] = 0;

 VAR_11 = FUNC_4(VAR_1 + 3, VAR_4);
 if (!VAR_11) {
  FUNC_1("Can't allocate memory chunk for firmware");
  return -VAR_3;
 }

 VAR_13 = FUNC_9(VAR_8->udev, VAR_8->bulk_out_ep);

 while (VAR_10) {
  VAR_15 = FUNC_6(VAR_7, VAR_10, VAR_1 + 3);

  FUNC_5(VAR_11, VAR_9 + VAR_16, VAR_15);

  VAR_12 = FUNC_7(VAR_8->udev, VAR_13, VAR_11, VAR_15,
     &VAR_14, VAR_0);

  if (VAR_12 || (VAR_14 != VAR_15)) {
   FUNC_1("Error in firmware loading");
   goto error;
  }

  VAR_16 += VAR_15;
  VAR_10 -= VAR_15;
 }

 VAR_12 = FUNC_7(VAR_8->udev, VAR_13, ((void*)0), 0,
     &VAR_14, VAR_0);
 if (VAR_12 < 0) {
  FUNC_1("Error in null packet request");
  goto error;
 }

 VAR_13 = FUNC_10(VAR_8->udev, 0);

 VAR_12 = FUNC_8(VAR_8->udev, VAR_13, VAR_6,
    0, 2, 0, ((void*)0), 0, VAR_5);
 if (VAR_12 < 0) {
  FUNC_1("Can't change to running configuration");
  goto error;
 }

 VAR_8->udev->toggle[0] = VAR_8->udev->toggle[1] = 0;

 FUNC_2("BlueFRITZ! USB device ready");

 FUNC_3(VAR_11);
 return 0;

error:
 FUNC_3(VAR_11);

 VAR_13 = FUNC_10(VAR_8->udev, 0);

 FUNC_8(VAR_8->udev, VAR_13, VAR_6,
    0, 0, 0, ((void*)0), 0, VAR_5);

 return VAR_12;
}
