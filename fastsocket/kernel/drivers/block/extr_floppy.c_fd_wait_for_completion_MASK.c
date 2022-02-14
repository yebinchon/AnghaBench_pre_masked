
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int timeout_fn ;
struct TYPE_6__ {scalar_t__ reset; } ;
struct TYPE_5__ {unsigned long expires; int function; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_3, timeout_fn VAR_4)
{
 if (VAR_0->reset) {
  FUNC_2();


  return 1;
 }

 if (FUNC_3(VAR_2, VAR_3)) {
  FUNC_1(&VAR_1);
  VAR_1.function = VAR_4;
  VAR_1.expires = VAR_3;
  FUNC_0(&VAR_1);
  return 1;
 }
 return 0;
}
