
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct ubc_info {scalar_t__ ui_flags; scalar_t__ ui_size; void* ui_control; void* ui_pager; TYPE_1__* ui_vnode; int ui_ucred; } ;
typedef scalar_t__ off_t ;
typedef int memory_object_size_t ;
typedef void* memory_object_control_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_5__ {int v_lflag; struct ubc_info* v_ubcinfo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 struct ubc_info* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (void*,int ,void**) ;
 int FUNC_4 (char*,scalar_t__) ;
 int VAR_8 ;
 int FUNC_5 () ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,void*) ;
 int FUNC_8 (TYPE_1__*,scalar_t__*,int ) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(vnode_t VAR_9, int VAR_10, off_t VAR_11)
{
 struct ubc_info *VAR_12;
 void * VAR_13;
 int VAR_14 = 0;
 kern_return_t VAR_15;
 memory_object_control_t VAR_16;

 VAR_12 = VAR_9->v_ubcinfo;





 if (VAR_12 == VAR_2) {

  VAR_12 = (struct ubc_info *) FUNC_9(VAR_8);
  FUNC_2((char *)VAR_12, sizeof(struct ubc_info));

  VAR_12->ui_vnode = VAR_9;
  VAR_12->ui_flags = VAR_5;
  VAR_12->ui_ucred = VAR_1;
 }
 FUNC_1(VAR_12->ui_flags != VAR_6);
 FUNC_1(VAR_12->ui_vnode == VAR_9);


 VAR_9->v_ubcinfo = VAR_12;
 VAR_13 = (void *)FUNC_7(VAR_9, VAR_12->ui_pager);
 FUNC_1(VAR_13);





 FUNC_0(VAR_12->ui_flags, VAR_4);
 VAR_12->ui_pager = VAR_13;
 VAR_15 = FUNC_3(VAR_13,
  (memory_object_size_t)VAR_12->ui_size, &VAR_16);
 FUNC_6(VAR_13);
 if (VAR_15 != VAR_0)
  FUNC_4("ubc_info_init: memory_object_create_named returned %d", VAR_15);

 FUNC_1(VAR_16);
 VAR_12->ui_control = VAR_16;
 FUNC_0(VAR_12->ui_flags, VAR_3);

 if (VAR_10 == 0) {

  VAR_14 = FUNC_8(VAR_9, &VAR_12->ui_size, FUNC_5());
  if (VAR_14)
   VAR_12->ui_size = 0;
 } else {
  VAR_12->ui_size = VAR_11;
 }
 VAR_9->v_lflag |= VAR_7;

 return (VAR_14);
}
