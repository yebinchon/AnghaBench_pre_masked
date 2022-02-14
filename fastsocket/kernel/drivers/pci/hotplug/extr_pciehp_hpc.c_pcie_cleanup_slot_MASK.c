
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slot {int work; } ;
struct controller {struct slot* slot; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct slot*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct controller *VAR_1)
{
 struct slot *VAR_2 = VAR_1->slot;
 FUNC_0(&VAR_2->work);
 FUNC_1();
 FUNC_2(VAR_0);
 FUNC_3(VAR_2);
}
