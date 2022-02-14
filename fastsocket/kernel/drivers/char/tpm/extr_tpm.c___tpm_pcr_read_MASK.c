
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int pcr_result; } ;
struct TYPE_6__ {int pcr_idx; } ;
struct TYPE_8__ {TYPE_3__ pcrread_out; TYPE_2__ pcrread_in; } ;
struct TYPE_5__ {int in; } ;
struct tpm_cmd_t {TYPE_4__ params; TYPE_1__ header; } ;
struct tpm_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct tpm_chip*,struct tpm_cmd_t*,int ,char*) ;

int FUNC_3(struct tpm_chip *VAR_3, int VAR_4, u8 *VAR_5)
{
 int VAR_6;
 struct tpm_cmd_t VAR_7;

 VAR_7.header.in = VAR_2;
 VAR_7.params.pcrread_in.pcr_idx = FUNC_0(VAR_4);
 VAR_6 = FUNC_2(VAR_3, &VAR_7, VAR_0,
     "attempting to read a pcr value");

 if (VAR_6 == 0)
  FUNC_1(VAR_5, VAR_7.params.pcrread_out.pcr_result,
         VAR_1);
 return VAR_6;
}
