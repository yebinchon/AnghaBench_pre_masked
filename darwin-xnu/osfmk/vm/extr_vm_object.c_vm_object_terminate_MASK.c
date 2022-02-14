
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_2__* vm_object_t ;
typedef int kern_return_t ;
struct TYPE_14__ {scalar_t__ prev; scalar_t__ next; } ;
struct TYPE_15__ {scalar_t__ ref_count; scalar_t__ paging_in_progress; scalar_t__ activity_in_progress; struct TYPE_15__* copy; int pageout; struct TYPE_15__* shadow; TYPE_1__ cached_list; int internal; void* alive; scalar_t__ terminating; void* pager_trusted; scalar_t__ shadow_severed; int * pager; scalar_t__ can_persist; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (int ,char*,TYPE_2__*,scalar_t__,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static kern_return_t
FUNC_10(
 vm_object_t VAR_7)
{
 vm_object_t VAR_8;

 FUNC_0(VAR_6, "vm_object_terminate, object 0x%X ref %d\n",
  VAR_7, VAR_7->ref_count, 0, 0, 0);

 FUNC_4(VAR_7);

 if (!VAR_7->pageout && (!VAR_7->internal && VAR_7->can_persist) &&
     (VAR_7->pager != ((void*)0) || VAR_7->shadow_severed)) {





  VAR_7->pager_trusted = VAR_0;

  FUNC_7(VAR_7, VAR_3);
 }



 if (VAR_7->terminating) {
  FUNC_4(VAR_7);
  VAR_7->ref_count--;
  FUNC_1(VAR_7->ref_count > 0);
  FUNC_9(VAR_7);
  return VAR_1;
 }





 if (VAR_7->ref_count != 1) {
  FUNC_4(VAR_7);
  VAR_7->ref_count--;
  FUNC_1(VAR_7->ref_count > 0);
  FUNC_8(VAR_7);
  FUNC_9(VAR_7);
  return VAR_1;
 }





 VAR_7->terminating = VAR_4;
 VAR_7->alive = VAR_0;

 if (!VAR_7->internal &&
     VAR_7->cached_list.next &&
     VAR_7->cached_list.prev)
  FUNC_2(VAR_7);






 if (((VAR_8 = VAR_7->shadow) != VAR_5) &&
     !(VAR_7->pageout)) {
  FUNC_3(VAR_8);
  if (VAR_8->copy == VAR_7)
   VAR_8->copy = VAR_5;
  FUNC_9(VAR_8);
 }

 if (VAR_7->paging_in_progress != 0 ||
     VAR_7->activity_in_progress != 0) {
  FUNC_6(VAR_7);
  FUNC_9(VAR_7);







  return VAR_1;
 }



 FUNC_5(VAR_7);
 VAR_7 = VAR_5;
 return VAR_2;
}
