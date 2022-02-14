
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* increment_heartbeat ) () ;} ;
struct TYPE_4__ {scalar_t__ expires; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static void
FUNC_4(unsigned long VAR_7)
{
 VAR_3.increment_heartbeat();

 if (FUNC_2(VAR_4))
  FUNC_3(&VAR_2);

 VAR_6.expires = VAR_1 + (VAR_5 * VAR_0);
 FUNC_0(&VAR_6);
}
