
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ expires; scalar_t__ data; int function; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(void)
{
 if (VAR_1 <= 0 || VAR_2 <= 0) {
  if (FUNC_3(&VAR_3))
   FUNC_1(&VAR_3);
  return;
 }
 if (FUNC_3(&VAR_3)) {
  if (FUNC_2(&VAR_3, VAR_5 + VAR_2*VAR_0))
   return;
 }
 VAR_3.function = VAR_4;
 VAR_3.data = 0;
 VAR_3.expires = VAR_5 + VAR_2*VAR_0;
 FUNC_0(&VAR_3);
}
