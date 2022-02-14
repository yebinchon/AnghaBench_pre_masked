
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
typedef int * uio_t ;
typedef int uio_buf ;
typedef int uint8_t ;
struct dirent {scalar_t__ d_ino; int d_namlen; char* d_name; int d_reclen; } ;
typedef scalar_t__ errno_t ;
struct TYPE_9__ {scalar_t__ v_tag; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ,int,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int *,int ,int*,int*,int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 int FUNC_8 (int *,int ,int) ;
 int * FUNC_9 (int,int ,int ,int ,char*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *,int ) ;
 scalar_t__ FUNC_15 (int ,TYPE_1__*,int ,int ,int) ;
 int FUNC_16 (TYPE_1__*) ;
 scalar_t__ FUNC_17 (TYPE_1__*) ;

errno_t FUNC_18(vnode_t VAR_15 , vfs_context_t VAR_16, int * VAR_17)
{


 uio_t VAR_18 = ((void*)0);
 int VAR_19, VAR_20 = 2048, VAR_21 = 0;
 int VAR_22 = 0, VAR_23 = 0;
 char VAR_24[ FUNC_3(1) ];
 char *VAR_25 = ((void*)0);
    void *VAR_26;
 void *VAR_27;
 struct dirent *VAR_28;
 errno_t VAR_29;

 VAR_29 = FUNC_17(VAR_15);




 if (VAR_29 == VAR_0)
  *VAR_17 = 1;
 if (VAR_29 != 0)
  return (VAR_29);




 FUNC_2(VAR_25, VAR_14, VAR_20, VAR_5, VAR_6);
 if (VAR_25)
  VAR_18 = FUNC_9(1, 0, VAR_9, VAR_8,
    &VAR_24[0], sizeof(VAR_24));
 if (!VAR_25 || !VAR_18) {
  VAR_29 = VAR_2;
  goto outsc;
 }

 FUNC_14(VAR_18,0);

 VAR_19 = 0;

 if ((VAR_29 = FUNC_5(VAR_15, VAR_4, VAR_16)))
  goto outsc;
 else
  VAR_22 = 1;





 do {
  VAR_20 = 2048;
  FUNC_12(VAR_18, FUNC_11(VAR_18), VAR_9, VAR_8);
  FUNC_8(VAR_18, FUNC_0(VAR_25), 2048);

  if((VAR_29 = FUNC_6(VAR_15, VAR_18, 0, &VAR_19, &VAR_21, VAR_16)))
   goto outsc;

  if (FUNC_13(VAR_18) != 0)
   VAR_20 -= FUNC_13(VAR_18);




  VAR_26 = (void*) VAR_25;
  VAR_27 = (void*) (VAR_25 + VAR_20);
  VAR_28 = (struct dirent*) (VAR_26);

  if (VAR_26 == VAR_27)
   VAR_19 = 1;

  while (VAR_26 < VAR_27) {



   if (VAR_28->d_ino != 0 &&
     !((VAR_28->d_namlen == 1 && VAR_28->d_name[0] == '.') ||
         (VAR_28->d_namlen == 2 && VAR_28->d_name[0] == '.' && VAR_28->d_name[1] == '.'))) {




    if ( VAR_28->d_namlen < 2 ||
      FUNC_7(VAR_28->d_name,"._",2) ||
      (VAR_28->d_namlen >= 4 && !FUNC_7(&(VAR_28->d_name[2]), "._",2))) {
     VAR_29 = VAR_3;
     goto outsc;
    }
   }
   VAR_26 = (void*) ((uint8_t*)VAR_26 + VAR_28->d_reclen);
   VAR_28 = (struct dirent*)VAR_26;
  }




  if (VAR_15->v_tag == VAR_12 && VAR_21 > 2)
   VAR_19=0;

  if (VAR_15->v_tag == VAR_13) {
   if (VAR_19 && !VAR_23) {
    VAR_23 = 1;
    VAR_19 = 0;
    FUNC_12(VAR_18, 0, VAR_9, VAR_8);
   }
   else if (!VAR_19 && VAR_23)
    VAR_23 = 0;
  }

 } while (!VAR_19);






 FUNC_12(VAR_18, 0, VAR_9, VAR_8);
 VAR_19 = 0;
 VAR_23 = 0;

 do {
  VAR_20 = 2048;
  FUNC_12(VAR_18, FUNC_11(VAR_18), VAR_9, VAR_8);
  FUNC_8(VAR_18, FUNC_0(VAR_25), 2048);

  VAR_29 = FUNC_6(VAR_15, VAR_18, 0, &VAR_19, &VAR_21, VAR_16);

  if (VAR_29 != 0)
   goto outsc;

  if (FUNC_13(VAR_18) != 0)
   VAR_20 -= FUNC_13(VAR_18);




  VAR_26 = (void*) VAR_25;
  VAR_27 = (void*) (VAR_25 + VAR_20);
  VAR_28 = (struct dirent*) VAR_26;

  if (VAR_26 == VAR_27)
   VAR_19 = 1;

  while (VAR_26 < VAR_27) {



   if (VAR_28->d_ino != 0 &&
     !((VAR_28->d_namlen == 1 && VAR_28->d_name[0] == '.') ||
         (VAR_28->d_namlen == 2 && VAR_28->d_name[0] == '.' && VAR_28->d_name[1] == '.'))
       ) {

    VAR_29 = FUNC_15(VAR_16, VAR_15,
        FUNC_0(VAR_28->d_name), VAR_9,
        VAR_11 |
        VAR_10);

    if (VAR_29 && VAR_29 != VAR_1) {
     goto outsc;
    }

   }
   VAR_26 = (void*) ((uint8_t*)VAR_26 + VAR_28->d_reclen);
   VAR_28 = (struct dirent*)VAR_26;
  }




  if (VAR_15->v_tag == VAR_12 && VAR_21 > 2)
   VAR_19=0;

  if (VAR_15->v_tag == VAR_13) {
   if (VAR_19 && !VAR_23) {
    VAR_23 = 1;
    VAR_19 = 0;
    FUNC_12(VAR_18, 0, VAR_9, VAR_8);
   }
   else if (!VAR_19 && VAR_23)
    VAR_23 = 0;
  }

 } while (!VAR_19);


 VAR_29 = 0;

outsc:
 if (VAR_22)
  FUNC_4(VAR_15, VAR_4, VAR_16);

 if (VAR_18)
  FUNC_10(VAR_18);
 FUNC_1(VAR_25, VAR_5);

 FUNC_16(VAR_15);


 return(VAR_29);

}
