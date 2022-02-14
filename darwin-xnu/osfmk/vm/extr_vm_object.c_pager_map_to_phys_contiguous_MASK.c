
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_size_t ;
typedef TYPE_1__* vm_object_t ;
typedef int ppnum_t ;
typedef int memory_object_offset_t ;
typedef int memory_object_control_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ boolean_t ;
typedef int addr64_t ;
struct TYPE_6__ {scalar_t__ private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;

kern_return_t FUNC_5(
 memory_object_control_t VAR_4,
 memory_object_offset_t VAR_5,
 addr64_t VAR_6,
 vm_size_t VAR_7)
{
 ppnum_t VAR_8;
 boolean_t VAR_9;
 kern_return_t VAR_10;
 vm_object_t VAR_11;

 VAR_8 = FUNC_1(VAR_3, VAR_6);

 if (!VAR_8) {
  VAR_10 = VAR_0;
  goto out;
 }

 VAR_11 = FUNC_0(VAR_4);

 if (!VAR_11) {
  VAR_10 = VAR_0;
  goto out;
 }

 VAR_9 = VAR_11->private;
 if (VAR_11->private != VAR_2) {
  FUNC_2(VAR_11);
  VAR_11->private = VAR_2;
  FUNC_4(VAR_11);
 }
 VAR_10 = FUNC_3(VAR_11, VAR_5, VAR_8, VAR_7);

 if (VAR_10 != VAR_1) {
  if (VAR_11->private != VAR_9) {
   FUNC_2(VAR_11);
   VAR_11->private = VAR_9;
   FUNC_4(VAR_11);
  }
 }

out:
 return VAR_10;
}
