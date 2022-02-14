
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_8__ {int flags; int mpl; } ;
typedef TYPE_1__ mach_port_options_t ;
typedef int mach_port_name_t ;
typedef int * mach_port_info_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef TYPE_2__* ipc_port_t ;
typedef int ipc_object_t ;
struct TYPE_9__ {scalar_t__ ip_context; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,int *,TYPE_2__**) ;
 int FUNC_4 (scalar_t__,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_2__*,scalar_t__,int) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int ,int *,int) ;

kern_return_t
FUNC_8(
 ipc_space_t VAR_16,
 mach_port_options_t *VAR_17,
 uint64_t VAR_18,
 mach_port_name_t *VAR_19)
{
 kern_return_t VAR_20;
 ipc_port_t VAR_21;

 if (VAR_16 == VAR_0)
  return (VAR_1);


 VAR_20 = FUNC_3(VAR_16, VAR_19, &VAR_21);
 if (VAR_20 != VAR_2)
  return VAR_20;


 if (VAR_17->flags & VAR_9) {
  VAR_20 = FUNC_5(VAR_21, (uint64_t) VAR_18, (VAR_17->flags & VAR_14));

  FUNC_0(VAR_20 == VAR_2);
 } else {
  VAR_21->ip_context = VAR_18;
 }


 FUNC_1(VAR_21);



 if (VAR_17->flags & VAR_13) {
  VAR_20 = FUNC_7(VAR_16, *VAR_19, VAR_7,
           (mach_port_info_t)&VAR_17->mpl, sizeof(VAR_17->mpl)/sizeof(int));
  if (VAR_20 != VAR_2)
   goto cleanup;
 }

 if (VAR_17->flags & VAR_15) {
  VAR_20 = FUNC_7(VAR_16, *VAR_19, VAR_8, ((void*)0), 0);
  if (VAR_20 != VAR_2)
   goto cleanup;
 }

 if (VAR_17->flags & VAR_11) {
  VAR_20 = FUNC_7(VAR_16, *VAR_19, VAR_6, ((void*)0), 0);
  if (VAR_20 != VAR_2)
   goto cleanup;
 }

 if (VAR_17->flags & VAR_10) {
  VAR_20 = FUNC_7(VAR_16, *VAR_19, VAR_5, ((void*)0), 0);
  if (VAR_20 != VAR_2)
   goto cleanup;
 }

 if (VAR_17->flags & VAR_12) {
  VAR_20 = FUNC_2(VAR_16, *VAR_19, VAR_3, (ipc_object_t *)&VAR_21);
  if (VAR_20 != VAR_2)
   goto cleanup;

  VAR_20 = FUNC_6(VAR_16, *VAR_19, VAR_21, VAR_4);
  if (VAR_20 != VAR_2)
   goto cleanup;
 }

 return VAR_2;

cleanup:

 (void) FUNC_4(VAR_16, *VAR_19, 0, VAR_18);
 return VAR_20;
}
