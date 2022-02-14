
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int locality; int int_queue; int timeout_c; } ;
struct tpm_chip {TYPE_1__ vendor; int dev; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct tpm_chip*,int *,int) ;
 int FUNC_3 (struct tpm_chip*,int ,int ) ;
 int FUNC_4 (struct tpm_chip*) ;
 int FUNC_5 (struct tpm_chip*) ;
 int FUNC_6 (struct tpm_chip*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_7(struct tpm_chip *VAR_5, u8 *VAR_6, size_t VAR_7)
{
 int VAR_8 = 0;
 int VAR_9, VAR_10;

 if (VAR_7 < VAR_2) {
  VAR_8 = -VAR_0;
  goto out;
 }


 if ((VAR_8 =
      FUNC_2(VAR_5, VAR_6, VAR_2)) < VAR_2) {
  FUNC_1(VAR_5->dev, "Unable to read header\n");
  goto out;
 }

 VAR_9 = FUNC_0(*(__be32 *) (VAR_6 + 2));
 if (VAR_9 > VAR_7) {
  VAR_8 = -VAR_0;
  goto out;
 }

 if ((VAR_8 +=
      FUNC_2(VAR_5, &VAR_6[VAR_2],
         VAR_9 - VAR_2)) < VAR_9) {
  FUNC_1(VAR_5->dev, "Unable to read remainder of result\n");
  VAR_8 = -VAR_1;
  goto out;
 }

 FUNC_6(VAR_5, VAR_4, VAR_5->vendor.timeout_c,
     &VAR_5->vendor.int_queue);
 VAR_10 = FUNC_5(VAR_5);
 if (VAR_10 & VAR_3) {
  FUNC_1(VAR_5->dev, "Error left over data\n");
  VAR_8 = -VAR_0;
  goto out;
 }

out:
 FUNC_4(VAR_5);
 FUNC_3(VAR_5, VAR_5->vendor.locality, 0);
 return VAR_8;
}
