
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kaweth_device {int* firmware_buf; TYPE_1__* dev; } ;
struct firmware {int size; int data; } ;
typedef void* __u8 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct kaweth_device*,int ,int ,int,int ,int ,void*,int,int ) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (struct firmware const*) ;
 int FUNC_5 (struct firmware const**,char const*,int *) ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_7(struct kaweth_device *VAR_7,
        const char *VAR_8,
        __u8 VAR_9,
        __u8 VAR_10)
{
 const struct firmware *VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_13 = FUNC_5(&VAR_11, VAR_8, &VAR_7->dev->dev);
 if (VAR_13) {
  FUNC_1("Firmware request failed\n");
  return VAR_13;
 }

 if (VAR_11->size > VAR_3) {
  FUNC_1("Firmware too big: %zu", VAR_11->size);
  return -VAR_0;
 }
 VAR_12 = VAR_11->size;
 FUNC_3(VAR_7->firmware_buf, VAR_11->data, VAR_11->size);

 FUNC_4(VAR_11);

 VAR_7->firmware_buf[2] = (VAR_12 & 0xFF) - 7;
 VAR_7->firmware_buf[3] = VAR_12 >> 8;
 VAR_7->firmware_buf[4] = VAR_10;
 VAR_7->firmware_buf[5] = VAR_9;

 FUNC_0("High: %i, Low:%i", VAR_7->firmware_buf[3],
     VAR_7->firmware_buf[2]);

 FUNC_0("Downloading firmware at %p to kaweth device at %p",
     VAR_11->data, VAR_7);
 FUNC_0("Firmware length: %d", VAR_12);

 return FUNC_2(VAR_7,
                FUNC_6(VAR_7->dev, 0),
         VAR_1,
         VAR_6 | VAR_4 | VAR_5,
         0,
         0,
         (void *)VAR_7->firmware_buf,
         VAR_12,
         VAR_2);
}
