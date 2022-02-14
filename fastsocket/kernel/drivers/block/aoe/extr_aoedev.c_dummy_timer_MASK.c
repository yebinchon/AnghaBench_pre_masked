
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct aoedev {int flags; TYPE_1__ timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_1(ulong VAR_3)
{
 struct aoedev *VAR_4;

 VAR_4 = (struct aoedev *)VAR_3;
 if (VAR_4->flags & VAR_0)
  return;
 VAR_4->timer.expires = VAR_2 + VAR_1;
 FUNC_0(&VAR_4->timer);
}
