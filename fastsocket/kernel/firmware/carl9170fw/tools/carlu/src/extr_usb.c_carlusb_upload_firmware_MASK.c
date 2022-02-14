
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct carlu {int dev_list; int * dev; scalar_t__ miniboot_size; int fw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ,size_t*) ;
 int FUNC_4 (struct carlu*,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int,int,int,int ,void*,int,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct carlu *VAR_2, bool VAR_3)
{
 uint32_t VAR_4 = 0x200000;
 size_t VAR_5;
 void *VAR_6;
 int VAR_7 = 0;

 FUNC_5("initiating firmware image upload procedure.\n");

 VAR_6 = FUNC_3(VAR_2->fw, &VAR_5);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 if (VAR_2->miniboot_size) {
  FUNC_5("Miniboot firmware size:%d\n", VAR_2->miniboot_size);
  VAR_5 -= VAR_2->miniboot_size;
  VAR_6 += VAR_2->miniboot_size;
 }

 while (VAR_5) {
  int VAR_8 = VAR_5 > 4096 ? 4096 : VAR_5;

  VAR_7 = FUNC_8(VAR_2->dev, 0x40, 0x30, VAR_4 >> 8, 0, VAR_6, VAR_8, 1000);
  if (VAR_7 != VAR_8 && VAR_7 != VAR_1) {
   FUNC_6("==>firmware upload failed (%d)\n", VAR_7);
   return -VAR_0;
  }

  FUNC_5("uploaded %d bytes to start address 0x%04x.\n", VAR_8, VAR_4);

  VAR_6 += VAR_8;
  VAR_4 += VAR_8;
  VAR_5 -= VAR_8;
 }

 if (VAR_3) {
  VAR_7 = FUNC_8(VAR_2->dev, 0x40, 0x31, 0, 0, ((void*)0), 0, 5000);
  if (VAR_7 < 0) {
   FUNC_6("unable to boot firmware (%d)\n", VAR_7);
   return -VAR_0;
  }


  FUNC_2(100);





  FUNC_9(VAR_2->dev, 0);
  FUNC_7(VAR_2->dev);
  VAR_2->dev = ((void*)0);
  FUNC_10(&VAR_2->dev_list);

  VAR_7 = FUNC_4(VAR_2, 0);
 }

 return 0;
}
