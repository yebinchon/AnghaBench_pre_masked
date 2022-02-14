
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int sclust; int objsize; } ;
struct TYPE_15__ {scalar_t__ fs_type; int n_fatent; int csize; int pdrv; } ;
struct TYPE_14__ {int clust; int* cltbl; int fptr; int sect; int flag; int buf; TYPE_3__ obj; scalar_t__ err; } ;
typedef int FSIZE_t ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FIL ;
typedef TYPE_2__ FATFS ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (int ,int ,int,int) ;
 scalar_t__ FUNC_7 (int ,int ,int,int) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int,int) ;
 int FUNC_9 (TYPE_3__*,int) ;
 scalar_t__ FUNC_10 (TYPE_3__*,TYPE_2__**) ;

FRESULT FUNC_11 (
 FIL* VAR_12,
 FSIZE_t VAR_13
)
{
 FRESULT VAR_14;
 FATFS *VAR_15;
 DWORD VAR_16, VAR_17, VAR_18;
 FSIZE_t VAR_19;




 VAR_14 = FUNC_10(&VAR_12->obj, &VAR_15);
 if (VAR_14 == VAR_9) VAR_14 = (FRESULT)VAR_12->err;





 if (VAR_14 != VAR_9) FUNC_1(VAR_15, VAR_14);
 {



  if (VAR_13 > VAR_12->obj.objsize && (VAR_5 || !(VAR_12->flag & VAR_3))) {
   VAR_13 = VAR_12->obj.objsize;
  }
  VAR_19 = VAR_12->fptr;
  VAR_12->fptr = VAR_18 = 0;
  if (VAR_13 > 0) {
   VAR_17 = (DWORD)VAR_15->csize * FUNC_2(VAR_15);
   if (VAR_19 > 0 &&
    (VAR_13 - 1) / VAR_17 >= (VAR_19 - 1) / VAR_17) {
    VAR_12->fptr = (VAR_19 - 1) & ~(FSIZE_t)(VAR_17 - 1);
    VAR_13 -= VAR_12->fptr;
    VAR_16 = VAR_12->clust;
   } else {
    VAR_16 = VAR_12->obj.sclust;

    if (VAR_16 == 0) {
     VAR_16 = FUNC_5(&VAR_12->obj, 0);
     if (VAR_16 == 1) FUNC_0(VAR_15, VAR_7);
     if (VAR_16 == 0xFFFFFFFF) FUNC_0(VAR_15, VAR_6);
     VAR_12->obj.sclust = VAR_16;
    }

    VAR_12->clust = VAR_16;
   }
   if (VAR_16 != 0) {
    while (VAR_13 > VAR_17) {
     VAR_13 -= VAR_17; VAR_12->fptr += VAR_17;

     if (VAR_12->flag & VAR_3) {
      if (VAR_4 && VAR_12->fptr > VAR_12->obj.objsize) {
       VAR_12->obj.objsize = VAR_12->fptr;
       VAR_12->flag |= VAR_2;
      }
      VAR_16 = FUNC_5(&VAR_12->obj, VAR_16);
      if (VAR_16 == 0) {
       VAR_13 = 0; break;
      }
     } else

     {
      VAR_16 = FUNC_9(&VAR_12->obj, VAR_16);
     }
     if (VAR_16 == 0xFFFFFFFF) FUNC_0(VAR_15, VAR_6);
     if (VAR_16 <= 1 || VAR_16 >= VAR_15->n_fatent) FUNC_0(VAR_15, VAR_7);
     VAR_12->clust = VAR_16;
    }
    VAR_12->fptr += VAR_13;
    if (VAR_13 % FUNC_2(VAR_15)) {
     VAR_18 = FUNC_4(VAR_15, VAR_16);
     if (VAR_18 == 0) FUNC_0(VAR_15, VAR_7);
     VAR_18 += (DWORD)(VAR_13 / FUNC_2(VAR_15));
    }
   }
  }
  if (!VAR_5 && VAR_12->fptr > VAR_12->obj.objsize) {
   VAR_12->obj.objsize = VAR_12->fptr;
   VAR_12->flag |= VAR_2;
  }
  if (VAR_12->fptr % FUNC_2(VAR_15) && VAR_18 != VAR_12->sect) {


   if (VAR_12->flag & VAR_1) {
    if (FUNC_7(VAR_15->pdrv, VAR_12->buf, VAR_12->sect, 1) != VAR_11) FUNC_0(VAR_15, VAR_6);
    VAR_12->flag &= (BYTE)~VAR_1;
   }

   if (FUNC_6(VAR_15->pdrv, VAR_12->buf, VAR_18, 1) != VAR_11) FUNC_0(VAR_15, VAR_6);

   VAR_12->sect = VAR_18;
  }
 }

 FUNC_1(VAR_15, VAR_14);
}
