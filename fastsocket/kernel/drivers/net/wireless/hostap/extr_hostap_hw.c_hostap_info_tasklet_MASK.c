
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int info_list; } ;
typedef TYPE_1__ local_info_t ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (TYPE_1__*,struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 local_info_t *VAR_1 = (local_info_t *) VAR_0;
 struct sk_buff *VAR_2;

 while ((VAR_2 = FUNC_2(&VAR_1->info_list)) != ((void*)0)) {
  FUNC_1(VAR_1, VAR_2);
  FUNC_0(VAR_2);
 }
}
