
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int level; int * id; int len; int areas; int pages; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int * FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;

int FUNC_4(void)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {

  VAR_2[VAR_4].id = FUNC_1(VAR_2[VAR_4].name,
      VAR_2[VAR_4].pages,
      VAR_2[VAR_4].areas,
      VAR_2[VAR_4].len);
  if (VAR_2[VAR_4].id == ((void*)0)) {
   FUNC_0();
   return -VAR_1;
  }


  FUNC_2(VAR_2[VAR_4].id, &VAR_3);

  FUNC_3(VAR_2[VAR_4].id, VAR_2[VAR_4].level);
 }

 return 0;
}
