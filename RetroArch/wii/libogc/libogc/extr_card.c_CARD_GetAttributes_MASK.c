
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct card_direntry {int permission; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct card_direntry*) ;

s32 FUNC_1(s32 VAR_1,s32 VAR_2,u8 *VAR_3)
{
 s32 VAR_4;
 struct card_direntry VAR_5;

 if((VAR_4=FUNC_0(VAR_1,VAR_2,&VAR_5))==VAR_0) {
  *VAR_3 = VAR_5.permission;
 }
 return VAR_4;
}
