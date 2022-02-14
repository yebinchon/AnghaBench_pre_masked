
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int WORD ;
typedef int UINT ;
struct TYPE_10__ {int fs_type; int* win; int fsize; int n_fats; int csize; int n_fatent; int volbase; int database; int fatbase; int dirbase; int bitbase; int last_clst; int free_clst; int n_rootdir; int fsi_flag; scalar_t__ cdir; int dirbuf; int lfnbuf; scalar_t__ id; int pdrv; } ;
typedef int TCHAR ;
typedef int QWORD ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FATFS ;
typedef int DWORD ;
typedef int DSTATUS ;
typedef int BYTE ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
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
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 TYPE_1__** VAR_46 ;
 scalar_t__ VAR_47 ;
 int VAR_48 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 size_t VAR_56 ;
 scalar_t__ VAR_57 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ,int*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int const**) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (int*) ;
 int FUNC_12 (scalar_t__*) ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*,int) ;

__attribute__((used)) static FRESULT FUNC_15 (
 const TCHAR** VAR_62,
 FATFS** VAR_63,
 BYTE VAR_64
)
{
 BYTE VAR_65, *VAR_66;
 int VAR_67;
 DSTATUS VAR_68;
 DWORD VAR_69, VAR_70, VAR_71, VAR_72, VAR_73, VAR_74, VAR_75[4];
 WORD VAR_76;
 FATFS *VAR_77;
 UINT VAR_78;



 *VAR_63 = 0;
 VAR_67 = FUNC_9(VAR_62);
 if (VAR_67 < 0) return VAR_31;


 VAR_77 = VAR_46[VAR_67];
 if (!VAR_77) return VAR_32;



 *VAR_63 = VAR_77;

 VAR_64 &= (BYTE)~VAR_26;
 if (VAR_77->fs_type != 0) {
  VAR_68 = FUNC_8(VAR_77->pdrv);
  if (!(VAR_68 & VAR_58)) {
   if (!VAR_27 && VAR_64 && (VAR_68 & VAR_59)) {
    return VAR_37;
   }
   return VAR_35;
  }
 }




 VAR_77->fs_type = 0;
 VAR_77->pdrv = FUNC_0(VAR_67);
 VAR_68 = FUNC_6(VAR_77->pdrv);
 if (VAR_68 & VAR_58) {
  return VAR_33;
 }
 if (!VAR_27 && VAR_64 && (VAR_68 & VAR_59)) {
  return VAR_37;
 }






 VAR_69 = 0;
 VAR_65 = FUNC_3(VAR_77, VAR_69);
 if (VAR_65 == 2 || (VAR_65 < 2 && FUNC_1(VAR_67) != 0)) {
  for (VAR_78 = 0; VAR_78 < 4; VAR_78++) {
   VAR_66 = VAR_77->win + (VAR_54 + VAR_78 * VAR_61);
   VAR_75[VAR_78] = VAR_66[VAR_56] ? FUNC_10(VAR_66 + VAR_55) : 0;
  }
  VAR_78 = FUNC_1(VAR_67);
  if (VAR_78 != 0) VAR_78--;
  do {
   VAR_69 = VAR_75[VAR_78];
   VAR_65 = VAR_69 ? FUNC_3(VAR_77, VAR_69) : 3;
  } while (FUNC_1(VAR_67) == 0 && VAR_65 >= 2 && ++VAR_78 < 4);
 }
 if (VAR_65 == 4) return VAR_30;
 if (VAR_65 >= 2) return VAR_34;
 {
  if (FUNC_12(VAR_77->win + VAR_0) != FUNC_2(VAR_77)) return VAR_34;

  VAR_70 = FUNC_12(VAR_77->win + VAR_3);
  if (VAR_70 == 0) VAR_70 = FUNC_10(VAR_77->win + VAR_4);
  VAR_77->fsize = VAR_70;

  VAR_77->n_fats = VAR_77->win[VAR_11];
  if (VAR_77->n_fats != 1 && VAR_77->n_fats != 2) return VAR_34;
  VAR_70 *= VAR_77->n_fats;

  VAR_77->csize = VAR_77->win[VAR_17];
  if (VAR_77->csize == 0 || (VAR_77->csize & (VAR_77->csize - 1))) return VAR_34;

  VAR_77->n_rootdir = FUNC_12(VAR_77->win + VAR_15);
  if (VAR_77->n_rootdir % (FUNC_2(VAR_77) / VAR_60)) return VAR_34;

  VAR_71 = FUNC_12(VAR_77->win + VAR_19);
  if (VAR_71 == 0) VAR_71 = FUNC_10(VAR_77->win + VAR_20);

  VAR_76 = FUNC_12(VAR_77->win + VAR_16);
  if (VAR_76 == 0) return VAR_34;


  VAR_72 = VAR_76 + VAR_70 + VAR_77->n_rootdir / (FUNC_2(VAR_77) / VAR_60);
  if (VAR_71 < VAR_72) return VAR_34;
  VAR_73 = (VAR_71 - VAR_72) / VAR_77->csize;
  if (VAR_73 == 0) return VAR_34;
  VAR_65 = 0;
  if (VAR_73 <= VAR_53) VAR_65 = VAR_45;
  if (VAR_73 <= VAR_52) VAR_65 = VAR_44;
  if (VAR_73 <= VAR_51) VAR_65 = VAR_43;
  if (VAR_65 == 0) return VAR_34;


  VAR_77->n_fatent = VAR_73 + 2;
  VAR_77->volbase = VAR_69;
  VAR_77->fatbase = VAR_69 + VAR_76;
  VAR_77->database = VAR_69 + VAR_72;
  if (VAR_65 == VAR_45) {
   if (FUNC_12(VAR_77->win + VAR_6) != 0) return VAR_34;
   if (VAR_77->n_rootdir != 0) return VAR_34;
   VAR_77->dirbase = FUNC_10(VAR_77->win + VAR_13);
   VAR_74 = VAR_77->n_fatent * 4;
  } else {
   if (VAR_77->n_rootdir == 0) return VAR_34;
   VAR_77->dirbase = VAR_77->fatbase + VAR_70;
   VAR_74 = (VAR_65 == VAR_44) ?
    VAR_77->n_fatent * 2 : VAR_77->n_fatent * 3 / 2 + (VAR_77->n_fatent & 1);
  }
  if (VAR_77->fsize < (VAR_74 + (FUNC_2(VAR_77) - 1)) / FUNC_2(VAR_77)) return VAR_34;



  VAR_77->last_clst = VAR_77->free_clst = 0xFFFFFFFF;
  VAR_77->fsi_flag = 0x80;

  if (VAR_65 == VAR_45
   && FUNC_12(VAR_77->win + VAR_5) == 1
   && FUNC_14(VAR_77, VAR_69 + 1) == VAR_35)
  {
   VAR_77->fsi_flag = 0;
   if (FUNC_12(VAR_77->win + VAR_23) == 0xAA55
    && FUNC_10(VAR_77->win + VAR_39) == 0x41615252
    && FUNC_10(VAR_77->win + VAR_41) == 0x61417272)
   {

    VAR_77->free_clst = FUNC_10(VAR_77->win + VAR_38);


    VAR_77->last_clst = FUNC_10(VAR_77->win + VAR_40);

   }
  }


 }

 VAR_77->fs_type = VAR_65;
 VAR_77->id = ++VAR_47;
 return VAR_35;
}
