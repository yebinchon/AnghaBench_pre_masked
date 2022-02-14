
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int dummy; } ;
struct qlc_83xx_poll {int status; int mask; } ;
struct qlc_83xx_entry_hdr {int count; scalar_t__ delay; } ;
struct qlc_83xx_entry {unsigned long arg1; unsigned long arg2; } ;


 scalar_t__ FUNC_0 (struct qlcnic_adapter*,unsigned long,long,int ,int ) ;
 int FUNC_1 (struct qlcnic_adapter*,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct qlcnic_adapter *VAR_0,
      struct qlc_83xx_entry_hdr *VAR_1)
{
 long VAR_2;
 struct qlc_83xx_entry *VAR_3;
 struct qlc_83xx_poll *VAR_4;
 int VAR_5;
 unsigned long VAR_6, VAR_7;

 VAR_4 = (struct qlc_83xx_poll *)((char *)VAR_1 +
     sizeof(struct qlc_83xx_entry_hdr));

 VAR_3 = (struct qlc_83xx_entry *)((char *)VAR_4 +
       sizeof(struct qlc_83xx_poll));
 VAR_2 = (long)VAR_1->delay;

 if (!VAR_2) {
  for (VAR_5 = 0; VAR_5 < VAR_1->count; VAR_5++, VAR_3++)
   FUNC_0(VAR_0, VAR_3->arg1,
          VAR_2, VAR_4->mask,
          VAR_4->status);
 } else {
  for (VAR_5 = 0; VAR_5 < VAR_1->count; VAR_5++, VAR_3++) {
   VAR_6 = VAR_3->arg1;
   VAR_7 = VAR_3->arg2;
   if (VAR_2) {
    if (FUNC_0(VAR_0,
        VAR_6, VAR_2,
        VAR_4->mask,
        VAR_4->status)){
     FUNC_1(VAR_0,
            VAR_6);
     FUNC_1(VAR_0,
            VAR_7);
    }
   }
  }
 }
}
