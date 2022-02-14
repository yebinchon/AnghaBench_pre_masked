
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef scalar_t__ vm_object_size_t ;
typedef scalar_t__ vm_object_offset_t ;
typedef int uint32_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_10__ {scalar_t__ copy; scalar_t__ vo_size; int pager_ready; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static kern_return_t
FUNC_8(
 vm_object_t VAR_11,
 vm_object_offset_t VAR_12,
 vm_object_size_t VAR_13,
 vm_object_t *VAR_14)
{
 kern_return_t VAR_15;
 vm_object_t VAR_16;
 boolean_t VAR_17 = VAR_0;
 uint32_t VAR_18 = 0;
 VAR_8++;
 while (FUNC_7(VAR_11, VAR_5)) {
  FUNC_5(VAR_11, VAR_5,
          VAR_3);
  VAR_9++;
 }
 FUNC_4(VAR_11, VAR_5);
 FUNC_6(VAR_11);
 VAR_15 = VAR_1;
 if (VAR_15 != VAR_2) {
  return VAR_15;
 }




 FUNC_2(VAR_11);
 while (FUNC_7(VAR_11, VAR_5)) {
  FUNC_5(VAR_11, VAR_5,
          VAR_3);
  VAR_10++;
 }
Retry:
 FUNC_0(VAR_11->copy != VAR_7);
 VAR_16 = VAR_11->copy;
 if (!FUNC_3(VAR_16)) {
  FUNC_6(VAR_11);

  VAR_18++;
  FUNC_1(VAR_18);

  FUNC_2(VAR_11);
  goto Retry;
 }
 if (VAR_16->vo_size < VAR_12+VAR_13)
  VAR_16->vo_size = VAR_12+VAR_13;

 if (!VAR_16->pager_ready)
  VAR_17 = VAR_4;




 *VAR_14 = VAR_16;
 FUNC_6(VAR_16);
 FUNC_6(VAR_11);


 if (VAR_17 == VAR_4) {
  FUNC_2(VAR_16);
  while (!VAR_16->pager_ready) {
   FUNC_5(VAR_16, VAR_6, VAR_3);
  }
  FUNC_6(VAR_16);
 }

 return VAR_2;
}
