
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kioctx {int wq; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,unsigned long) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct kioctx * VAR_2)
{
 unsigned long VAR_3;




 FUNC_1();
 if (FUNC_2(&VAR_2->wait))
  VAR_3 = 1;
 else
  VAR_3 = VAR_0/10;
 FUNC_0(VAR_1, &VAR_2->wq, VAR_3);
}
