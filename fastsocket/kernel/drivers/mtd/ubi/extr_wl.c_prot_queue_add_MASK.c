
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; } ;
struct ubi_wl_entry {int ec; int pnum; TYPE_1__ u; } ;
struct ubi_device {int pq_head; int * pq; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct ubi_device *VAR_1, struct ubi_wl_entry *VAR_2)
{
 int VAR_3 = VAR_1->pq_head - 1;

 if (VAR_3 < 0)
  VAR_3 = VAR_0 - 1;
 FUNC_2(VAR_3 >= 0 && VAR_3 < VAR_0);
 FUNC_1(&VAR_2->u.list, &VAR_1->pq[VAR_3]);
 FUNC_0("added PEB %d EC %d to the protection queue", VAR_2->pnum, VAR_2->ec);
}
