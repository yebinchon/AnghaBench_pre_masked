
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rb; } ;
struct ubi_wl_entry {int pnum; TYPE_1__ u; } ;
struct ubi_device {int peb_count; int move_to_put; scalar_t__ erroneous_peb_count; int wl_lock; int used; int erroneous; int scrub; struct ubi_wl_entry* move_to; int move_mutex; struct ubi_wl_entry* move_from; struct ubi_wl_entry** lookuptbl; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (struct ubi_wl_entry*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ubi_wl_entry*,int *) ;
 int FUNC_5 (struct ubi_device*,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct ubi_device*,struct ubi_wl_entry*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (struct ubi_device*) ;
 int FUNC_13 (struct ubi_wl_entry*,int *) ;

int FUNC_14(struct ubi_device *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;
 struct ubi_wl_entry *VAR_4;

 FUNC_0("PEB %d", VAR_1);
 FUNC_10(VAR_1 >= 0);
 FUNC_10(VAR_1 < VAR_0->peb_count);

retry:
 FUNC_8(&VAR_0->wl_lock);
 VAR_4 = VAR_0->lookuptbl[VAR_1];
 if (VAR_4 == VAR_0->move_from) {





  FUNC_0("PEB %d is being moved, wait", VAR_1);
  FUNC_9(&VAR_0->wl_lock);


  FUNC_2(&VAR_0->move_mutex);
  FUNC_3(&VAR_0->move_mutex);
  goto retry;
 } else if (VAR_4 == VAR_0->move_to) {
  FUNC_0("PEB %d is the target of data moving", VAR_1);
  FUNC_10(!VAR_0->move_to_put);
  VAR_0->move_to_put = 1;
  FUNC_9(&VAR_0->wl_lock);
  return 0;
 } else {
  if (FUNC_1(VAR_4, &VAR_0->used)) {
   FUNC_4(VAR_4, &VAR_0->used);
   FUNC_6(&VAR_4->u.rb, &VAR_0->used);
  } else if (FUNC_1(VAR_4, &VAR_0->scrub)) {
   FUNC_4(VAR_4, &VAR_0->scrub);
   FUNC_6(&VAR_4->u.rb, &VAR_0->scrub);
  } else if (FUNC_1(VAR_4, &VAR_0->erroneous)) {
   FUNC_4(VAR_4, &VAR_0->erroneous);
   FUNC_6(&VAR_4->u.rb, &VAR_0->erroneous);
   VAR_0->erroneous_peb_count -= 1;
   FUNC_10(VAR_0->erroneous_peb_count >= 0);

   VAR_2 = 1;
  } else {
   VAR_3 = FUNC_5(VAR_0, VAR_4->pnum);
   if (VAR_3) {
    FUNC_11("PEB %d not found", VAR_1);
    FUNC_12(VAR_0);
    FUNC_9(&VAR_0->wl_lock);
    return VAR_3;
   }
  }
 }
 FUNC_9(&VAR_0->wl_lock);

 VAR_3 = FUNC_7(VAR_0, VAR_4, VAR_2);
 if (VAR_3) {
  FUNC_8(&VAR_0->wl_lock);
  FUNC_13(VAR_4, &VAR_0->used);
  FUNC_9(&VAR_0->wl_lock);
 }

 return VAR_3;
}
