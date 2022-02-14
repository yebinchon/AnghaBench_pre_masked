
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct dcookie_struct {int hash_list; } ;


 int FUNC_0 (int ) ;
 struct list_head* VAR_0 ;
 int FUNC_1 (struct dcookie_struct*) ;
 int FUNC_2 (int *,struct list_head*) ;

__attribute__((used)) static void FUNC_3(struct dcookie_struct * VAR_1)
{
 struct list_head * VAR_2 = VAR_0 + FUNC_0(FUNC_1(VAR_1));
 FUNC_2(&VAR_1->hash_list, VAR_2);
}
