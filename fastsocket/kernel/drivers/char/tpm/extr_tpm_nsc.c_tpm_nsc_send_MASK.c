
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ base; } ;
struct tpm_chip {TYPE_1__ vendor; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct tpm_chip*) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct tpm_chip*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct tpm_chip *VAR_8, u8 * VAR_9, size_t VAR_10)
{
 u8 VAR_11;
 int VAR_12;







 FUNC_2(VAR_2, VAR_8->vendor.base + VAR_1);

 if (FUNC_1(VAR_8) != 0)
  return -VAR_0;

 if (FUNC_3(VAR_8, VAR_6, 0, &VAR_11) < 0) {
  FUNC_0(VAR_8->dev, "IBF timeout\n");
  return -VAR_0;
 }

 FUNC_2(VAR_4, VAR_8->vendor.base + VAR_1);
 if (FUNC_3(VAR_8, VAR_7, VAR_7, &VAR_11) < 0) {
  FUNC_0(VAR_8->dev, "IBR timeout\n");
  return -VAR_0;
 }

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  if (FUNC_3(VAR_8, VAR_6, 0, &VAR_11) < 0) {
   FUNC_0(VAR_8->dev,
    "IBF timeout (while writing data)\n");
   return -VAR_0;
  }
  FUNC_2(VAR_9[VAR_12], VAR_8->vendor.base + VAR_5);
 }

 if (FUNC_3(VAR_8, VAR_6, 0, &VAR_11) < 0) {
  FUNC_0(VAR_8->dev, "IBF timeout\n");
  return -VAR_0;
 }
 FUNC_2(VAR_3, VAR_8->vendor.base + VAR_1);

 return VAR_10;
}
