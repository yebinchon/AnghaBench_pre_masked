
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * value; int * name; } ;
typedef TYPE_1__ YuiRangeItem ;
struct TYPE_6__ {char* Name; int id; } ;
typedef TYPE_2__ GenericInterface_struct ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 void* FUNC_2 (char*) ;

void FUNC_3(void * VAR_0, YuiRangeItem ** VAR_1) {
 GenericInterface_struct ** VAR_2;
 GenericInterface_struct * VAR_3;
 int VAR_4;

 if (*VAR_1 != ((void*)0)) return;

 VAR_2 = VAR_0;

 VAR_4 = 0;
 VAR_3 = VAR_2[VAR_4];
 while(VAR_3) {
  VAR_4++;
  VAR_3 = VAR_2[VAR_4];
 }
 *VAR_1 = FUNC_0(sizeof(YuiRangeItem) * (VAR_4 + 1));
 VAR_4 = 0;
 VAR_3 = VAR_2[VAR_4];
 while(VAR_3) {
  char VAR_5[1024];
  (*VAR_1)[VAR_4].name = FUNC_2(VAR_3->Name);
  FUNC_1(VAR_5, "%d", VAR_3->id);
  (*VAR_1)[VAR_4].value = FUNC_2(VAR_5);
  VAR_4++;
  VAR_3 = VAR_2[VAR_4];
 }
 (*VAR_1)[VAR_4].name = ((void*)0);
 (*VAR_1)[VAR_4].value = ((void*)0);
}
