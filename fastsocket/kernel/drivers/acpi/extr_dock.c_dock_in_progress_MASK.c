
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dock_station {int flags; scalar_t__ last_dock_time; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct dock_station *VAR_3)
{
 if ((VAR_3->flags & VAR_0) ||
     FUNC_0(VAR_2, (VAR_3->last_dock_time + VAR_1)))
  return 1;
 return 0;
}
