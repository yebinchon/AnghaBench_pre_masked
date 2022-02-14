
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_tag_t ;
typedef int * upl_t ;
typedef int upl_page_info_t ;
struct vnode {int dummy; } ;
typedef int off_t ;
typedef scalar_t__ memory_object_control_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_0 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int,int **,int *,int *,int,int ) ;
 scalar_t__ FUNC_2 (struct vnode*,int ) ;

kern_return_t
FUNC_3(
 struct vnode *VAR_19,
 off_t VAR_20,
 int VAR_21,
 upl_t *VAR_22,
 upl_page_info_t **VAR_23,
 int VAR_24,
 vm_tag_t VAR_25)
{
 memory_object_control_t VAR_26;
 kern_return_t VAR_27;

 if (VAR_23 != ((void*)0))
  *VAR_23 = ((void*)0);
 *VAR_22 = ((void*)0);

 if (VAR_21 & 0xfff)
  return VAR_0;

 if (VAR_21 > VAR_2)
  return VAR_0;

 if (VAR_24 & (VAR_15 | VAR_17 | VAR_16)) {

  if (VAR_24 & VAR_15) {
   VAR_24 &= VAR_12;

   VAR_24 |= VAR_7 | VAR_6 |
        VAR_13 | VAR_14;

  } else if (VAR_24 & VAR_17) {
   VAR_24 &= VAR_12;

   if (VAR_24 & VAR_12)
    VAR_24 |= VAR_9;

   VAR_24 |= VAR_8 | VAR_6 |
                                    VAR_7 | VAR_13 | VAR_14;
  } else {
   VAR_24 |= VAR_11 |
        VAR_10 | VAR_6 |
        VAR_13 | VAR_14;
   if (VAR_21 > VAR_4)
    VAR_24 |= VAR_9;
  }
 } else {
  VAR_24 &= ~VAR_8;

  if (VAR_24 & VAR_18) {
   VAR_24 &= ~VAR_18;
   VAR_24 |= (VAR_10|VAR_13);
  } else
   VAR_24 |= (VAR_10|VAR_6|VAR_13);
 }
 VAR_26 = FUNC_2(VAR_19, VAR_5);
 if (VAR_26 == VAR_3)
  return VAR_0;

 VAR_27 = FUNC_1(VAR_26, VAR_20, VAR_21, VAR_22, ((void*)0), ((void*)0), VAR_24, VAR_25);
 if (VAR_27 == VAR_1 && VAR_23 != ((void*)0))
  *VAR_23 = FUNC_0(*VAR_22);
 return VAR_27;
}
