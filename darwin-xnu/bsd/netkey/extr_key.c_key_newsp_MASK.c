
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secpolicy {int refcnt; int * req; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 struct secpolicy* FUNC_1 () ;
 int VAR_1 ;

struct secpolicy *
FUNC_2(void)
{
 struct secpolicy *VAR_2 = ((void*)0);

 FUNC_0(VAR_1, VAR_0);
 VAR_2 = FUNC_1();
 if (!VAR_2)
  return VAR_2;

 VAR_2->refcnt = 1;
 VAR_2->req = ((void*)0);

 return VAR_2;
}
