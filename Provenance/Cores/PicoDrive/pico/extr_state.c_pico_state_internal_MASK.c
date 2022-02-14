
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dirtyPal; } ;
struct TYPE_4__ {TYPE_1__ m; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static int FUNC_5(void *VAR_2, int VAR_3)
{
  int VAR_4;

  if (VAR_3)
    VAR_4 = FUNC_4(VAR_2);
  else {
    VAR_4 = FUNC_2(VAR_2);
    if (VAR_4 != 0) {
      FUNC_1(VAR_2, 0, VAR_1);
      VAR_4 = FUNC_3(VAR_2);
    }

    if (&FUNC_0 != ((void*)0))
      FUNC_0();
    VAR_0.m.dirtyPal = 1;
  }

  return VAR_4;
}
