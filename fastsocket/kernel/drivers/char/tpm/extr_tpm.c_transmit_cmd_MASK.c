
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int return_code; } ;
struct TYPE_4__ {TYPE_1__ out; } ;
struct tpm_cmd_t {TYPE_2__ header; } ;
struct tpm_chip {int dev; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,char const*) ;
 int FUNC_2 (struct tpm_chip*,int *,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct tpm_chip *VAR_1, struct tpm_cmd_t *VAR_2,
       int VAR_3, const char *VAR_4)
{
 int VAR_5;

 VAR_3 = FUNC_2(VAR_1,(u8 *) VAR_2, VAR_3);
 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_3 == VAR_0) {
  VAR_5 = FUNC_0(VAR_2->header.out.return_code);
  FUNC_1(VAR_1->dev, "A TPM error (%d) occurred %s\n", VAR_5, VAR_4);
  return VAR_5;
 }
 return 0;
}
