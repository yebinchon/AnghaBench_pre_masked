
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct card_direntry {int* gamecode; int* company; int length; int* filename; int permission; } ;
struct card_dat {struct card_direntry* entries; } ;
typedef scalar_t__ s32 ;
struct TYPE_7__ {int filelen; int filename; int company; int gamecode; int permissions; scalar_t__ fileno; } ;
typedef TYPE_1__ card_dir ;
struct TYPE_8__ {int sector_size; int attached; } ;
typedef TYPE_2__ card_block ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__,TYPE_2__**) ;
 struct card_dat* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int* VAR_7 ;
 int* VAR_8 ;
 scalar_t__ FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int ,int*,int) ;

s32 FUNC_5(s32 VAR_9,card_dir *VAR_10,s32 *VAR_11,bool VAR_12)
{
 s32 VAR_13,VAR_14;
 s32 VAR_15 = VAR_2;
 struct card_dat *VAR_16 = ((void*)0);
 struct card_direntry *VAR_17 = ((void*)0);
 card_block *VAR_18 = ((void*)0);

 if(VAR_9<VAR_5 || VAR_9>=VAR_6) return VAR_0;
 if((VAR_15=FUNC_0(VAR_9,&VAR_18))<0) return VAR_15;

 if(!VAR_18->attached) return VAR_0;
 VAR_16 = FUNC_1(VAR_18);

 VAR_17 = VAR_16->entries;
 for(VAR_13=0,VAR_14=0;VAR_13<VAR_4;VAR_13++) {
  if(VAR_17[VAR_13].gamecode[0]!=0xff) {
   if(VAR_12 || ((VAR_8[0]!=0xff && FUNC_3(VAR_17[VAR_13].gamecode,VAR_8,4)==0)
    && (VAR_7[0]!=0xff && FUNC_3(VAR_17[VAR_13].company,VAR_7,2)==0))) {
    VAR_10[VAR_14].fileno = VAR_13;
    VAR_10[VAR_14].permissions = VAR_17[VAR_13].permission;
    VAR_10[VAR_14].filelen = VAR_17[VAR_13].length*VAR_18->sector_size;
    FUNC_4(VAR_10[VAR_14].gamecode,VAR_17[VAR_13].gamecode,4);
    FUNC_4(VAR_10[VAR_14].company,VAR_17[VAR_13].company,2);
    FUNC_4(VAR_10[VAR_14].filename,VAR_17[VAR_13].filename,VAR_3);
    VAR_14++;
   }
  }
 }
 if(VAR_11) *VAR_11 = VAR_14;
 if(VAR_14==0) VAR_15 = VAR_1;
 FUNC_2(VAR_18,VAR_15);
 return VAR_15;
}
