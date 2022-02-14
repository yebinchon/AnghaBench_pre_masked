
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int data_type1; int * mac_addr; int * mac_addr1; } ;
struct TYPE_5__ {TYPE_1__ flash_params_8000; } ;
struct ql_adapter {TYPE_3__* ndev; TYPE_2__ flash; int port; } ;
struct flash_params_8000 {int dummy; } ;
typedef int __le32 ;
struct TYPE_6__ {int addr_len; int * dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (struct ql_adapter*,int ,TYPE_3__*,char*) ;
 int FUNC_3 (struct ql_adapter*,int,int *) ;
 scalar_t__ FUNC_4 (struct ql_adapter*,int ) ;
 int FUNC_5 (struct ql_adapter*,int ) ;
 int FUNC_6 (struct ql_adapter*,int,char*) ;

__attribute__((used)) static int FUNC_7(struct ql_adapter *VAR_6)
{
 u32 VAR_7, VAR_8;
 int VAR_9;
 __le32 *VAR_10 = (__le32 *)&VAR_6->flash;
 u32 VAR_11;
 u8 VAR_12[6];




 if (!VAR_6->port)
  VAR_11 = VAR_2 / sizeof(u32);
 else
  VAR_11 = VAR_3 / sizeof(u32);

 if (FUNC_4(VAR_6, VAR_4))
  return -VAR_1;

 VAR_8 = sizeof(struct flash_params_8000) / sizeof(u32);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++, VAR_10++) {
  VAR_9 = FUNC_3(VAR_6, VAR_7+VAR_11, VAR_10);
  if (VAR_9) {
   FUNC_2(VAR_6, VAR_5, VAR_6->ndev,
      "Error reading flash.\n");
   goto exit;
  }
 }

 VAR_9 = FUNC_6(VAR_6,
   sizeof(struct flash_params_8000) / sizeof(u16),
   "8000");
 if (VAR_9) {
  FUNC_2(VAR_6, VAR_5, VAR_6->ndev, "Invalid flash.\n");
  VAR_9 = -VAR_0;
  goto exit;
 }




 if (VAR_6->flash.flash_params_8000.data_type1 == 2)
  FUNC_1(VAR_12,
   VAR_6->flash.flash_params_8000.mac_addr1,
   VAR_6->ndev->addr_len);
 else
  FUNC_1(VAR_12,
   VAR_6->flash.flash_params_8000.mac_addr,
   VAR_6->ndev->addr_len);

 if (!FUNC_0(VAR_12)) {
  FUNC_2(VAR_6, VAR_5, VAR_6->ndev, "Invalid MAC address.\n");
  VAR_9 = -VAR_0;
  goto exit;
 }

 FUNC_1(VAR_6->ndev->dev_addr,
  VAR_12,
  VAR_6->ndev->addr_len);

exit:
 FUNC_5(VAR_6, VAR_4);
 return VAR_9;
}
