
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; } ;
struct ubi_scan_leb {int pnum; int ec; TYPE_1__ u; } ;
struct list_head {int dummy; } ;
struct ubi_scan_info {int corr_count; struct list_head alien; struct list_head corr; struct list_head erase; struct list_head free; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int) ;
 struct ubi_scan_leb* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct list_head*) ;

__attribute__((used)) static int FUNC_4(struct ubi_scan_info *VAR_2, int VAR_3, int VAR_4,
         struct list_head *VAR_5)
{
 struct ubi_scan_leb *VAR_6;

 if (VAR_5 == &VAR_2->free)
  FUNC_1("add to free: PEB %d, EC %d", VAR_3, VAR_4);
 else if (VAR_5 == &VAR_2->erase)
  FUNC_1("add to erase: PEB %d, EC %d", VAR_3, VAR_4);
 else if (VAR_5 == &VAR_2->corr) {
  FUNC_1("add to corrupted: PEB %d, EC %d", VAR_3, VAR_4);
  VAR_2->corr_count += 1;
 } else if (VAR_5 == &VAR_2->alien)
  FUNC_1("add to alien: PEB %d, EC %d", VAR_3, VAR_4);
 else
  FUNC_0();

 VAR_6 = FUNC_2(sizeof(struct ubi_scan_leb), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->pnum = VAR_3;
 VAR_6->ec = VAR_4;
 FUNC_3(&VAR_6->u.list, VAR_5);
 return 0;
}
