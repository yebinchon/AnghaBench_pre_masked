
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct spi_device {TYPE_1__* master; struct pl022_config_chip* controller_data; int dev; } ;
struct pl022_config_chip {int data_size; } ;
struct dummy {int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* setup ) (struct spi_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct dummy* FUNC_0 (int *) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int FUNC_3 (int*,int,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct spi_device*,int*,int) ;
 int FUNC_9 (struct spi_device*,int) ;
 int FUNC_10 (struct spi_device*,int*,int) ;
 int FUNC_11 (struct spi_device*,int*,int,int*,int) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (struct spi_device*) ;
 int FUNC_14 (struct spi_device*) ;
 struct spi_device* FUNC_15 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_16(struct device *VAR_7,
  struct device_attribute *VAR_8, char *VAR_9)
{
 struct spi_device *VAR_10 = FUNC_15(VAR_7);
 struct dummy *VAR_11 = FUNC_0(&VAR_10->dev);
 struct pl022_config_chip *VAR_12 = VAR_10->controller_data;
 int VAR_13;
 u8 VAR_14[14] = {0xDE, 0xAD, 0xBE, 0xEF, 0x2B, 0xAD,
   0xCA, 0xFE, 0xBA, 0xBE, 0xB1, 0x05,
   0xF0, 0x0D};
 u8 VAR_15[14];
 u8 *VAR_16;
 u8 *VAR_17;

 if (FUNC_4(&VAR_11->lock))
  return -VAR_3;

 VAR_16 = FUNC_2(VAR_0, VAR_4);
 if (VAR_16 == ((void*)0)) {
  VAR_13 = -VAR_2;
  goto out;
 }
 VAR_17 = FUNC_2(VAR_0, VAR_4);


 FUNC_3(VAR_16, 0xAA, VAR_0);





 VAR_12->data_size = VAR_6;

 VAR_10->master->setup(VAR_10);


 FUNC_6("Simple test 1: write 0xAA byte, read back garbage byte "
  "in 8bit mode\n");
 VAR_13 = FUNC_9(VAR_10, 0xAA);
 if (VAR_13 < 0)
  FUNC_7("Siple test 1: FAILURE: spi_write_then_read "
      "failed with status %d\n", VAR_13);
 else
  FUNC_6("Simple test 1: SUCCESS!\n");

 FUNC_6("Simple test 2: write 8 bytes, read back 8 bytes garbage "
  "in 8bit mode (full FIFO)\n");
 VAR_13 = FUNC_11(VAR_10, &VAR_14[0], 8, &VAR_15[0], 8);
 if (VAR_13 < 0)
  FUNC_7("Simple test 2: FAILURE: spi_write_then_read() "
      "failed with status %d\n", VAR_13);
 else
  FUNC_6("Simple test 2: SUCCESS!\n");

 FUNC_6("Simple test 3: write 14 bytes, read back 14 bytes garbage "
  "in 8bit mode (see if we overflow FIFO)\n");
 VAR_13 = FUNC_11(VAR_10, &VAR_14[0], 14, &VAR_15[0], 14);
 if (VAR_13 < 0)
  FUNC_7("Simple test 3: FAILURE: failed with status %d "
      "(probably FIFO overrun)\n", VAR_13);
 else
  FUNC_6("Simple test 3: SUCCESS!\n");

 FUNC_6("Simple test 4: write 8 bytes with spi_write(), read 8 "
  "bytes garbage with spi_read() in 8bit mode\n");
 VAR_13 = FUNC_10(VAR_10, &VAR_14[0], 8);
 if (VAR_13 < 0)
  FUNC_7("Simple test 4 step 1: FAILURE: spi_write() "
      "failed with status %d\n", VAR_13);
 else
  FUNC_6("Simple test 4 step 1: SUCCESS!\n");
 VAR_13 = FUNC_8(VAR_10, &VAR_15[0], 8);
 if (VAR_13 < 0)
  FUNC_7("Simple test 4 step 2: FAILURE: spi_read() "
      "failed with status %d\n", VAR_13);
 else
  FUNC_6("Simple test 4 step 2: SUCCESS!\n");

 FUNC_6("Simple test 5: write 14 bytes with spi_write(), read "
  "14 bytes garbage with spi_read() in 8bit mode\n");
 VAR_13 = FUNC_10(VAR_10, &VAR_14[0], 14);
 if (VAR_13 < 0)
  FUNC_7("Simple test 5 step 1: FAILURE: spi_write() "
      "failed with status %d (probably FIFO overrun)\n",
      VAR_13);
 else
  FUNC_6("Simple test 5 step 1: SUCCESS!\n");
 VAR_13 = FUNC_8(VAR_10, &VAR_15[0], 14);
 if (VAR_13 < 0)
  FUNC_7("Simple test 5 step 2: FAILURE: spi_read() "
      "failed with status %d (probably FIFO overrun)\n",
      VAR_13);
 else
  FUNC_6("Simple test 5: SUCCESS!\n");

 FUNC_6("Simple test 6: write %d bytes with spi_write(), "
  "read %d bytes garbage with spi_read() in 8bit mode\n",
  VAR_0, VAR_0);
 VAR_13 = FUNC_10(VAR_10, &VAR_16[0], VAR_0);
 if (VAR_13 < 0)
  FUNC_7("Simple test 6 step 1: FAILURE: spi_write() "
      "failed with status %d (probably FIFO overrun)\n",
      VAR_13);
 else
  FUNC_6("Simple test 6 step 1: SUCCESS!\n");
 VAR_13 = FUNC_8(VAR_10, &VAR_17[0], VAR_0);
 if (VAR_13 < 0)
  FUNC_7("Simple test 6 step 2: FAILURE: spi_read() "
      "failed with status %d (probably FIFO overrun)\n",
      VAR_13);
 else
  FUNC_6("Simple test 6: SUCCESS!\n");






 VAR_12->data_size = VAR_5;

 VAR_10->master->setup(VAR_10);

 FUNC_6("Simple test 7: write 0xAA byte, read back garbage byte "
  "in 16bit bus mode\n");
 VAR_13 = FUNC_9(VAR_10, 0xAA);
 if (VAR_13 == -VAR_1)
  FUNC_6("Simple test 7: SUCCESS! (expected failure with "
   "status EIO)\n");
 else if (VAR_13 < 0)
  FUNC_7("Siple test 7: FAILURE: spi_write_then_read "
      "failed with status %d\n", VAR_13);
 else
  FUNC_7("Siple test 7: FAILURE: spi_write_then_read "
      "succeeded but it was expected to fail!\n");

 FUNC_6("Simple test 8: write 8 bytes, read back 8 bytes garbage "
  "in 16bit mode (full FIFO)\n");
 VAR_13 = FUNC_11(VAR_10, &VAR_14[0], 8, &VAR_15[0], 8);
 if (VAR_13 < 0)
  FUNC_7("Simple test 8: FAILURE: spi_write_then_read() "
      "failed with status %d\n", VAR_13);
 else
  FUNC_6("Simple test 8: SUCCESS!\n");

 FUNC_6("Simple test 9: write 14 bytes, read back 14 bytes garbage "
  "in 16bit mode (see if we overflow FIFO)\n");
 VAR_13 = FUNC_11(VAR_10, &VAR_14[0], 14, &VAR_15[0], 14);
 if (VAR_13 < 0)
  FUNC_7("Simple test 9: FAILURE: failed with status %d "
      "(probably FIFO overrun)\n", VAR_13);
 else
  FUNC_6("Simple test 9: SUCCESS!\n");

 FUNC_6("Simple test 10: write %d bytes with spi_write(), "
        "read %d bytes garbage with spi_read() in 16bit mode\n",
        VAR_0, VAR_0);
 VAR_13 = FUNC_10(VAR_10, &VAR_16[0], VAR_0);
 if (VAR_13 < 0)
  FUNC_7("Simple test 10 step 1: FAILURE: spi_write() "
      "failed with status %d (probably FIFO overrun)\n",
      VAR_13);
 else
  FUNC_6("Simple test 10 step 1: SUCCESS!\n");

 VAR_13 = FUNC_8(VAR_10, &VAR_17[0], VAR_0);
 if (VAR_13 < 0)
  FUNC_7("Simple test 10 step 2: FAILURE: spi_read() "
      "failed with status %d (probably FIFO overrun)\n",
      VAR_13);
 else
  FUNC_6("Simple test 10: SUCCESS!\n");

 VAR_13 = FUNC_12(VAR_9, "loop test complete\n");
 FUNC_1(VAR_17);
 FUNC_1(VAR_16);
 out:
 FUNC_5(&VAR_11->lock);
 return VAR_13;
}
