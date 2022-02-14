
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct card_direntry {int* gamecode; int* company; scalar_t__ filename; } ;
struct card_dat {struct card_direntry* entries; } ;
typedef size_t s32 ;
struct TYPE_4__ {int attached; } ;
typedef TYPE_1__ card_block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct card_dat* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int*,char const*,int) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static s32 FUNC_3(card_block *VAR_4,const char *VAR_5,const char *VAR_6,const char *VAR_7,s32 *VAR_8)
{
 u32 VAR_9 = 0;
 struct card_direntry *VAR_10 = ((void*)0);
 struct card_dat *VAR_11 = ((void*)0);
 if(!VAR_4->attached) return VAR_0;
 VAR_11 = FUNC_0(VAR_4);

 VAR_10 = VAR_11->entries;
 for(VAR_9=0;VAR_9<VAR_3;VAR_9++) {
  if(VAR_10[VAR_9].gamecode[0]!=0xff) {
   if(FUNC_2(VAR_5,(const char*)VAR_10[VAR_9].filename)==0) {
    if((VAR_6 && VAR_6[0]!=0xff && FUNC_1(VAR_10[VAR_9].gamecode,VAR_6,4)!=0)
     || (VAR_7 && VAR_7[0]!=0xff && FUNC_1(VAR_10[VAR_9].company,VAR_7,2)!=0)) continue;

    *VAR_8 = VAR_9;
    break;
   }
  }
 }
 if(VAR_9>=VAR_3) return VAR_1;
 return VAR_2;
}
