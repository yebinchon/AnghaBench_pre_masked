
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct card_direntry {int permission; } ;
typedef int s32 ;
typedef int cardcallback ;


 int FUNC_0 (int ,int ,struct card_direntry*) ;
 int FUNC_1 (int ,int ,struct card_direntry*,int ) ;

s32 FUNC_2(s32 VAR_0,s32 VAR_1,u8 VAR_2,cardcallback VAR_3)
{
 s32 VAR_4;
 struct card_direntry VAR_5;

 if((VAR_4=FUNC_0(VAR_0,VAR_1,&VAR_5))>=0) {
  VAR_5.permission = VAR_2;
  VAR_4 = FUNC_1(VAR_0,VAR_1,&VAR_5,VAR_3);
 }
 return VAR_4;
}
