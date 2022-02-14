
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adbhid {scalar_t__ id; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct adbhid** VAR_3 ;

__attribute__((used)) static void
FUNC_0(void)
{
 struct adbhid *VAR_4;
 int VAR_5;

 for (VAR_5 = 1; VAR_5 < 16; VAR_5++) {
  VAR_4 = VAR_3[VAR_5];

  if (VAR_4 && VAR_4->id == VAR_0)
   if (VAR_4->flags & VAR_2)
    VAR_4->flags |= VAR_1;
 }
}
