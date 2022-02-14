
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ expires; } ;
struct TYPE_4__ {TYPE_3__ timer; } ;
typedef TYPE_1__ IXJ ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(IXJ *VAR_3)
{
 VAR_3->timer.expires = VAR_1 + (VAR_0 / VAR_2);
 FUNC_0(&VAR_3->timer);
}
