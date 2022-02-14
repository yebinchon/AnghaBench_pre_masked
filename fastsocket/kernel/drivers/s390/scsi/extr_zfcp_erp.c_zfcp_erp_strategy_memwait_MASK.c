
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long data; scalar_t__ expires; int function; } ;
struct zfcp_erp_action {TYPE_1__ timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct zfcp_erp_action *VAR_3)
{
 FUNC_1(&VAR_3->timer);
 VAR_3->timer.function = VAR_2;
 VAR_3->timer.data = (unsigned long) VAR_3;
 VAR_3->timer.expires = VAR_1 + VAR_0;
 FUNC_0(&VAR_3->timer);
}
