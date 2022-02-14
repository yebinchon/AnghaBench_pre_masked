
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct thread_snapshot_v2 {int dummy; } ;
struct dyld_uuid_info_64 {int dummy; } ;
struct TYPE_7__ {TYPE_1__* item; } ;
typedef TYPE_2__ kcdata_iter_t ;
struct TYPE_6__ {int size; int flags; } ;






 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__,int) ;
 int FUNC_2 (TYPE_2__) ;

__attribute__((used)) static inline uint32_t
FUNC_3(kcdata_iter_t VAR_0)
{
 uint32_t VAR_1 = 0;

 switch (FUNC_2(VAR_0)) {
 case 131:
 case 130:
  return VAR_0.item->size;
 case 128: {
  VAR_1 = sizeof(struct thread_snapshot_v2);
  if (FUNC_1(VAR_0, VAR_1)) {
   return VAR_1;
  }

  goto not_legacy;
 }
 case 129: {
  VAR_1 = sizeof(struct dyld_uuid_info_64);
  if (FUNC_1(VAR_0, VAR_1)) {
   return VAR_1;
  }

  goto not_legacy;
 }
not_legacy:
 default:
  if (VAR_0.item->size < FUNC_0(VAR_0.item->flags))
   return 0;
  else
   return VAR_0.item->size - FUNC_0(VAR_0.item->flags);
 }
}
