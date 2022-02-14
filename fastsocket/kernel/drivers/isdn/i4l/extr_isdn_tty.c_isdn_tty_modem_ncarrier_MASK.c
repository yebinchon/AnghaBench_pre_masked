
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ expires; } ;
struct TYPE_4__ {TYPE_3__ nc_timer; scalar_t__ ncarrier; } ;
typedef TYPE_1__ modem_info ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1(modem_info * VAR_2)
{
 if (VAR_2->ncarrier) {
  VAR_2->nc_timer.expires = VAR_1 + VAR_0;
  FUNC_0(&VAR_2->nc_timer);
 }
}
