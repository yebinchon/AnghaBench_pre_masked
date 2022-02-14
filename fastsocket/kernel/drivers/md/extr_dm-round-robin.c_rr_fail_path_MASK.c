
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selector {int invalid_paths; } ;
struct path_selector {scalar_t__ context; } ;
struct path_info {int list; } ;
struct dm_path {struct path_info* pscontext; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct path_selector *VAR_0, struct dm_path *VAR_1)
{
 struct selector *VAR_2 = (struct selector *) VAR_0->context;
 struct path_info *VAR_3 = VAR_1->pscontext;

 FUNC_0(&VAR_3->list, &VAR_2->invalid_paths);
}
