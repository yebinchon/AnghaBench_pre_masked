
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct __mux2 {int sel_val1; int sel_val2; int no_ops; int sel_val_mask; scalar_t__ sel_val_stride; int read_addr; int sel_addr2; int sel_addr1; } ;
struct TYPE_2__ {struct __mux2 mux2; } ;
struct qlcnic_dump_entry {TYPE_1__ region; } ;
struct qlcnic_adapter {int dummy; } ;
typedef int __le32 ;


 void* FUNC_0 (int) ;
 int FUNC_1 (struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_adapter*,int ,int) ;

__attribute__((used)) static u32 FUNC_3(struct qlcnic_adapter *VAR_0,
       struct qlcnic_dump_entry *VAR_1, __le32 *VAR_2)
{
 struct __mux2 *VAR_3 = &VAR_1->region.mux2;
 u32 VAR_4;
 u32 VAR_5, VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = VAR_3->sel_val1;
 VAR_7 = VAR_3->sel_val2;

 for (VAR_8 = 0; VAR_8 < VAR_3->no_ops; VAR_8++) {
  FUNC_2(VAR_0, VAR_3->sel_addr1, VAR_6);
  VAR_5 = VAR_6 & VAR_3->sel_val_mask;
  FUNC_2(VAR_0, VAR_3->sel_addr2, VAR_5);
  VAR_4 = FUNC_1(VAR_0, VAR_3->read_addr);
  *VAR_2++ = FUNC_0(VAR_5);
  *VAR_2++ = FUNC_0(VAR_4);
  FUNC_2(VAR_0, VAR_3->sel_addr1, VAR_7);
  VAR_5 = VAR_7 & VAR_3->sel_val_mask;
  FUNC_2(VAR_0, VAR_3->sel_addr2, VAR_5);
  VAR_4 = FUNC_1(VAR_0, VAR_3->read_addr);
  *VAR_2++ = FUNC_0(VAR_5);
  *VAR_2++ = FUNC_0(VAR_4);
  VAR_6 += VAR_3->sel_val_stride;
  VAR_7 += VAR_3->sel_val_stride;
 }

 return VAR_3->no_ops * (4 * sizeof(u32));
}
