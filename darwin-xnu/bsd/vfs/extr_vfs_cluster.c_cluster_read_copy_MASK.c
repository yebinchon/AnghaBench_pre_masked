
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vm_offset_t ;
typedef int upl_t ;
typedef int upl_page_info_t ;
typedef int u_int32_t ;
typedef int u_int ;
struct uio {int uio_offset; } ;
struct clios {int io_error; int io_mtxp; scalar_t__ io_wanted; scalar_t__ io_issued; scalar_t__ io_completed; } ;
struct cl_readahead {int cl_lastr; int cl_maxra; int cl_lockr; scalar_t__ cl_ralen; } ;
struct cl_extent {int b_addr; int e_addr; } ;
typedef int off_t ;
typedef scalar_t__ kern_return_t ;
typedef int buf_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_12__ {int v_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int,int,int,int,int,int ) ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_3 (TYPE_1__*,struct uio*,int*,int ,int) ;
 int FUNC_4 (struct uio*,int,int,int*) ;
 struct cl_readahead* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int,int,int,int,int,int ,struct clios*,int (*) (buf_t,void*),void*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (struct clios*,int ,char*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (TYPE_1__*,struct cl_extent*,int,struct cl_readahead*,int (*) (buf_t,void*),void*,int) ;
 int FUNC_12 (TYPE_1__*,int,int,int,int (*) (buf_t,void*),void*,int) ;
 int FUNC_13 (int,int,int,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (TYPE_1__*,int,int,int*,int **,int,int ) ;
 int FUNC_22 (int,int,int,int) ;
 int FUNC_23 (int,int,int,int) ;
 scalar_t__ FUNC_24 (int *,int) ;

__attribute__((used)) static int
FUNC_25(vnode_t VAR_38, struct uio *VAR_39, u_int32_t VAR_40, off_t VAR_41, int VAR_42, int (*VAR_43)(buf_t, void *), void *VAR_44)
{
 upl_page_info_t *VAR_45;
 upl_t VAR_46;
 vm_offset_t VAR_47;
 u_int32_t VAR_48;
 off_t VAR_49;
 int VAR_50;
 int VAR_51;
 int VAR_52;
 int VAR_53 = 0;
 int VAR_54;
 off_t VAR_55;
 off_t VAR_56;
 off_t VAR_57;
 kern_return_t VAR_58;
 int VAR_59 = 0;
 int VAR_60 = 0;
 u_int32_t VAR_61;
 u_int32_t VAR_62;
 u_int32_t VAR_63;
 u_int32_t VAR_64;
 u_int32_t VAR_65;
 u_int32_t VAR_66;
 u_int VAR_67 = 1;
 u_int VAR_68 = 1;
 struct cl_readahead * VAR_69;
 struct clios VAR_70;
 struct cl_extent VAR_71;
 int VAR_72;
 int VAR_73 = 1;
 int VAR_74 = VAR_10;
 boolean_t VAR_75 = VAR_9;

 FUNC_1((FUNC_0(VAR_5, 32)) | VAR_7,
       (int)VAR_39->uio_offset, VAR_40, (int)VAR_41, VAR_42, 0);

 if (VAR_42 & VAR_11) {
  FUNC_18 ("encrypted blocks will hit UBC!");
 }

 VAR_74 = FUNC_19(((void*)0));

 if (VAR_74 == VAR_23 || VAR_74 == VAR_22 || (VAR_42 & VAR_12))
  VAR_73 = 0;

 if (VAR_42 & VAR_13)
  VAR_72 = VAR_3;
 else
  VAR_72 = 0;

 if (VAR_42 & VAR_12)
  VAR_72 |= VAR_2;

 if (VAR_42 & VAR_16)
  VAR_72 |= VAR_1;

 VAR_65 = FUNC_10(VAR_38->v_mount, VAR_4);
 VAR_66 = FUNC_2(VAR_38, VAR_65, FUNC_14(VAR_38->v_mount));
 VAR_64 = VAR_66;

 VAR_57 = VAR_39->uio_offset + VAR_40;

 if (VAR_57 > VAR_41)
         VAR_57 = VAR_41;

 if ((VAR_42 & (VAR_14|VAR_12)) || ((VAR_57 & ~VAR_19) == (VAR_39->uio_offset & ~VAR_19))) {
         VAR_67 = 0;
  VAR_69 = ((void*)0);
 } else {
         if (FUNC_9(VAR_38)) {





          VAR_67 = 0;
   VAR_68 = 0;

   VAR_64 = VAR_24;
  }
         if ((VAR_69 = FUNC_5(VAR_38)) == ((void*)0))
          VAR_67 = 0;
  else {
   VAR_71.b_addr = VAR_39->uio_offset / VAR_21;
   VAR_71.e_addr = (VAR_57 - 1) / VAR_21;
  }
 }
 if (VAR_69 != ((void*)0) && VAR_69->cl_ralen && (VAR_69->cl_lastr == VAR_71.b_addr || (VAR_69->cl_lastr + 1) == VAR_71.b_addr)) {







         VAR_56 = (VAR_69->cl_maxra * VAR_21) + VAR_21;

  if (VAR_56 < VAR_39->uio_offset)
          VAR_56 = (off_t)0;
  else if (VAR_56 > VAR_57)
          VAR_56 = VAR_57;
 } else
         VAR_56 = (off_t)0;

 while (VAR_40 && VAR_39->uio_offset < VAR_41 && VAR_60 == 0) {

  VAR_55 = VAR_41 - VAR_39->uio_offset;

  if ((off_t)(VAR_40) < VAR_55)
          VAR_63 = VAR_40;
  else
          VAR_63 = VAR_55;

  if (!(VAR_42 & VAR_12)) {

          while (VAR_63) {
           u_int32_t VAR_76;
    u_int32_t VAR_77;
    if (VAR_57 && VAR_56 && (VAR_61 = (VAR_57 - VAR_56))) {
            if ((VAR_56 - VAR_39->uio_offset) <= VAR_64 && VAR_68) {







             if (VAR_61 > VAR_64)
              VAR_61 = VAR_64;

             VAR_61 = FUNC_12(VAR_38, VAR_56, VAR_61, VAR_41, VAR_43, VAR_44, VAR_72);

      VAR_56 += (off_t)(VAR_61 * VAR_20);

      if (VAR_56 > VAR_57)
              VAR_56 = VAR_57;
     }
    }





    if (VAR_56 && VAR_63 > (VAR_65 / 4))
            VAR_76 = (VAR_65 / 4);
    else
            VAR_76 = VAR_63;

    VAR_77 = VAR_76;

           VAR_60 = FUNC_3(VAR_38, VAR_39, (int *)&VAR_76, 0, VAR_73);

    VAR_62 = VAR_77 - VAR_76;

    VAR_63 -= VAR_62;
    VAR_40 -= VAR_62;

    if (VAR_60 || VAR_76)





            break;

    if (VAR_67 && (VAR_63 == 0 || VAR_56 == VAR_57)) {




            FUNC_11(VAR_38, &VAR_71, VAR_41, VAR_69, VAR_43, VAR_44, VAR_72);
    }
   }
   if (VAR_60)
           break;
   if (VAR_63 == 0) {
    if (VAR_69 != ((void*)0)) {
            if (VAR_71.e_addr < VAR_69->cl_lastr)
             VAR_69->cl_maxra = 0;
     VAR_69->cl_lastr = VAR_71.e_addr;
    }
           break;
   }




   VAR_55 = VAR_41 - VAR_39->uio_offset;
  }

  VAR_70.io_completed = 0;
  VAR_70.io_issued = 0;
  VAR_70.io_error = 0;
  VAR_70.io_wanted = 0;

  if ( (VAR_42 & VAR_15) ) {
   if (FUNC_9(VAR_38) == VAR_25) {
    if ( !FUNC_7(VAR_38, VAR_39->uio_offset)) {







     FUNC_20(VAR_38->v_mount);

     VAR_60 = VAR_8;
     break;
    }
   }
  }
  VAR_50 = (int)(VAR_39->uio_offset & VAR_19);
  VAR_49 = VAR_39->uio_offset - (off_t)VAR_50;

         if (VAR_63 > VAR_64)
          VAR_63 = VAR_64;

  VAR_48 = (VAR_50 + VAR_63 + (VAR_20 - 1)) & ~VAR_18;

  if (VAR_42 & VAR_12) {
          if (VAR_48 > VAR_65)
           VAR_48 = VAR_65;
  } else {
          if (VAR_48 > VAR_65 / 4) {
           VAR_48 = VAR_65 / 4;
    VAR_48 &= ~VAR_18;

    if (VAR_48 == 0)
     VAR_48 = VAR_20;
   }
  }
  VAR_54 = VAR_48 / VAR_20;

  FUNC_1((FUNC_0(VAR_5, 33)) | VAR_7,
        VAR_46, (int)VAR_49, VAR_48, VAR_50, 0);

  VAR_58 = FUNC_21(VAR_38,
          VAR_49,
          VAR_48,
          &VAR_46,
          &VAR_45,
          VAR_33 | VAR_34,
          VAR_35);
  if (VAR_58 != VAR_17)
   FUNC_18("cluster_read_copy: failed to get pagelist");

  FUNC_1((FUNC_0(VAR_5, 33)) | VAR_6,
        VAR_46, (int)VAR_49, VAR_48, VAR_50, 0);







  for (VAR_51 = 0; VAR_51 < VAR_54; VAR_51++) {
   if (!FUNC_24(VAR_45, VAR_51))
    break;
  }







  for (VAR_52 = VAR_51; VAR_52 < VAR_54; VAR_52++) {
   if (FUNC_24(VAR_45, VAR_52))
    break;
  }

  if (VAR_51 < VAR_52) {






   if (VAR_75 == VAR_9) {
    FUNC_16(&VAR_70.io_mtxp, VAR_37, VAR_36);

    VAR_75 = VAR_26;
   }
   VAR_47 = VAR_51 * VAR_20;
   VAR_63 = (VAR_52 - VAR_51) * VAR_20;

   if ((off_t)(VAR_49 + VAR_47 + VAR_63) > VAR_41)
           VAR_63 = VAR_41 - (VAR_49 + VAR_47);





   VAR_59 = FUNC_6(VAR_38, VAR_46, VAR_47, VAR_49 + VAR_47,
        VAR_63, VAR_4 | VAR_0 | VAR_72, (buf_t)((void*)0), &VAR_70, VAR_43, VAR_44);

   if (VAR_69) {
                                if (VAR_71.e_addr < VAR_69->cl_maxra) {






                                        VAR_69->cl_maxra = 0;
                               }
                        }
  }
  if (VAR_59 == 0) {






   u_int VAR_78;

          for (VAR_53 = VAR_52; VAR_53 < VAR_54; VAR_53++) {
           if (!FUNC_24(VAR_45, VAR_53))
            break;
   }
   if (VAR_53 < VAR_54) {






           FUNC_22(VAR_46, VAR_53 * VAR_20,
          (VAR_54 - VAR_53) * VAR_20, VAR_28);
   }






   VAR_78 = (VAR_53 * VAR_20) - VAR_50;

   if (VAR_78 > VAR_55)
           VAR_78 = VAR_55;

   if (VAR_78 > VAR_40)
           VAR_78 = VAR_40;

   if ((VAR_39->uio_offset + VAR_78) > VAR_56)
           VAR_56 = VAR_39->uio_offset + VAR_78;

   if ((VAR_61 = (VAR_57 - VAR_56)) && VAR_68) {

           if ((VAR_56 - (VAR_39->uio_offset + VAR_78)) <= VAR_48) {







            if (VAR_61 > VAR_64)
             VAR_61 = VAR_64;

     VAR_61 = FUNC_12(VAR_38, VAR_56, VAR_61, VAR_41, VAR_43, VAR_44, VAR_72);

     VAR_56 += (off_t)(VAR_61 * VAR_20);

     if (VAR_56 > VAR_57)
             VAR_56 = VAR_57;
    }

   } else if ((VAR_39->uio_offset + VAR_78) == VAR_57) {






           if (VAR_67)
     FUNC_11(VAR_38, &VAR_71, VAR_41, VAR_69, VAR_43, VAR_44, VAR_72);

    if (VAR_69 != ((void*)0)) {
            if (VAR_71.e_addr < VAR_69->cl_lastr)
             VAR_69->cl_maxra = 0;
     VAR_69->cl_lastr = VAR_71.e_addr;
    }
   }
   if (VAR_75 == VAR_26)
    FUNC_8(&VAR_70, 0, "cluster_read_copy");

   if (VAR_70.io_error)
           VAR_59 = VAR_70.io_error;
   else {
           u_int32_t VAR_79;

           VAR_79 = VAR_78;

           VAR_60 = FUNC_4(VAR_39, VAR_46, VAR_50, (int *)&VAR_79);

    VAR_40 -= (VAR_78 - VAR_79);
   }
  } else {
   if (VAR_75 == VAR_26)
    FUNC_8(&VAR_70, 0, "cluster_read_copy");
  }
  if (VAR_51 < VAR_52) {






          VAR_63 = (VAR_52 - VAR_51) * VAR_20;

   FUNC_1((FUNC_0(VAR_5, 35)) | VAR_7, VAR_46, VAR_51 * VAR_20, VAR_63, VAR_59, 0);

   if (VAR_59 || (VAR_42 & VAR_12))
           FUNC_22(VAR_46, VAR_51 * VAR_20, VAR_63,
          VAR_27 | VAR_28);
   else {
    int VAR_80 = VAR_29 | VAR_30;

    if (VAR_73)
     VAR_80 |= VAR_31;
    else
     VAR_80 |= VAR_32;

           FUNC_23(VAR_46, VAR_51 * VAR_20, VAR_63, VAR_80);
   }
   FUNC_1((FUNC_0(VAR_5, 35)) | VAR_6, VAR_46, VAR_51 * VAR_20, VAR_63, VAR_59, 0);
  }
  if ((VAR_52 - VAR_51) < VAR_54) {





   if (VAR_59)
    FUNC_22(VAR_46, 0, VAR_48, VAR_28);
   else {

    FUNC_1((FUNC_0(VAR_5, 35)) | VAR_7,
          VAR_46, -1, VAR_54 - (VAR_52 - VAR_51), 0, 0);





    FUNC_13(VAR_46, 0, VAR_51, VAR_73);





    FUNC_13(VAR_46, VAR_52, VAR_53, VAR_73);

    FUNC_1((FUNC_0(VAR_5, 35)) | VAR_6, VAR_46, -1, -1, 0, 0);
   }
  }
  if (VAR_60 == 0)
          VAR_60 = VAR_59;

  if (VAR_40) {
          if (FUNC_9(VAR_38)) {





           VAR_67 = 0;
    VAR_68 = 0;
    VAR_64 = VAR_24;
   } else {
           if (VAR_64 == VAR_24) {



     if (VAR_74 != VAR_23 && VAR_74 != VAR_22) {
      if (VAR_69 != ((void*)0))
       VAR_67 = 1;
      VAR_68 = 1;
     }
     VAR_64 = VAR_66;
     VAR_56 = 0;
    }
   }
  }
 }
 if (VAR_75 == VAR_26) {
  FUNC_8(&VAR_70, 0, "cluster_read_copy");

  FUNC_15(&VAR_70.io_mtxp, VAR_37);
 }
 if (VAR_69 != ((void*)0)) {
         FUNC_1((FUNC_0(VAR_5, 32)) | VAR_6,
        (int)VAR_39->uio_offset, VAR_40, VAR_69->cl_lastr, VAR_60, 0);

         FUNC_17(&VAR_69->cl_lockr);
 } else {
         FUNC_1((FUNC_0(VAR_5, 32)) | VAR_6,
        (int)VAR_39->uio_offset, VAR_40, 0, VAR_60, 0);
 }

 return (VAR_60);
}
