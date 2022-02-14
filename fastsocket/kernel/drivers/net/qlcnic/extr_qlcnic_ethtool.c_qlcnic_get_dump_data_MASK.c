
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_fw_dump {scalar_t__ clr; int * data; TYPE_2__* tmpl_hdr; scalar_t__ size; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct net_device {int dummy; } ;
struct ethtool_dump {int flag; scalar_t__ len; } ;
typedef int __le32 ;
struct TYPE_4__ {int size; int drv_cap_mask; } ;
struct TYPE_3__ {struct qlcnic_fw_dump fw_dump; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int *,scalar_t__) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct qlcnic_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_2, struct ethtool_dump *VAR_3,
       void *VAR_4)
{
 int VAR_5, VAR_6;
 u32 *VAR_7;
 __le32 *VAR_8;
 struct qlcnic_adapter *VAR_9 = FUNC_4(VAR_2);
 struct qlcnic_fw_dump *VAR_10 = &VAR_9->ahw->fw_dump;

 if (!VAR_10->tmpl_hdr) {
  FUNC_2(VAR_2, "FW Dump not supported\n");
  return -VAR_1;
 }

 if (!VAR_10->clr) {
  FUNC_3(VAR_2, "Dump not available\n");
  return -VAR_0;
 }

 VAR_6 = VAR_10->tmpl_hdr->size;
 VAR_7 = (u32 *) VAR_10->tmpl_hdr;
 VAR_8 = VAR_4;
 for (VAR_5 = 0; VAR_5 < VAR_6/sizeof(u32); VAR_5++)
  *VAR_8++ = FUNC_0(*VAR_7++);


 FUNC_1(VAR_4 + VAR_6, VAR_10->data, VAR_10->size);
 VAR_3->len = VAR_6 + VAR_10->size;
 VAR_3->flag = VAR_10->tmpl_hdr->drv_cap_mask;


 FUNC_5(VAR_10->data);
 VAR_10->data = ((void*)0);
 VAR_10->clr = 0;
 FUNC_3(VAR_2, "extracted the FW dump Successfully\n");
 return 0;
}
