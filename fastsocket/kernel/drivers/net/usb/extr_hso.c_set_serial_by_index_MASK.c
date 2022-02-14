
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hso_serial {int * parent; } ;


 int ** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(unsigned VAR_2, struct hso_serial *VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(&VAR_1, VAR_4);
 if (VAR_3)
  VAR_0[VAR_2] = VAR_3->parent;
 else
  VAR_0[VAR_2] = ((void*)0);
 FUNC_1(&VAR_1, VAR_4);
}
