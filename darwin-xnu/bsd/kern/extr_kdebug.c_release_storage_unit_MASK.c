
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union kds_ptr {scalar_t__ raw; } ;
typedef scalar_t__ uint32_t ;
struct kd_storage {union kds_ptr kds_next; } ;
struct kd_bufinfo {union kds_ptr kd_list_head; } ;
struct TYPE_2__ {int kds_inuse_count; union kds_ptr kds_free_list; } ;


 int VAR_0 ;
 struct kd_storage* FUNC_0 (union kds_ptr) ;
 TYPE_1__ VAR_1 ;
 struct kd_bufinfo* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

void
FUNC_4(int VAR_4, uint32_t VAR_5)
{
 int VAR_6 = 0;
 struct kd_storage *VAR_7;
 struct kd_bufinfo *VAR_8;
 union kds_ptr VAR_9;

 VAR_9.raw = VAR_5;

 VAR_6 = FUNC_3(VAR_0);
 FUNC_1(VAR_3);

 VAR_8 = &VAR_2[VAR_4];

 if (VAR_9.raw == VAR_8->kd_list_head.raw) {
  VAR_7 = FUNC_0(VAR_9);
  VAR_8->kd_list_head = VAR_7->kds_next;

  VAR_7->kds_next = VAR_1.kds_free_list;
  VAR_1.kds_free_list = VAR_9;

  VAR_1.kds_inuse_count--;
 }
 FUNC_2(VAR_3);
 FUNC_3(VAR_6);
}
