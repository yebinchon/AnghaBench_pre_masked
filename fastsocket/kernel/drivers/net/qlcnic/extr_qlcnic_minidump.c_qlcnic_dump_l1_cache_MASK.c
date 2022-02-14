
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct __cache {int init_tag_val; int no_ops; int read_addr; int read_addr_num; scalar_t__ stride; scalar_t__ read_addr_stride; int ctrl_val; int ctrl_addr; int addr; } ;
struct TYPE_2__ {struct __cache cache; } ;
struct qlcnic_dump_entry {TYPE_1__ region; } ;
struct qlcnic_adapter {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct qlcnic_adapter*,int) ;
 int FUNC_3 (struct qlcnic_adapter*,int ,int) ;

__attribute__((used)) static u32 FUNC_4(struct qlcnic_adapter *VAR_0,
    struct qlcnic_dump_entry *VAR_1, __le32 *VAR_2)
{
 int VAR_3;
 u32 VAR_4, VAR_5, VAR_6, VAR_7;
 struct __cache *VAR_8 = &VAR_1->region.cache;

 VAR_5 = VAR_8->init_tag_val;

 for (VAR_3 = 0; VAR_3 < VAR_8->no_ops; VAR_3++) {
  FUNC_3(VAR_0, VAR_8->addr, VAR_5);
  FUNC_3(VAR_0, VAR_8->ctrl_addr, FUNC_0(VAR_8->ctrl_val));
  VAR_7 = VAR_8->read_addr;
  VAR_4 = VAR_8->read_addr_num;
  while (VAR_4) {
   VAR_6 = FUNC_2(VAR_0, VAR_7);
   *VAR_2++ = FUNC_1(VAR_6);
   VAR_7 += VAR_8->read_addr_stride;
   VAR_4--;
  }
  VAR_5 += VAR_8->stride;
 }
 return VAR_8->no_ops * VAR_8->read_addr_num * sizeof(u32);
}
