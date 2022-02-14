
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct ib_pkey_cache {int table_len; TYPE_1__* entry; } ;
struct TYPE_4__ {int lock; struct ib_pkey_cache** pkey_cache; } ;
struct ib_device {TYPE_2__ cache; } ;
struct TYPE_3__ {scalar_t__ pkey; scalar_t__ index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ib_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (struct ib_device*) ;

int FUNC_4(struct ib_device *VAR_2,
         u8 VAR_3,
         u16 VAR_4,
         u16 *VAR_5)
{
 struct ib_pkey_cache *VAR_6;
 unsigned long VAR_7;
 int VAR_8;
 int VAR_9 = -VAR_1;

 if (VAR_3 < FUNC_3(VAR_2) || VAR_3 > FUNC_0(VAR_2))
  return -VAR_0;

 FUNC_1(&VAR_2->cache.lock, VAR_7);

 VAR_6 = VAR_2->cache.pkey_cache[VAR_3 - FUNC_3(VAR_2)];

 *VAR_5 = -1;

 for (VAR_8 = 0; VAR_8 < VAR_6->table_len; ++VAR_8)
  if (VAR_6->entry[VAR_8].pkey == VAR_4) {
   *VAR_5 = VAR_6->entry[VAR_8].index;
   VAR_9 = 0;
   break;
  }

 FUNC_2(&VAR_2->cache.lock, VAR_7);

 return VAR_9;
}
