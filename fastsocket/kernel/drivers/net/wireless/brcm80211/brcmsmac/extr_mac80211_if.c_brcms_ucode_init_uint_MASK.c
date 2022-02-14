
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
struct firmware_hdr {int len; int offset; int idx; } ;
struct TYPE_8__ {int fw_cnt; int* hdr_num_entries; TYPE_2__** fw_bin; TYPE_1__** fw_hdr; } ;
struct brcms_info {TYPE_5__* wlc; TYPE_3__ fw; } ;
typedef int __le32 ;
struct TYPE_10__ {TYPE_4__* hw; } ;
struct TYPE_9__ {int d11core; } ;
struct TYPE_7__ {int * data; } ;
struct TYPE_6__ {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct brcms_info *VAR_1, size_t *VAR_2, u32 VAR_3)
{
 int VAR_4, VAR_5;
 const u8 *VAR_6;
 struct firmware_hdr *VAR_7;
 for (VAR_4 = 0; VAR_4 < VAR_1->fw.fw_cnt; VAR_4++) {
  VAR_7 = (struct firmware_hdr *)VAR_1->fw.fw_hdr[VAR_4]->data;
  for (VAR_5 = 0; VAR_5 < VAR_1->fw.hdr_num_entries[VAR_4];
       VAR_5++, VAR_7++) {
   if (FUNC_1(VAR_7->idx) == VAR_3) {
    VAR_6 = VAR_1->fw.fw_bin[VAR_4]->data +
     FUNC_1(VAR_7->offset);
    if (FUNC_1(VAR_7->len) != 4) {
     FUNC_0(VAR_1->wlc->hw->d11core,
        "ERROR: fw hdr len\n");
     return -VAR_0;
    }
    *VAR_2 = FUNC_1(*((__le32 *) VAR_6));
    return 0;
   }
  }
 }
 FUNC_0(VAR_1->wlc->hw->d11core,
    "ERROR: ucode tag:%d can not be found!\n", VAR_3);
 return -VAR_0;
}
