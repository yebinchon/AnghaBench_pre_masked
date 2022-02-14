
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tg3_firmware_hdr {int len; } ;
struct tg3 {int fw_len; TYPE_1__* fw; } ;
struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct tg3 *VAR_1,
      const struct tg3_firmware_hdr *VAR_2)
{
 int VAR_3;
 if (VAR_1->fw_len == 0xffffffff)
  VAR_3 = FUNC_0(VAR_2->len);
 else
  VAR_3 = VAR_1->fw->size;

 return (VAR_3 - VAR_0) / sizeof(u32);
}
