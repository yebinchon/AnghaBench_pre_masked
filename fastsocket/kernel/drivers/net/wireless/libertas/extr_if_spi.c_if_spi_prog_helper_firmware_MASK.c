
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int temp ;
struct spi_device {int dev; } ;
struct if_spi_card {int helper_fw_name; struct spi_device* spi; } ;
struct firmware {int size; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int const*,int ) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (struct firmware const*) ;
 int FUNC_9 (struct firmware const**,int ,int *) ;
 int FUNC_10 (struct if_spi_card*,int,int ) ;
 int FUNC_11 (struct if_spi_card*,int ,int ,int ) ;
 int FUNC_12 (struct if_spi_card*,int ,int *,int) ;
 int FUNC_13 (struct if_spi_card*,int ,int) ;

__attribute__((used)) static int FUNC_14(struct if_spi_card *VAR_9)
{
 int VAR_10 = 0;
 const struct firmware *VAR_11 = ((void*)0);
 int VAR_12;
 const u8 *VAR_13;
 u8 VAR_14[VAR_1];
 struct spi_device *VAR_15 = VAR_9->spi;

 FUNC_0(VAR_8);

 VAR_10 = FUNC_10(VAR_9, 1, 0);
 if (VAR_10)
  goto out;

 VAR_10 = FUNC_9(&VAR_11, VAR_9->helper_fw_name, &VAR_15->dev);
 if (VAR_10) {
  FUNC_3("request_firmware failed with err = %d\n", VAR_10);
  goto out;
 }
 VAR_12 = VAR_11->size;
 VAR_13 = VAR_11->data;


 while (VAR_12 > 0) {


  VAR_10 = FUNC_13(VAR_9, VAR_7,
     VAR_1);
  if (VAR_10)
   goto release_firmware;

  VAR_10 = FUNC_11(VAR_9, VAR_6,
     VAR_5,
     VAR_5);
  if (VAR_10)
   goto release_firmware;



  FUNC_6(VAR_14, 0, sizeof(VAR_14));
  FUNC_5(VAR_14, VAR_13,
         FUNC_7(VAR_12, VAR_1));
  FUNC_4(10);
  VAR_10 = FUNC_12(VAR_9, VAR_4,
     VAR_14, VAR_1);
  if (VAR_10)
   goto release_firmware;


  VAR_10 = FUNC_13(VAR_9, VAR_6, 0);
  if (VAR_10)
   goto release_firmware;
  VAR_10 = FUNC_13(VAR_9, VAR_2,
           VAR_3);
  if (VAR_10)
   goto release_firmware;
  VAR_12 -= VAR_1;
  VAR_13 += VAR_1;
 }




 VAR_10 = FUNC_13(VAR_9, VAR_7, VAR_0);
 if (VAR_10)
  goto release_firmware;
 VAR_10 = FUNC_13(VAR_9, VAR_6, 0);
 if (VAR_10)
  goto release_firmware;
 VAR_10 = FUNC_13(VAR_9, VAR_2,
    VAR_3);
  goto release_firmware;

 FUNC_2("waiting for helper to boot...\n");

release_firmware:
 FUNC_8(VAR_11);
out:
 if (VAR_10)
  FUNC_3("failed to load helper firmware (err=%d)\n", VAR_10);
 FUNC_1(VAR_8, "err %d", VAR_10);
 return VAR_10;
}
