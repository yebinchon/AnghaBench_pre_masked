
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vm_offset_t ;
typedef int upl_t ;
typedef int upl_page_info_t ;
typedef int uint32_t ;
struct clios {int dummy; } ;
typedef int off_t ;
typedef scalar_t__ kern_return_t ;
typedef int buf_t ;
struct TYPE_7__ {int v_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int,int,int,int,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (TYPE_1__*,int,int,int,int,int,int ,struct clios*,int (*) (buf_t,void*),void*) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_16 ;
 scalar_t__ FUNC_6 (TYPE_1__*,int,int,int*,int **,int,int ) ;
 int FUNC_7 (TYPE_1__*,int,int,int ,int*) ;
 int FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (int *,int) ;

int
FUNC_10(vnode_t VAR_17, off_t VAR_18, off_t VAR_19, int VAR_20, int (*VAR_21)(buf_t, void *), void *VAR_22, int VAR_23)
{
 upl_page_info_t *VAR_24;
 upl_t VAR_25;
 vm_offset_t VAR_26;
 int VAR_27;
 off_t VAR_28;
 int VAR_29;
 int VAR_30;
 int VAR_31;
 int VAR_32;
 off_t VAR_33;
 int VAR_34;
 kern_return_t VAR_35;
 int VAR_36 = 0;
 int VAR_37;
 int VAR_38;
 uint32_t VAR_39;


 if ( !FUNC_2(VAR_17))
  return(VAR_7);

 if (VAR_20 < 0)
  return(VAR_7);

 VAR_39 = FUNC_4(VAR_17->v_mount, VAR_3);





 if (FUNC_5(VAR_17->v_mount)) {
  if (VAR_39 > VAR_16)
   VAR_39 = VAR_16;
 }


 FUNC_1((FUNC_0(VAR_4, 60)) | VAR_6,
       (int)VAR_19, VAR_20, (int)VAR_18, 0, 0);

 while (VAR_20 && VAR_19 < VAR_18 && VAR_36 == 0) {
  VAR_29 = (int)(VAR_19 & VAR_10);
  VAR_28 = VAR_19 - (off_t)VAR_29;
  VAR_33 = VAR_18 - VAR_19;

  if (VAR_20 < VAR_33)
          VAR_34 = VAR_20;
  else
          VAR_34 = VAR_33;

  VAR_27 = (VAR_29 + VAR_34 + (VAR_11 - 1)) & ~VAR_9;
         if ((uint32_t)VAR_27 > VAR_39)
          VAR_27 = VAR_39;

  VAR_38 = 0;




  FUNC_7(VAR_17, VAR_28, VAR_28 + VAR_27, VAR_13, &VAR_38);

  if (VAR_38) {



          VAR_34 = VAR_38 - VAR_29;

          VAR_19 += VAR_34;
   VAR_20 -= VAR_34;

   if (VAR_38 == VAR_27)
           continue;





   VAR_29 = 0;
   VAR_28 += VAR_38;
   VAR_27 -= VAR_38;
  }
  VAR_32 = VAR_27 / VAR_11;

  FUNC_1((FUNC_0(VAR_4, 61)) | VAR_6,
        VAR_25, (int)VAR_28, VAR_27, VAR_29, 0);

  VAR_35 = FUNC_6(VAR_17,
          VAR_28,
          VAR_27,
          &VAR_25,
          &VAR_24,
          VAR_12 | VAR_14,
          VAR_15);
  if (VAR_35 != VAR_8)
          return(VAR_36);
  VAR_37 = 0;






  for (VAR_31 = VAR_32 - 1; VAR_31 >= 0; VAR_31--) {
          if (FUNC_9(VAR_24, VAR_31))
           break;
  }
  VAR_32 = VAR_31 + 1;


  FUNC_1((FUNC_0(VAR_4, 61)) | VAR_5,
        VAR_25, (int)VAR_28, VAR_27, VAR_29, 0);


  for (VAR_31 = 0; VAR_31 < VAR_32; ) {






          for (VAR_30 = VAR_31; VAR_30 < VAR_32; VAR_30++) {
           if (FUNC_9(VAR_24, VAR_30))
            break;
   }







   for (VAR_31 = VAR_30; VAR_31 < VAR_32; VAR_31++) {
           if (!FUNC_9(VAR_24, VAR_31))
            break;
   }

   if (VAR_31 > VAR_30) {






           VAR_26 = VAR_30 * VAR_11;
    VAR_34 = (VAR_31 - VAR_30) * VAR_11;

    if ((off_t)(VAR_28 + VAR_26 + VAR_34) > VAR_18)
            VAR_34 = VAR_18 - (VAR_28 + VAR_26);




    VAR_36 = FUNC_3(VAR_17, VAR_25, VAR_26, VAR_28 + VAR_26, VAR_34,
          VAR_1 | VAR_3 | VAR_2 | VAR_0 | VAR_23, (buf_t)((void*)0), (struct clios *)((void*)0), VAR_21, VAR_22);

    VAR_37 = 1;
   }
  }
  if (VAR_37 == 0)
          FUNC_8(VAR_25, 0);

  VAR_34 = VAR_27 - VAR_29;

  if (VAR_34 > VAR_20)
          VAR_34 = VAR_20;
  VAR_19 += VAR_34;
  VAR_20 -= VAR_34;
 }

 FUNC_1((FUNC_0(VAR_4, 60)) | VAR_5,
       (int)VAR_19, VAR_20, VAR_36, 0, 0);

 return(VAR_36);
}
