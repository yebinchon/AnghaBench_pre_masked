
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long data; int function; } ;
struct TYPE_4__ {TYPE_3__ timer; } ;
typedef TYPE_1__ IXJ ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(IXJ *VAR_1)
{
 FUNC_0(&VAR_1->timer);
 VAR_1->timer.function = VAR_0;
 VAR_1->timer.data = (unsigned long)VAR_1;
}
