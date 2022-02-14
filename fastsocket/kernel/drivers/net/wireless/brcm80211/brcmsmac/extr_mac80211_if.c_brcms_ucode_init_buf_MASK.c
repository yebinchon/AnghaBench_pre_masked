
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
typedef scalar_t__ u32 ;
struct firmware_hdr {int offset; int idx; int len; } ;
struct TYPE_8__ {int fw_cnt; int* hdr_num_entries; TYPE_2__** fw_bin; TYPE_1__** fw_hdr; } ;
struct brcms_info {TYPE_5__* wlc; TYPE_3__ fw; } ;
struct TYPE_10__ {TYPE_4__* hw; } ;
struct TYPE_9__ {int d11core; } ;
struct TYPE_7__ {int * data; } ;
struct TYPE_6__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 void* FUNC_1 (int const*,scalar_t__,int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct brcms_info *VAR_2, void **VAR_3, u32 VAR_4)
{
 int VAR_5, VAR_6;
 const u8 *VAR_7;
 struct firmware_hdr *VAR_8;
 for (VAR_5 = 0; VAR_5 < VAR_2->fw.fw_cnt; VAR_5++) {
  VAR_8 = (struct firmware_hdr *)VAR_2->fw.fw_hdr[VAR_5]->data;
  for (VAR_6 = 0; VAR_6 < VAR_2->fw.hdr_num_entries[VAR_5];
       VAR_6++, VAR_8++) {
   u32 VAR_9 = FUNC_2(VAR_8->len);
   if (FUNC_2(VAR_8->idx) == VAR_4) {
    VAR_7 = VAR_2->fw.fw_bin[VAR_5]->data +
     FUNC_2(VAR_8->offset);
    *VAR_3 = FUNC_1(VAR_7, VAR_9, VAR_1);
    if (*VAR_3 == ((void*)0))
     goto fail;

    return 0;
   }
  }
 }
 FUNC_0(VAR_2->wlc->hw->d11core,
    "ERROR: ucode buf tag:%d can not be found!\n", VAR_4);
 *VAR_3 = ((void*)0);
fail:
 return -VAR_0;
}
