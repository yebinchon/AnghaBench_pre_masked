
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct qlc_83xx_quad_entry {unsigned long dr_addr; int ar_addr; int ar_value; } ;
struct qlc_83xx_poll {int status; int mask; } ;
struct qlc_83xx_entry_hdr {int count; scalar_t__ delay; } ;
struct TYPE_3__ {int array_index; int* array; } ;
struct TYPE_4__ {TYPE_1__ reset; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,int ,long,int ,int ) ;
 int FUNC_1 (struct qlcnic_adapter*,unsigned long) ;
 int FUNC_2 (struct qlcnic_adapter*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct qlcnic_adapter *VAR_1,
           struct qlc_83xx_entry_hdr *VAR_2)
{
 long VAR_3;
 int VAR_4, VAR_5, VAR_6;
 struct qlc_83xx_quad_entry *VAR_7;
 struct qlc_83xx_poll *VAR_8;
 unsigned long VAR_9;

 VAR_8 = (struct qlc_83xx_poll *)((char *)VAR_2 +
     sizeof(struct qlc_83xx_entry_hdr));

 VAR_7 = (struct qlc_83xx_quad_entry *)((char *)VAR_8 +
            sizeof(struct qlc_83xx_poll));
 VAR_3 = (long)VAR_2->delay;

 for (VAR_5 = 0; VAR_5 < VAR_2->count; VAR_5++, VAR_7++) {
  FUNC_2(VAR_1, VAR_7->ar_addr,
          VAR_7->ar_value);
  if (VAR_3) {
   if (!FUNC_0(VAR_1, VAR_7->ar_addr, VAR_3,
        VAR_8->mask, VAR_8->status)){
    VAR_4 = VAR_1->ahw->reset.array_index;
    VAR_9 = VAR_7->dr_addr;
    VAR_6 = FUNC_1(VAR_1, VAR_9);
    VAR_1->ahw->reset.array[VAR_4++] = VAR_6;

    if (VAR_4 == VAR_0)
     VAR_1->ahw->reset.array_index = 1;
   }
  }
 }
}
