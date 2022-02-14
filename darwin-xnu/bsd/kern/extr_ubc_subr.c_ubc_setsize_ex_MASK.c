
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int upl_t ;
typedef int upl_page_info_t ;
typedef scalar_t__ uint32_t ;
typedef int ubc_setsize_opts_t ;
struct vnode {struct ubc_info* v_ubcinfo; } ;
struct ubc_info {scalar_t__ ui_size; int ui_control; } ;
typedef scalar_t__ off_t ;
typedef int memory_object_size_t ;
typedef int memory_object_offset_t ;
typedef int memory_object_control_t ;
typedef scalar_t__ kern_return_t ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct vnode*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,int *) ;
 int FUNC_4 (struct vnode*,int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int *,int *,int ,int,int ) ;
 int FUNC_7 (char*,scalar_t__) ;
 int FUNC_8 (char*,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (struct vnode*,scalar_t__,scalar_t__,int *,int **,int ,int ) ;
 int FUNC_12 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_13 (int *,int ) ;

errno_t FUNC_14(struct vnode *VAR_16, off_t VAR_17, ubc_setsize_opts_t VAR_18)
{
 off_t VAR_19;
 off_t VAR_20, VAR_21, VAR_22;
 struct ubc_info *VAR_23;
 memory_object_control_t VAR_24;
 kern_return_t VAR_25 = VAR_3;

 if (VAR_17 < (off_t)0)
  return VAR_1;

 if (!FUNC_1(VAR_16))
  return VAR_2;

 VAR_23 = VAR_16->v_ubcinfo;
 VAR_19 = VAR_23->ui_size;

 if (FUNC_0(VAR_18, VAR_11) && VAR_17 < VAR_19)
  return VAR_0;




 VAR_23->ui_size = VAR_17;

 if (VAR_17 >= VAR_19) {
  if (VAR_17 > VAR_19) {
   FUNC_4(VAR_16, VAR_7);
  }

  return 0;
 }







 VAR_20 = FUNC_10(VAR_17);
 VAR_21 = FUNC_9(VAR_19);
 VAR_24 = VAR_23->ui_control;
 FUNC_2(VAR_24);
 VAR_22 = (VAR_17 & VAR_8);

 if (VAR_22) {
  upl_t VAR_26;
  upl_page_info_t *VAR_27;






  VAR_25 = FUNC_11(VAR_16, VAR_20, VAR_9, &VAR_26, &VAR_27, VAR_13, VAR_14);

  if (VAR_25 != VAR_3)
          FUNC_7("ubc_setsize: ubc_create_upl (error = %d)\n", VAR_25);

  if (FUNC_13(VAR_27, 0))
          FUNC_3(VAR_26, (uint32_t)VAR_22, VAR_9 - (uint32_t)VAR_22, ((void*)0));

  FUNC_12(VAR_26, 0, VAR_9, VAR_12);

  VAR_20 += VAR_10;
 }
 if (VAR_21 > VAR_20) {
  int VAR_28;

  if (VAR_20 == 0)
   VAR_28 = VAR_5;
  else
   VAR_28 = VAR_4;




  VAR_25 = FUNC_6(VAR_24,
            (memory_object_offset_t)VAR_20,
            (memory_object_size_t)(VAR_21 - VAR_20), ((void*)0), ((void*)0),
            VAR_6, VAR_28, VAR_15);
  if (VAR_25 != VAR_3)
          FUNC_8("ubc_setsize: invalidate failed (error = %d)\n", VAR_25);
 }
 return FUNC_5(VAR_25);
}
