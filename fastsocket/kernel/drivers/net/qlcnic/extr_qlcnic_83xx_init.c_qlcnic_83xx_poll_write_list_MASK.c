
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int dummy; } ;
struct qlc_83xx_quad_entry {int ar_addr; int ar_value; int dr_value; int dr_addr; } ;
struct qlc_83xx_poll {int status; int mask; } ;
struct qlc_83xx_entry_hdr {int count; scalar_t__ delay; } ;


 int FUNC_0 (struct qlcnic_adapter*,int ,long,int ,int ) ;
 int FUNC_1 (struct qlcnic_adapter*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct qlcnic_adapter *VAR_0,
     struct qlc_83xx_entry_hdr *VAR_1)
{
 int VAR_2;
 long VAR_3;
 struct qlc_83xx_quad_entry *VAR_4;
 struct qlc_83xx_poll *VAR_5;

 VAR_5 = (struct qlc_83xx_poll *)((char *)VAR_1 +
     sizeof(struct qlc_83xx_entry_hdr));
 VAR_4 = (struct qlc_83xx_quad_entry *)((char *)VAR_5 +
            sizeof(struct qlc_83xx_poll));
 VAR_3 = (long)VAR_1->delay;

 for (VAR_2 = 0; VAR_2 < VAR_1->count; VAR_2++, VAR_4++) {
  FUNC_1(VAR_0, VAR_4->dr_addr,
          VAR_4->dr_value);
  FUNC_1(VAR_0, VAR_4->ar_addr,
          VAR_4->ar_value);
  if (VAR_3)
   FUNC_0(VAR_0, VAR_4->ar_addr, VAR_3,
          VAR_5->mask, VAR_5->status);
 }
}
