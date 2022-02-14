
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_10__ {int hash; int pcr_idx; } ;
struct TYPE_9__ {TYPE_5__ pcrextend_in; } ;
struct TYPE_8__ {int in; } ;
struct tpm_cmd_t {TYPE_4__ params; TYPE_3__ header; } ;
struct tpm_chip {TYPE_2__* dev; } ;
struct TYPE_7__ {TYPE_1__* driver; } ;
struct TYPE_6__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int const*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 struct tpm_chip* FUNC_3 (int ) ;
 int FUNC_4 (struct tpm_chip*,struct tpm_cmd_t*,int ,char*) ;

int FUNC_5(u32 VAR_4, int VAR_5, const u8 *VAR_6)
{
 struct tpm_cmd_t VAR_7;
 int VAR_8;
 struct tpm_chip *VAR_9;

 VAR_9 = FUNC_3(VAR_4);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 VAR_7.header.in = VAR_3;
 VAR_7.params.pcrextend_in.pcr_idx = FUNC_0(VAR_5);
 FUNC_1(VAR_7.params.pcrextend_in.hash, VAR_6, VAR_2);
 VAR_8 = FUNC_4(VAR_9, &VAR_7, VAR_1,
     "attempting extend a PCR value");

 FUNC_2(VAR_9->dev->driver->owner);
 return VAR_8;
}
