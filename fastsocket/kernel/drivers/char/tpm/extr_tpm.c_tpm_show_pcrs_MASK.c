
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct tpm_chip {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int num_pcrs; } ;
typedef TYPE_1__ cap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tpm_chip*,int,int*) ;
 int FUNC_1 (int ) ;
 struct tpm_chip* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (struct device*,int ,TYPE_1__*,char*) ;

ssize_t FUNC_5(struct device *VAR_2, struct device_attribute *VAR_3,
        char *VAR_4)
{
 cap_t VAR_5;
 u8 VAR_6[VAR_1];
 ssize_t VAR_7;
 int VAR_8, VAR_9, VAR_10;
 char *VAR_11 = VAR_4;
 struct tpm_chip *VAR_12 = FUNC_2(VAR_2);

 VAR_7 = FUNC_4(VAR_2, VAR_0, &VAR_5,
   "attempting to determine the number of PCRS");
 if (VAR_7)
  return 0;

 VAR_10 = FUNC_1(VAR_5.num_pcrs);
 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
  VAR_7 = FUNC_0(VAR_12, VAR_8, VAR_6);
  if (VAR_7)
   break;
  VAR_11 += FUNC_3(VAR_11, "PCR-%02d: ", VAR_8);
  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
   VAR_11 += FUNC_3(VAR_11, "%02X ", VAR_6[VAR_9]);
  VAR_11 += FUNC_3(VAR_11, "\n");
 }
 return VAR_11 - VAR_4;
}
