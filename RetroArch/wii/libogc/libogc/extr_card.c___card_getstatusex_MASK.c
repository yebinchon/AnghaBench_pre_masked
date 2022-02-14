
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct card_direntry {int dummy; } ;
struct card_dat {int * entries; } ;
typedef scalar_t__ s32 ;
typedef int card_block ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__,int **) ;
 struct card_dat* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct card_direntry*,int *,int) ;

__attribute__((used)) static s32 FUNC_4(s32 VAR_7,s32 VAR_8,struct card_direntry *VAR_9)
{
 s32 VAR_10;
 card_block *VAR_11 = ((void*)0);
 struct card_dat *VAR_12 = ((void*)0);

 if(VAR_7<VAR_5 || VAR_7>=VAR_6) return VAR_2;
 if(VAR_8<0 || VAR_8>=VAR_4) return VAR_1;
 if((VAR_10=FUNC_0(VAR_7,&VAR_11))<0) return VAR_10;

 VAR_10 = VAR_0;
 VAR_12 = FUNC_1(VAR_11);
 if(VAR_12) {
  VAR_10 = VAR_3;
  FUNC_3(VAR_9,&VAR_12->entries[VAR_8],sizeof(struct card_direntry));
 }
 return FUNC_2(VAR_11,VAR_10);
}
