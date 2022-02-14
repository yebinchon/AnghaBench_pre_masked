
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selector {int failed_paths; int valid_paths; } ;
struct path_selector {struct selector* context; } ;


 int FUNC_0 (struct selector*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct path_selector *VAR_0)
{
 struct selector *VAR_1 = VAR_0->context;

 FUNC_1(&VAR_1->valid_paths);
 FUNC_1(&VAR_1->failed_paths);
 FUNC_0(VAR_1);
 VAR_0->context = ((void*)0);
}
