
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbsd_host {int lock; int card_tasklet; int flags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_1)
{
 struct wbsd_host *VAR_2 = (struct wbsd_host *)VAR_1;

 FUNC_0(VAR_2 == ((void*)0));

 FUNC_1("Resetting card detection ignore\n");

 FUNC_2(&VAR_2->lock);

 VAR_2->flags &= ~VAR_0;





 FUNC_4(&VAR_2->card_tasklet);

 FUNC_3(&VAR_2->lock);
}
