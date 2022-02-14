
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct card_direntry {int* filename; scalar_t__* gamecode; scalar_t__* company; int copytimes; int permission; int commentaddr; int iconspeed; int iconfmt; int iconaddr; int bannerfmt; int lastmodified; } ;
struct card_dat {struct card_direntry* entries; } ;
typedef scalar_t__ s32 ;
typedef int cardcallback ;
typedef int card_block ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__,int **) ;
 struct card_dat* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static s32 FUNC_6(s32 VAR_9,s32 VAR_10,struct card_direntry *VAR_11,cardcallback VAR_12)
{
 s32 VAR_13,VAR_14,VAR_15;
 card_block *VAR_16 = ((void*)0);
 struct card_dat *VAR_17 = ((void*)0);
 struct card_direntry *VAR_18 = ((void*)0);

 if(VAR_9<VAR_7 || VAR_9>=VAR_8) return VAR_3;
 if(VAR_10<0 || VAR_10>=VAR_6) return VAR_2;
 if(VAR_11->filename[0]==0xff || VAR_11->filename[0]==0) return VAR_2;
 if((VAR_13=FUNC_0(VAR_9,&VAR_16))<0) return VAR_13;

 VAR_13 = VAR_0;
 VAR_17 = FUNC_1(VAR_16);
 if(VAR_17) {
  VAR_14 = 0; VAR_15 = 0;
  VAR_13 = VAR_4;
  VAR_18 = VAR_17->entries;
  while(VAR_14<VAR_5) {
   if(VAR_15 || VAR_11->filename[VAR_14]==0) {
    VAR_11->filename[VAR_14] = 0;
    VAR_15 = 1;
   }
   VAR_14++;
  }

  if(FUNC_4(VAR_18[VAR_10].filename,VAR_11->filename,VAR_5)
   || FUNC_4(VAR_18[VAR_10].gamecode,VAR_11->gamecode,4)
   || FUNC_4(VAR_18[VAR_10].company,VAR_11->company,2)) {
   VAR_14 = 0;
   while(VAR_14<VAR_6) {
    if(VAR_14!=VAR_10 && VAR_18[VAR_14].gamecode[0]!=0xff
     && FUNC_4(VAR_18[VAR_14].gamecode,VAR_11->gamecode,4)==0
     && FUNC_4(VAR_18[VAR_14].company,VAR_11->company,2)==0
     && FUNC_4(VAR_18[VAR_14].filename,VAR_11->filename,VAR_5)==0) {
     return FUNC_2(VAR_16,VAR_1);
    }
    VAR_14++;
   }
   FUNC_5(VAR_18[VAR_10].filename,VAR_11->filename,VAR_5);
   FUNC_5(VAR_18[VAR_10].gamecode,VAR_11->gamecode,4);
   FUNC_5(VAR_18[VAR_10].company,VAR_11->company,2);
  }

  VAR_18[VAR_10].lastmodified = VAR_11->lastmodified;
  VAR_18[VAR_10].bannerfmt = VAR_11->bannerfmt;
  VAR_18[VAR_10].iconaddr = VAR_11->iconaddr;
  VAR_18[VAR_10].iconfmt = VAR_11->iconfmt;
  VAR_18[VAR_10].iconspeed = VAR_11->iconspeed;
  VAR_18[VAR_10].commentaddr = VAR_11->commentaddr;
  VAR_18[VAR_10].permission = VAR_11->permission;
  VAR_18[VAR_10].copytimes = VAR_11->copytimes;

  if((VAR_13=FUNC_3(VAR_9,VAR_12))>=0) return VAR_13;
 }
 return FUNC_2(VAR_16,VAR_13);
}
