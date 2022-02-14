
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int subcap; int subcap_size; int cap; } ;
struct TYPE_6__ {TYPE_2__ getcap_in; } ;
struct TYPE_4__ {int in; } ;
struct tpm_cmd_t {TYPE_3__ params; TYPE_1__ header; } ;
struct tpm_chip {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct tpm_chip*,struct tpm_cmd_t*,int ,char*) ;

void FUNC_2(struct tpm_chip *VAR_4)
{
 struct tpm_cmd_t VAR_5;
 ssize_t VAR_6;

 VAR_5.header.in = VAR_3;
 VAR_5.params.getcap_in.cap = VAR_0;
 VAR_5.params.getcap_in.subcap_size = FUNC_0(4);
 VAR_5.params.getcap_in.subcap = VAR_1;

 VAR_6 = FUNC_1(VAR_4, &VAR_5, VAR_2,
   "attempting to determine the timeouts");
}
