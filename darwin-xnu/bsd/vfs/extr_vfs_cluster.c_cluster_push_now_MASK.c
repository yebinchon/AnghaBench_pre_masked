
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vm_offset_t ;
typedef int upl_t ;
typedef int upl_size_t ;
typedef int upl_page_info_t ;
typedef int upl_offset_t ;
struct clios {int dummy; } ;
struct cl_extent {int b_addr; scalar_t__ e_addr; } ;
typedef int off_t ;
typedef scalar_t__ kern_return_t ;
typedef int buf_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {int v_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int,int,int,int,int,int ) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_2 (TYPE_1__*,int,int,int,int,int,int ,struct clios*,int (*) (buf_t,void*),void*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int,int,int*,int **,int,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int,int,int ) ;
 scalar_t__ FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int FUNC_10 (TYPE_1__*,int *,int ,int,int ,int,int*) ;

__attribute__((used)) static int
FUNC_11(vnode_t VAR_30, struct cl_extent *VAR_31, off_t VAR_32, int VAR_33,
   int (*VAR_34)(buf_t, void *), void *VAR_35, boolean_t VAR_36)
{
 upl_page_info_t *VAR_37;
 upl_t VAR_38;
 vm_offset_t VAR_39;
 int VAR_40;
 off_t VAR_41;
        int VAR_42;
 int VAR_43;
 int VAR_44;
 int VAR_45;
 int VAR_46;
 int VAR_47;
 int VAR_48;
 int VAR_49;
 int VAR_50 = 0;
 int VAR_51;
 kern_return_t VAR_52;

 if (VAR_33 & VAR_13)
  VAR_48 = VAR_6;
 else
  VAR_48 = 0;

 if (VAR_33 & VAR_14)
  VAR_48 |= VAR_4;

 FUNC_1((FUNC_0(VAR_8, 51)) | VAR_10,
       (int)VAR_31->b_addr, (int)VAR_31->e_addr, (int)VAR_32, VAR_33, 0);

 if ((VAR_42 = (int)(VAR_31->e_addr - VAR_31->b_addr)) == 0) {
         FUNC_1((FUNC_0(VAR_8, 51)) | VAR_9, 1, 0, 0, 0, 0);

         return (0);
 }
 VAR_40 = VAR_42 * VAR_18;
 VAR_41 = (off_t)(VAR_31->b_addr * VAR_19);

 if (VAR_41 + VAR_40 >= VAR_32) {

         if (VAR_41 >= VAR_32) {





          FUNC_1((FUNC_0(VAR_8, 51)) | VAR_9, 1, 1, 0, 0, 0);

          return(0);
  }
  VAR_49 = VAR_32 - VAR_41;

  VAR_40 = (VAR_49 + (VAR_18 - 1)) & ~VAR_17;
  VAR_42 = VAR_40 / VAR_18;
 } else
         VAR_49 = VAR_40;


 if (VAR_36) {
         FUNC_10(VAR_30, ((void*)0), (upl_offset_t)0, VAR_41, (upl_size_t)VAR_40,
         VAR_23 | VAR_26 | VAR_22, &VAR_50);

  return (VAR_50);
 }
 FUNC_1((FUNC_0(VAR_8, 41)) | VAR_10, VAR_40, VAR_49, 0, 0, 0);
 if ((VAR_30->v_flag & VAR_29) || (VAR_33 & VAR_12))
         VAR_47 = VAR_21 | VAR_24 | VAR_25 | VAR_27;
 else
         VAR_47 = VAR_21 | VAR_24 | VAR_25;

 VAR_52 = FUNC_5(VAR_30,
          VAR_41,
          VAR_40,
          &VAR_38,
           &VAR_37,
           VAR_47,
           VAR_28);
 if (VAR_52 != VAR_16)
         FUNC_4("cluster_push: failed to get pagelist");

 FUNC_1((FUNC_0(VAR_8, 41)) | VAR_9, VAR_38, VAR_41, 0, 0, 0);
 for (VAR_44 = VAR_42 - 1; VAR_44 >= 0; VAR_44--) {
         if (FUNC_9(VAR_37, VAR_44))
          break;
 }
 VAR_42 = VAR_44 + 1;

 if (VAR_42 == 0) {
         FUNC_6(VAR_38, 0);

  FUNC_1((FUNC_0(VAR_8, 51)) | VAR_9, 1, 2, 0, 0, 0);
  return(0);
 }

 for (VAR_44 = 0; VAR_44 < VAR_42; ) {





  for (VAR_43 = VAR_44; VAR_43 < VAR_42; VAR_43++) {
   if (FUNC_8(VAR_37, VAR_43))
    break;
   if (FUNC_9(VAR_37, VAR_43))





           FUNC_7(VAR_38, VAR_43 * VAR_18, VAR_18, VAR_20);
  }
  if (VAR_43 >= VAR_42)



          break;
  if (VAR_43 > VAR_44)



   VAR_49 -= ((VAR_43 - VAR_44) * VAR_18);




  for (VAR_44 = VAR_43; VAR_44 < VAR_42; VAR_44++) {
   if (!FUNC_8(VAR_37, VAR_44))
    break;
  }
  VAR_39 = VAR_43 * VAR_18;

  VAR_45 = FUNC_3(VAR_49, (VAR_44 - VAR_43) * VAR_18);

  VAR_46 = VAR_7 | VAR_3 | VAR_0 | VAR_48;

  if ( !(VAR_33 & VAR_15))
          VAR_46 |= VAR_1;

  if (VAR_33 & VAR_11)
          VAR_46 |= VAR_2;

  if (VAR_33 & VAR_12)
   VAR_46 |= VAR_5;

  VAR_51 = FUNC_2(VAR_30, VAR_38, VAR_39, VAR_41 + VAR_39, VAR_45,
        VAR_46, (buf_t)((void*)0), (struct clios *)((void*)0), VAR_34, VAR_35);

  if (VAR_50 == 0 && VAR_51)
          VAR_50 = VAR_51;

  VAR_49 -= VAR_45;
 }
 FUNC_1((FUNC_0(VAR_8, 51)) | VAR_9, 1, 3, VAR_50, 0, 0);

 return(VAR_50);
}
