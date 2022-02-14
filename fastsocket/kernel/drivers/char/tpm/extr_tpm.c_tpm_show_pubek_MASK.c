
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int* readpubek_out_buffer; } ;
struct TYPE_3__ {int in; } ;
struct tpm_cmd_t {TYPE_2__ params; TYPE_1__ header; } ;
struct tpm_chip {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct tpm_chip* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,...) ;
 int VAR_1 ;
 int FUNC_3 (struct tpm_chip*,struct tpm_cmd_t*,int ,char*) ;

ssize_t FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
         char *VAR_4)
{
 u8 *VAR_5;
 struct tpm_cmd_t VAR_6;
 ssize_t VAR_7;
 int VAR_8, VAR_9;
 char *VAR_10 = VAR_4;

 struct tpm_chip *VAR_11 = FUNC_1(VAR_2);

 VAR_6.header.in = VAR_1;
 VAR_7 = FUNC_3(VAR_11, &VAR_6, VAR_0,
   "attempting to read the PUBEK");
 if (VAR_7)
  goto out;
 VAR_5 = VAR_6.params.readpubek_out_buffer;
 VAR_10 +=
     FUNC_2(VAR_10,
      "Algorithm: %02X %02X %02X %02X\nEncscheme: %02X %02X\n"
      "Sigscheme: %02X %02X\nParameters: %02X %02X %02X %02X"
      " %02X %02X %02X %02X %02X %02X %02X %02X\n"
      "Modulus length: %d\nModulus: \n",
      VAR_5[10], VAR_5[11], VAR_5[12], VAR_5[13], VAR_5[14],
      VAR_5[15], VAR_5[16], VAR_5[17], VAR_5[22], VAR_5[23],
      VAR_5[24], VAR_5[25], VAR_5[26], VAR_5[27], VAR_5[28],
      VAR_5[29], VAR_5[30], VAR_5[31], VAR_5[32], VAR_5[33],
      FUNC_0(*((__be32 *) (VAR_5 + 34))));

 for (VAR_8 = 0; VAR_8 < 256; VAR_8++) {
  VAR_10 += FUNC_2(VAR_10, "%02X ", VAR_5[VAR_8 + 38]);
  if ((VAR_8 + 1) % 16 == 0)
   VAR_10 += FUNC_2(VAR_10, "\n");
 }
out:
 VAR_9 = VAR_10 - VAR_4;
 return VAR_9;
}
