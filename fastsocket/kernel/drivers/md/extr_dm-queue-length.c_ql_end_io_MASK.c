
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_selector {int dummy; } ;
struct path_info {int qlen; } ;
struct dm_path {struct path_info* pscontext; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct path_selector *VAR_0, struct dm_path *VAR_1,
       size_t VAR_2)
{
 struct path_info *VAR_3 = VAR_1->pscontext;

 FUNC_0(&VAR_3->qlen);

 return 0;
}
