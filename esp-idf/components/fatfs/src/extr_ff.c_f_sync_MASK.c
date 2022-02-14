
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int fs ;
struct TYPE_14__ {int stat; scalar_t__ objsize; int sclust; int fs; } ;
struct TYPE_13__ {scalar_t__ fs_type; int* dirbuf; int wflag; int pdrv; } ;
struct TYPE_12__ {int flag; int* dir_ptr; TYPE_3__ obj; int dir_sect; int clust; int sect; int buf; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FIL ;
typedef int FF_DIR ;
typedef TYPE_2__ FATFS ;
typedef int DWORD ;
typedef int DEF_NAMBUF ;
typedef int BYTE ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_3 (int ,int ,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_6 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int ,int*,int ) ;
 int FUNC_9 (int*,int ) ;
 int FUNC_10 (int*,scalar_t__) ;
 int FUNC_11 (int*,int ) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (TYPE_3__*,TYPE_2__**) ;

FRESULT FUNC_15 (
 FIL* VAR_19
)
{
 FRESULT VAR_20;
 FATFS *VAR_21;
 DWORD VAR_22;
 BYTE *VAR_23;


 VAR_20 = FUNC_14(&VAR_19->obj, &VAR_21);
 if (VAR_20 == VAR_8) {
  if (VAR_19->flag & VAR_6) {

   if (VAR_19->flag & VAR_5) {
    if (FUNC_3(VAR_21->pdrv, VAR_19->buf, VAR_19->sect, 1) != VAR_10) FUNC_2(VAR_21, VAR_7);
    VAR_19->flag &= (BYTE)~VAR_5;
   }


   VAR_22 = FUNC_1();
   {
    VAR_20 = FUNC_7(VAR_21, VAR_19->dir_sect);
    if (VAR_20 == VAR_8) {
     VAR_23 = VAR_19->dir_ptr;
     VAR_23[VAR_1] |= VAR_0;
     FUNC_8(VAR_19->obj.fs, VAR_23, VAR_19->obj.sclust);
     FUNC_9(VAR_23 + VAR_2, (DWORD)VAR_19->obj.objsize);
     FUNC_9(VAR_23 + VAR_4, VAR_22);
     FUNC_11(VAR_23 + VAR_3, 0);
     VAR_21->wflag = 1;
     VAR_20 = FUNC_13(VAR_21);
     VAR_19->flag &= (BYTE)~VAR_6;
    }
   }
  }
 }

 FUNC_2(VAR_21, VAR_20);
}
