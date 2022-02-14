
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct kcdata_item {int flags; scalar_t__ size; scalar_t__ type; } ;
typedef scalar_t__ mach_vm_address_t ;
typedef scalar_t__ kern_return_t ;
typedef TYPE_1__* kcdata_descriptor_t ;
typedef int info ;
struct TYPE_6__ {scalar_t__ kcd_length; scalar_t__ kcd_addr_end; scalar_t__ kcd_addr_begin; int kcd_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct kcdata_item*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__,struct kcdata_item*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static kern_return_t FUNC_5(
  kcdata_descriptor_t VAR_4,
  uint32_t VAR_5,
  uint32_t VAR_6,
  uint64_t VAR_7,
  mach_vm_address_t *VAR_8)
{
 kern_return_t VAR_9;
 struct kcdata_item VAR_10;

 uint32_t VAR_11 = VAR_6;

 uint32_t VAR_12 = FUNC_2(VAR_6);
 VAR_6 += VAR_12;
 uint32_t VAR_13 = VAR_6 + sizeof(VAR_10);

 if (VAR_8 == ((void*)0) || VAR_4 == ((void*)0) || VAR_13 + sizeof(VAR_10) < VAR_11) {
  return VAR_1;
 }

 FUNC_0(&VAR_10, sizeof(VAR_10));
 VAR_10.type = VAR_5;
 VAR_10.size = VAR_6;
 VAR_10.flags = VAR_7;


 if (VAR_13 + sizeof(VAR_10) > VAR_4->kcd_length ||
  VAR_4->kcd_length - (VAR_13 + sizeof(VAR_10)) < VAR_4->kcd_addr_end - VAR_4->kcd_addr_begin) {
  return VAR_2;
 }

 VAR_9 = FUNC_3(VAR_4, VAR_4->kcd_addr_end, &VAR_10, sizeof(VAR_10));
 if (VAR_9)
  return VAR_9;

 VAR_4->kcd_addr_end += sizeof(VAR_10);

 if (VAR_12) {
  VAR_9 = FUNC_1(VAR_4, VAR_4->kcd_addr_end + VAR_6 - VAR_12, VAR_12);
  if (VAR_9)
   return VAR_9;
 }

 *VAR_8 = VAR_4->kcd_addr_end;
 VAR_4->kcd_addr_end += VAR_6;

 if (!(VAR_4->kcd_flags & VAR_0)) {

  return FUNC_4(VAR_4);
 } else {
  return VAR_3;
 }
}
