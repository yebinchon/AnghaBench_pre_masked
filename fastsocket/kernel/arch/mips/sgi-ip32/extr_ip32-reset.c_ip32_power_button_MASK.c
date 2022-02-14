
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int data; } ;
struct TYPE_5__ {scalar_t__ expires; int function; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_3__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (int ,int) ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static inline void FUNC_5(void)
{
 if (VAR_5)
  return;

 if (VAR_9 || FUNC_4(VAR_3, 1)) {

  FUNC_3();
 }

 VAR_9 = 1;
 VAR_4.data = VAR_1;
 FUNC_1(VAR_1);

 FUNC_2(&VAR_8);
 VAR_8.function = VAR_7;
 VAR_8.expires = VAR_6 + VAR_2 * VAR_0;
 FUNC_0(&VAR_8);
}
