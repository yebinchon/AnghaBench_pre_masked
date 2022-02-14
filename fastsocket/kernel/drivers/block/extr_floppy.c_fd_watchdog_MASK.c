
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ timeout_fn ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {int (* done ) (int ) ;} ;
struct TYPE_6__ {scalar_t__ expires; scalar_t__ function; } ;


 TYPE_5__* VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void)
{






 if (FUNC_4(VAR_4)) {
  FUNC_0("disk removed during i/o\n");
  FUNC_2();
  VAR_3->done(0);
  FUNC_5();
 } else {
  FUNC_3(&VAR_5);
  VAR_5.function = (timeout_fn) FUNC_7;
  VAR_5.expires = VAR_6 + VAR_2 / 10;
  FUNC_1(&VAR_5);
 }
}
