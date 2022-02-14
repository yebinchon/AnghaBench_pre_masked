
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_conn {int refcount; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct iser_conn*,int) ;

int FUNC_2(struct iser_conn *VAR_0, int VAR_1)
{
 if (FUNC_0(&VAR_0->refcount)) {
  FUNC_1(VAR_0, VAR_1);
  return 1;
 }
 return 0;
}
