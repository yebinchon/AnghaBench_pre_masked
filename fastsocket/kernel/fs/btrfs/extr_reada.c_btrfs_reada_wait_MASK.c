
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reada_control {int refcnt; int elems; int wait; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;

int FUNC_3(void *VAR_1)
{
 struct reada_control *VAR_2 = VAR_1;

 while (FUNC_0(&VAR_2->elems)) {
  FUNC_2(VAR_2->wait, FUNC_0(&VAR_2->elems) == 0);
 }

 FUNC_1(&VAR_2->refcnt, VAR_0);

 return 0;
}
