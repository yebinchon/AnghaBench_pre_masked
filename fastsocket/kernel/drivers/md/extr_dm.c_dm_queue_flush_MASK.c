
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int work; int wq; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct mapped_device *VAR_1)
{
 FUNC_0(VAR_0, &VAR_1->flags);
 FUNC_2();
 FUNC_1(VAR_1->wq, &VAR_1->work);
}
