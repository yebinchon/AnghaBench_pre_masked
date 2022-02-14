
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct card_dircntrl {scalar_t__ chksum1; scalar_t__ chksum2; scalar_t__ updated; } ;
struct card_dat {scalar_t__ chksum1; scalar_t__ chksum2; scalar_t__ updated; } ;
struct TYPE_3__ {struct card_dircntrl* curr_dir; struct card_dircntrl* workarea; } ;
typedef TYPE_1__ card_block ;


 int FUNC_0 (scalar_t__*,int,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (struct card_dircntrl*,struct card_dircntrl*,int) ;

__attribute__((used)) static u32 FUNC_2(card_block *VAR_0,u32 *VAR_1)
{
 u32 VAR_2,VAR_3,VAR_4;
 u16 VAR_5,VAR_6;
 struct card_dircntrl *VAR_7[2];
 struct card_dat *VAR_8[2];
 VAR_2 = 0;
 VAR_3 = 0;
 VAR_4 = 0;
 while(VAR_2<2) {
  VAR_8[VAR_2] = VAR_0->workarea+((VAR_2+1)<<13);
  VAR_7[VAR_2] = (VAR_0->workarea+((VAR_2+1)<<13))+8128;
  FUNC_0((u16*)VAR_8[VAR_2],0x1ffc,&VAR_5,&VAR_6);
  if(VAR_5!=VAR_7[VAR_2]->chksum1 || VAR_6!=VAR_7[VAR_2]->chksum2) {
   VAR_0->curr_dir = ((void*)0);
   VAR_4 = VAR_2;
   VAR_3++;
  }
  VAR_2++;
 }

 VAR_2 = VAR_4;
 if(!VAR_3) {
  if(VAR_7[0]->updated<VAR_7[1]->updated) VAR_2 = 0;
  else VAR_2 = 1;
 }
 if(VAR_0->curr_dir==((void*)0)) {
  VAR_0->curr_dir = VAR_8[VAR_2];
  FUNC_1(VAR_8[VAR_2],VAR_8[VAR_2^1],8192);
 }
 else if(VAR_0->curr_dir==VAR_8[0]) VAR_2 = 0;
 else VAR_2 = 1;

 if(VAR_1) *VAR_1 = VAR_2;
 return VAR_3;
}
