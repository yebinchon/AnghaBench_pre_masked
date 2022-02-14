
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc {int index; int list; int tc; } ;
struct TYPE_2__ {int tc_list_lock; int tc_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct tc* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static struct tc *FUNC_5(int VAR_2)
{
 struct tc *VAR_3;

 if ((VAR_3 = FUNC_1(sizeof(struct tc), VAR_0)) == ((void*)0))
  goto out;

 FUNC_0(&VAR_3->tc);
 VAR_3->index = VAR_2;

 FUNC_3(&VAR_1.tc_list_lock);
 FUNC_2(&VAR_3->list, &VAR_1.tc_list);
 FUNC_4(&VAR_1.tc_list_lock);

out:
 return VAR_3;
}
