
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int voucher_name ;
typedef int vm_size_t ;
typedef int uint8_t ;
struct host_create_mach_voucher_args {scalar_t__ recipes_size; int voucher; int recipes; int host; } ;
typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_voucher_t ;
typedef int ipc_port_t ;
typedef scalar_t__ host_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,void*,int) ;
 scalar_t__ FUNC_3 (int *,int ,int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (scalar_t__,int *,int,int *) ;
 int FUNC_6 (int ,int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int ) ;

kern_return_t
FUNC_10(struct host_create_mach_voucher_args *VAR_10)
{
 host_t VAR_11 = FUNC_9(VAR_10->host);
 ipc_voucher_t VAR_12 = VAR_2;
 ipc_port_t VAR_13 = VAR_1;
 mach_port_name_t VAR_14 = 0;
 kern_return_t VAR_15 = 0;

 if (VAR_11 == VAR_0)
  return VAR_6;

 if (VAR_10->recipes_size < 0)
  return VAR_3;
 else if (VAR_10->recipes_size > VAR_7)
  return VAR_9;

 if (VAR_10->recipes_size < VAR_8) {

  uint8_t VAR_16[VAR_10->recipes_size];
  if (FUNC_2(FUNC_0(VAR_10->recipes), (void *)VAR_16, VAR_10->recipes_size)) {
   VAR_15 = VAR_4;
   goto done;
  }
  VAR_15 = FUNC_5(VAR_11, VAR_16, VAR_10->recipes_size, &VAR_12);
 } else {
  uint8_t *VAR_17 = FUNC_7((vm_size_t)VAR_10->recipes_size);
  if (!VAR_17) {
   VAR_15 = VAR_5;
   goto done;
  }

  if (FUNC_2(FUNC_0(VAR_10->recipes), (void *)VAR_17, VAR_10->recipes_size)) {
   FUNC_8(VAR_17, (vm_size_t)VAR_10->recipes_size);
   VAR_15 = VAR_4;
   goto done;
  }

  VAR_15 = FUNC_5(VAR_11, VAR_17, VAR_10->recipes_size, &VAR_12);
  FUNC_8(VAR_17, (vm_size_t)VAR_10->recipes_size);
 }

 if (VAR_15 == 0) {
  VAR_13 = FUNC_1(VAR_12);
  VAR_14 = FUNC_6(VAR_13, FUNC_4());

  VAR_15 = FUNC_3(&VAR_14, VAR_10->voucher, sizeof(VAR_14));
 }

done:
 return VAR_15;
}
