
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_object_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 scalar_t__ VAR_12 ;

void
FUNC_8(
 vm_object_t VAR_13,
 vm_map_offset_t VAR_14,
 vm_map_offset_t VAR_15)
{
 kern_return_t VAR_16;
 int VAR_17;

 if ((VAR_9 == 0) ||
     (VAR_14 < VAR_9) ||
     (VAR_15 > (VAR_9
       + (VAR_6 * VAR_3)))) {





  if (VAR_13 != VAR_5) {
   FUNC_7(VAR_13);
  }
  VAR_16 = FUNC_5(VAR_7, VAR_14, VAR_15,
       VAR_4);
  if (VAR_13 != VAR_5) {
   FUNC_6(VAR_13);
  }
  FUNC_0(VAR_16 == VAR_1);
 } else {





  FUNC_0(VAR_15 - VAR_14 == VAR_3);
  VAR_17 = (int) ((VAR_14 - VAR_9) >> VAR_2);
  FUNC_0(VAR_17 >= 0 && VAR_17 < VAR_6);


  FUNC_1(VAR_8, VAR_14, VAR_15);

  FUNC_2(&VAR_10);
  VAR_11[VAR_17] = VAR_0;
  if (VAR_12) {
   FUNC_4(&VAR_12);
  }
  FUNC_3(&VAR_10);
 }
}
