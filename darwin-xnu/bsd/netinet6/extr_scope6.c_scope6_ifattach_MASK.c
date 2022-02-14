
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scope6_id {int* s6id_list; } ;
struct ifnet {int if_index; } ;


 int * FUNC_0 (struct ifnet*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct scope6_id* FUNC_1 (struct ifnet*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*) ;

void
FUNC_5(struct ifnet *VAR_4)
{
 struct scope6_id *VAR_5;

 FUNC_2(FUNC_0(VAR_4) != ((void*)0));
 FUNC_4(VAR_4);
 VAR_5 = FUNC_1(VAR_4);





 VAR_5->s6id_list[VAR_0] = VAR_4->if_index;
 VAR_5->s6id_list[VAR_1] = VAR_4->if_index;





 FUNC_3(VAR_4);
}
