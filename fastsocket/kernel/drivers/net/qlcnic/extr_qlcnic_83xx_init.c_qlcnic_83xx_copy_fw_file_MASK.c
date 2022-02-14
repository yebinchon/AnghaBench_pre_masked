
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct qlcnic_adapter {TYPE_4__* ahw; TYPE_1__* pdev; } ;
struct TYPE_6__ {TYPE_3__* fw; } ;
struct TYPE_8__ {TYPE_2__ fw_info; } ;
struct TYPE_7__ {int size; scalar_t__* data; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct qlcnic_adapter*,scalar_t__,scalar_t__*,int) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(struct qlcnic_adapter *VAR_2)
{
 u32 VAR_3, *VAR_4;
 u64 VAR_5;
 u8 VAR_6[16];
 size_t VAR_7;
 int VAR_8, VAR_9 = -VAR_0;

 VAR_3 = FUNC_0(VAR_2->ahw, VAR_1);
 VAR_7 = (VAR_2->ahw->fw_info.fw->size & ~0xF);
 VAR_4 = (u32 *)VAR_2->ahw->fw_info.fw->data;
 VAR_5 = (u64)VAR_3;

 VAR_9 = FUNC_2(VAR_2, VAR_5,
       (u32 *)VAR_4, VAR_7 / 16);
 if (VAR_9) {
  FUNC_1(&VAR_2->pdev->dev, "MS memory write failed\n");
  FUNC_3(VAR_2->ahw->fw_info.fw);
  VAR_2->ahw->fw_info.fw = ((void*)0);
  return -VAR_0;
 }


 if (VAR_2->ahw->fw_info.fw->size & 0xF) {
  VAR_5 = VAR_3 + VAR_7;
  for (VAR_8 = 0; VAR_8 < (VAR_2->ahw->fw_info.fw->size & 0xF); VAR_8++)
   VAR_6[VAR_8] = VAR_2->ahw->fw_info.fw->data[VAR_7 + VAR_8];
  for (; VAR_8 < 16; VAR_8++)
   VAR_6[VAR_8] = 0;
  VAR_9 = FUNC_2(VAR_2, VAR_5,
        (u32 *)VAR_6, 1);
  if (VAR_9) {
   FUNC_1(&VAR_2->pdev->dev,
    "MS memory write failed\n");
   FUNC_3(VAR_2->ahw->fw_info.fw);
   VAR_2->ahw->fw_info.fw = ((void*)0);
   return -VAR_0;
  }
 }
 FUNC_3(VAR_2->ahw->fw_info.fw);
 VAR_2->ahw->fw_info.fw = ((void*)0);

 return 0;
}
