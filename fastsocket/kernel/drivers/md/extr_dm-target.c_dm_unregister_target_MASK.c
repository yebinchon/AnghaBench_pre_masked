
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_type {int list; int name; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct target_type *VAR_1)
{
 FUNC_3(&VAR_0);
 if (!FUNC_2(VAR_1->name)) {
  FUNC_1("Unregistering unrecognised target: %s", VAR_1->name);
  FUNC_0();
 }

 FUNC_4(&VAR_1->list);

 FUNC_5(&VAR_0);
}
