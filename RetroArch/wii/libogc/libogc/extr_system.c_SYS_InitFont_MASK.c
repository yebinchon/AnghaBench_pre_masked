
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int sheet_image; } ;
typedef TYPE_1__ sys_fontheader ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (void*,TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int * VAR_2 ;

u32 FUNC_4(sys_fontheader *VAR_3)
{
 void *VAR_4 = ((void*)0);

 if(!VAR_3) return 0;

 if(FUNC_0()==1) {
  FUNC_3(VAR_3,0,VAR_1);
  VAR_4 = (void*)((u32)VAR_3+868096);
 } else {
  FUNC_3(VAR_3,0,VAR_0);
  VAR_4 = (void*)((u32)VAR_3+119072);
 }

 if(FUNC_1(VAR_4,VAR_3)==1) {
  VAR_2 = (u8*)((((u32)VAR_3+VAR_3->sheet_image)+31)&~31);
  FUNC_2((u8*)VAR_3+VAR_3->sheet_image,VAR_2);
  return 1;
 }

 return 0;
}
