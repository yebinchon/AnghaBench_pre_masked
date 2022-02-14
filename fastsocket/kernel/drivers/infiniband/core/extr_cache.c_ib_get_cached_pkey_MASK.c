
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct ib_pkey_cache {int table_len; TYPE_1__* entry; } ;
struct TYPE_4__ {int lock; struct ib_pkey_cache** pkey_cache; } ;
struct ib_device {TYPE_2__ cache; } ;
struct TYPE_3__ {int index; int pkey; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (struct ib_device*) ;

int FUNC_4(struct ib_device *VAR_1,
         u8 VAR_2,
         int VAR_3,
         u16 *VAR_4)
{
 struct ib_pkey_cache *VAR_5;
 unsigned long VAR_6;
 int VAR_7, VAR_8 = 0;

 if (VAR_2 < FUNC_3(VAR_1) || VAR_2 > FUNC_0(VAR_1))
  return -VAR_0;

 FUNC_1(&VAR_1->cache.lock, VAR_6);

 VAR_5 = VAR_1->cache.pkey_cache[VAR_2 - FUNC_3(VAR_1)];

 if (VAR_3 < 0 || VAR_3 >= VAR_5->table_len) {
  VAR_8 = -VAR_0;
  goto out_unlock;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->table_len; ++VAR_7)
  if (VAR_5->entry[VAR_7].index == VAR_3)
   break;

 if (VAR_7 < VAR_5->table_len)
  *VAR_4 = VAR_5->entry[VAR_7].pkey;
 else
  *VAR_4 = 0x0000;

out_unlock:
 FUNC_2(&VAR_1->cache.lock, VAR_6);
 return VAR_8;
}
