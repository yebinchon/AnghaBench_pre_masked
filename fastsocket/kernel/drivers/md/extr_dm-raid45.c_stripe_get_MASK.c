
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe {int key; int cnt; struct list_head* lists; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct list_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct stripe*,int ,int ) ;
 scalar_t__ FUNC_4 (struct stripe*) ;

__attribute__((used)) static int FUNC_5(struct stripe *VAR_2)
{
 int VAR_3;
 struct list_head *VAR_4 = VAR_2->lists + VAR_0;


 FUNC_1(VAR_4);
 FUNC_0(FUNC_4(VAR_2) < 0);


 VAR_3 = (FUNC_2(&VAR_2->cnt) == 1) ?
     FUNC_3(VAR_2, VAR_1, VAR_2->key) : 0;

 return VAR_3;
}
