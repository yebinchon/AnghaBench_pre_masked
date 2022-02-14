
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
typedef int u16 ;
struct ib_gid_cache {int table_len; TYPE_1__* entry; } ;
struct TYPE_4__ {int lock; struct ib_gid_cache** gid_cache; } ;
struct ib_device {TYPE_2__ cache; } ;
struct TYPE_3__ {int index; int gid; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*) ;
 int FUNC_1 (union ib_gid*,int *,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct ib_device*) ;

int FUNC_5(struct ib_device *VAR_1,
         union ib_gid *VAR_2,
         u8 *VAR_3,
         u16 *VAR_4)
{
 struct ib_gid_cache *VAR_5;
 unsigned long VAR_6;
 int VAR_7, VAR_8;
 int VAR_9 = -VAR_0;

 *VAR_3 = -1;
 if (VAR_4)
  *VAR_4 = -1;

 FUNC_2(&VAR_1->cache.lock, VAR_6);

 for (VAR_7 = 0; VAR_7 <= FUNC_0(VAR_1) - FUNC_4(VAR_1); ++VAR_7) {
  VAR_5 = VAR_1->cache.gid_cache[VAR_7];
  for (VAR_8 = 0; VAR_8 < VAR_5->table_len; ++VAR_8) {
   if (!FUNC_1(VAR_2, &VAR_5->entry[VAR_8].gid, sizeof *VAR_2)) {
    *VAR_3 = VAR_7 + FUNC_4(VAR_1);
    if (VAR_4)
     *VAR_4 = VAR_5->entry[VAR_8].index;
    VAR_9 = 0;
    goto found;
   }
  }
 }

found:
 FUNC_3(&VAR_1->cache.lock, VAR_6);
 return VAR_9;
}
