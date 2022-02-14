
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct controller {int poll_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct controller*) ;
 int VAR_0 ;
 int FUNC_2 (struct controller*,int) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_1)
{
 struct controller *VAR_2 = (struct controller *)VAR_1;


 FUNC_1(0, VAR_2);

 FUNC_0(&VAR_2->poll_timer);
 if (!VAR_0)
  VAR_0 = 2;

 FUNC_2(VAR_2, VAR_0);
}
