
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nelem; scalar_t__ used_elem; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(void)
{
 if (VAR_1.nelem - VAR_1.used_elem < VAR_0) {



  if (VAR_1.used_elem <= VAR_1.nelem) {
   FUNC_1("Forcing table growth: nelem=%d, used=%d, min_free=%d",
    VAR_1.nelem, VAR_1.used_elem,
    VAR_0);
   FUNC_0(&VAR_1, VAR_0);
  }
 }
}
