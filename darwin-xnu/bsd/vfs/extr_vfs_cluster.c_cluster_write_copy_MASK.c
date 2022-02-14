
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef long long vm_size_t ;
typedef int vm_offset_t ;
typedef int upl_t ;
typedef int upl_page_info_t ;
typedef int u_int32_t ;
typedef long long u_int ;
struct uio {scalar_t__ uio_offset; int uio_flags; } ;
struct clios {int dummy; } ;
struct cl_extent {void* e_addr; void* b_addr; } ;
typedef scalar_t__ off_t ;
typedef scalar_t__ kern_return_t ;
typedef void* daddr64_t ;
typedef int buf_t ;
typedef int boolean_t ;
struct TYPE_9__ {int v_mount; } ;


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
 int FUNC_0 (int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int,int,int,int,int,int ) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int FUNC_2 (TYPE_1__*,struct uio*,int*,int,int) ;
 int FUNC_3 (struct uio*,int,int,int*) ;
 int FUNC_4 (TYPE_1__*,int,int,scalar_t__,int,int,int ,struct clios*,int (*) (buf_t,void*),void*) ;
 long long FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*,struct cl_extent*,scalar_t__,int,int (*) (buf_t,void*),void*,int ) ;
 int FUNC_7 (TYPE_1__*,struct cl_extent*,int,int ,int *,scalar_t__,int,scalar_t__,int (*) (buf_t,void*),void*,int ) ;
 int FUNC_8 (int,int,long long,int *) ;
 int FUNC_9 (int,int *,int,int,scalar_t__,scalar_t__,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (TYPE_1__*,scalar_t__,long long,int*,int **,int,int ) ;
 int FUNC_13 (int,int,long long,int) ;
 int FUNC_14 (int,int ,long long,int) ;
 int FUNC_15 (struct uio*) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_19(vnode_t VAR_33, struct uio *VAR_34, u_int32_t VAR_35, off_t VAR_36, off_t VAR_37, off_t VAR_38,
     off_t VAR_39, int VAR_40, int (*VAR_41)(buf_t, void *), void *VAR_42)
{
 upl_page_info_t *VAR_43;
 upl_t VAR_44;
 vm_offset_t VAR_45 = 0;
 vm_size_t VAR_46;
 off_t VAR_47;
 int VAR_48;
 int VAR_49;
 int VAR_50;
 int VAR_51;
 int VAR_52;
 int VAR_53;
 int VAR_54;
 kern_return_t VAR_55;
 int VAR_56 = 0;
 int VAR_57;
 long long VAR_58;
 long long VAR_59;
 off_t VAR_60;
 long long VAR_61;
 off_t VAR_62;
 off_t VAR_63 = 0;
 int VAR_64 = 0;
 boolean_t VAR_65 = VAR_9;
 struct cl_extent VAR_66;
 int VAR_67;
 u_int VAR_68;

 if (VAR_34) {
         FUNC_1((FUNC_0(VAR_5, 40)) | VAR_8,
        (int)VAR_34->uio_offset, VAR_35, (int)VAR_36, (int)VAR_37, 0);

         VAR_57 = VAR_35;
 } else {
         FUNC_1((FUNC_0(VAR_5, 40)) | VAR_8,
        0, 0, (int)VAR_36, (int)VAR_37, 0);

         VAR_57 = 0;
 }
 if (VAR_40 & VAR_12)
  VAR_67 = VAR_2;
 else
  VAR_67 = 0;
 if (VAR_40 & VAR_11)
  VAR_67 |= VAR_1;

 if (VAR_40 & VAR_13)
  VAR_67 |= VAR_0;

 VAR_59 = 0;
 VAR_61 = 0;
 VAR_60 = 0;
 VAR_62 = 0;

 VAR_68 = FUNC_5(VAR_33->v_mount, VAR_4);

 if (VAR_40 & VAR_10) {







         if (VAR_34) {
          if (VAR_38 < VAR_34->uio_offset) {
           VAR_59 = VAR_34->uio_offset - VAR_38;
    VAR_60 = VAR_38;
   }
  } else if (VAR_38 < VAR_37) {
          VAR_59 = VAR_37 - VAR_38;
   VAR_60 = VAR_38;
  }
 } else {
  if (VAR_34 && VAR_34->uio_offset > VAR_36) {
   VAR_60 = VAR_34->uio_offset & ~VAR_19;

   if (VAR_60 >= VAR_36) {
    VAR_59 = VAR_34->uio_offset - VAR_60;

    VAR_40 |= VAR_10;
   }
  }
 }
 if (VAR_40 & VAR_15) {
         if (VAR_34) {
          VAR_62 = VAR_34->uio_offset + VAR_35;

   if (VAR_62 < VAR_39)
           VAR_61 = VAR_39 - VAR_62;
  }
 } else {
  if (VAR_34 && VAR_37 > VAR_36) {
          VAR_62 = VAR_34->uio_offset + VAR_35;

   if (VAR_62 == VAR_37 && (VAR_62 & VAR_19)) {
    VAR_61 = VAR_21 - (VAR_62 & VAR_19);

    VAR_40 |= VAR_15;
   }
  }
 }
 if (VAR_59 == 0 && VAR_34 == (struct uio *) 0) {
         FUNC_1((FUNC_0(VAR_5, 40)) | VAR_6,
        VAR_56, 0, 0, 0, 0);
  return (0);
 }
 if (VAR_34) {
  VAR_63 = VAR_34->uio_offset;
  VAR_64 = FUNC_15(VAR_34);





  VAR_65 = VAR_22;
 }
 while ((VAR_58 = (VAR_57 + VAR_59 + VAR_61)) && VAR_56 == 0) {



         if (VAR_59) {
          VAR_49 = (int)(VAR_60 & VAR_19);
   VAR_47 = VAR_60 - VAR_49;
  } else if (VAR_57) {
          VAR_49 = (int)(VAR_34->uio_offset & VAR_19);
   VAR_47 = VAR_34->uio_offset - VAR_49;
  } else {
          VAR_49 = (int)(VAR_62 & VAR_19);
   VAR_47 = VAR_62 - VAR_49;
  }
         FUNC_1((FUNC_0(VAR_5, 46)) | VAR_7,
        (int)VAR_60, (int)VAR_59, (int)VAR_62, (int)VAR_61, 0);

         if (VAR_58 > VAR_68)
          VAR_58 = VAR_68;

  VAR_66.b_addr = (daddr64_t)(VAR_47 / VAR_21);

  if (VAR_34 && ((VAR_40 & (VAR_14 | VAR_10 | VAR_15)) == 0)) {




          if ((VAR_49 + VAR_58) > VAR_68)
           VAR_58 = VAR_68 - VAR_49;
          VAR_50 = VAR_58;

          VAR_56 = FUNC_2(VAR_33, VAR_34, &VAR_50, 1, 1);

   if (VAR_56)
           break;

   VAR_57 -= (VAR_58 - VAR_50);
   VAR_58 = VAR_50;
   VAR_49 = (int)(VAR_34->uio_offset & VAR_19);
   VAR_47 = VAR_34->uio_offset - VAR_49;

   if (VAR_58 == 0) {
           if (VAR_49) {
            VAR_47 += VAR_21;
    }
           VAR_46 = 0;

           goto check_cluster;
   }
  }
  VAR_46 = (VAR_49 + VAR_58 + (VAR_20 - 1)) & ~VAR_18;

         if (VAR_46 > VAR_68)
          VAR_46 = VAR_68;

  VAR_48 = VAR_46 / VAR_20;
  VAR_51 = VAR_46 - VAR_49;

  if ((long long)VAR_51 > VAR_58)
          VAR_51 = VAR_58;

  FUNC_1((FUNC_0(VAR_5, 41)) | VAR_8, VAR_46, VAR_51, VAR_58, 0, 0);







  VAR_55 = FUNC_12(VAR_33,
          VAR_47,
          VAR_46,
          &VAR_44,
          &VAR_43,
          VAR_29 | (( VAR_34!=((void*)0) && (VAR_34->uio_flags & VAR_23)) ? 0 : VAR_30),
          VAR_31);
  if (VAR_55 != VAR_16)
   FUNC_11("cluster_write_copy: failed to get pagelist");

  FUNC_1((FUNC_0(VAR_5, 41)) | VAR_6,
   VAR_44, (int)VAR_47, VAR_49, 0, 0);

  if (VAR_49 && VAR_47 < VAR_36 && !FUNC_16(VAR_43, 0)) {
   int VAR_69;






   VAR_69 = VAR_20;

   if ((VAR_47 + VAR_69) > VAR_36)
           VAR_69 = VAR_36 - VAR_47;

          VAR_56 = FUNC_4(VAR_33, VAR_44, 0, VAR_47, VAR_69,
         VAR_3 | VAR_67, (buf_t)((void*)0), (struct clios *)((void*)0), VAR_41, VAR_42);
   if (VAR_56) {






    FUNC_13(VAR_44, 0, VAR_20, VAR_24|VAR_25);

    if (VAR_46 > VAR_20)
            FUNC_13(VAR_44, 0, VAR_46, VAR_25);

    FUNC_1((FUNC_0(VAR_5, 45)) | VAR_7,
          VAR_44, 0, 0, VAR_56, 0);
    break;
   }
  }
  if ((VAR_49 == 0 || VAR_46 > VAR_20) && ((VAR_49 + VAR_51) & VAR_18)) {





          VAR_45 = VAR_46 - VAR_20;

          if ((VAR_47 + VAR_49 + VAR_51) < VAR_36 &&
       !FUNC_16(VAR_43, VAR_45 / VAR_20)) {
           int VAR_70;

    VAR_70 = VAR_20;

    if ((off_t)(VAR_47 + VAR_45 + VAR_70) > VAR_36)
            VAR_70 = VAR_36 - (VAR_47 + VAR_45);

           VAR_56 = FUNC_4(VAR_33, VAR_44, VAR_45, VAR_47 + VAR_45, VAR_70,
          VAR_3 | VAR_67, (buf_t)((void*)0), (struct clios *)((void*)0), VAR_41, VAR_42);
    if (VAR_56) {






     FUNC_13(VAR_44, VAR_45, VAR_20, VAR_24|VAR_25);

     if (VAR_46 > VAR_20)
             FUNC_13(VAR_44, 0, VAR_46, VAR_25);

     FUNC_1((FUNC_0(VAR_5, 45)) | VAR_7,
           VAR_44, 0, 0, VAR_56, 0);
     break;
    }
   }
  }
  VAR_50 = VAR_51;
  VAR_52 = VAR_49;

  while (VAR_59 && VAR_50) {

          if (VAR_59 < (long long)VAR_50)
           VAR_53 = VAR_59;
   else
           VAR_53 = VAR_50;

   VAR_53 = FUNC_9(VAR_44, VAR_43, VAR_40, VAR_52, VAR_60, VAR_47, VAR_53);

   VAR_50 -= VAR_53;
   VAR_59 -= VAR_53;
   VAR_60 += VAR_53;
   VAR_52 += VAR_53;
  }
  if (VAR_50 && VAR_57) {
          u_int32_t VAR_71;

   VAR_54 = FUNC_10(VAR_57, VAR_50);
   VAR_71 = VAR_54;

   VAR_56 = FUNC_3(VAR_34, VAR_44, VAR_52, (int *)&VAR_71);

   if (VAR_56) {
    FUNC_13(VAR_44, 0, VAR_46, VAR_25);

    FUNC_1((FUNC_0(VAR_5, 45)) | VAR_7,
          VAR_44, 0, 0, VAR_56, 0);
   } else {
           VAR_57 -= VAR_54;
    VAR_50 -= VAR_54;
    VAR_52 += VAR_54;
   }
  }
  while (VAR_50 && VAR_61 && VAR_56 == 0) {

          if (VAR_61 < (long long)VAR_50)
           VAR_53 = VAR_61;
   else
           VAR_53 = VAR_50;

   VAR_53 = FUNC_9(VAR_44, VAR_43, VAR_40, VAR_52, VAR_62, VAR_47, VAR_53);

   VAR_50 -= VAR_53;
   VAR_61 -= VAR_53;
   VAR_62 += VAR_53;
   VAR_52 += VAR_53;
  }
  if (VAR_56 == 0) {
   int VAR_72 = 1;

   VAR_51 += VAR_49;


   if ((FUNC_18(VAR_33) == VAR_32) && (VAR_37 < VAR_36)) {
    VAR_72 = 0;
   }

   if (VAR_72 && (VAR_47 + VAR_51) >= VAR_37 && (u_int)VAR_51 < VAR_46) {







    FUNC_8(VAR_44, VAR_51, VAR_46 - VAR_51, ((void*)0));
   }
   FUNC_14(VAR_44, 0, VAR_46,
          VAR_28 | VAR_27 | VAR_26);
check_cluster:




   VAR_66.e_addr = (daddr64_t)((VAR_47 + (off_t)VAR_46) / VAR_21);

   if (VAR_40 & VAR_14) {
           VAR_56 = FUNC_6(VAR_33, &VAR_66, VAR_37, VAR_40, VAR_41, VAR_42, VAR_9);
   } else {
    boolean_t VAR_73 = VAR_9;

    if (FUNC_17(VAR_33->v_mount) & VAR_17)
     VAR_73 = VAR_22;

    FUNC_7(VAR_33, &VAR_66, VAR_40, VAR_73, &VAR_65,
             VAR_63, VAR_64, VAR_37, VAR_41, VAR_42, VAR_9);
   }
  }
 }
 FUNC_1((FUNC_0(VAR_5, 40)) | VAR_6, VAR_56, 0, VAR_57, 0, 0);

 return (VAR_56);
}
