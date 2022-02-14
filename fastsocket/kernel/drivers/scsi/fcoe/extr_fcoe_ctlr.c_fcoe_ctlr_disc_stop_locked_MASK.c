
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int disc_mutex; int * disc_callback; } ;
struct fc_lport {TYPE_1__ disc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct fc_lport *VAR_0)
{
 FUNC_0(&VAR_0->disc.disc_mutex);
 VAR_0->disc.disc_callback = ((void*)0);
 FUNC_1(&VAR_0->disc.disc_mutex);
}
