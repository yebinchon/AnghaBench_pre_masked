
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ boolean_t ;
struct TYPE_2__ {scalar_t__ kds_inuse_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_4(void)
{
 boolean_t VAR_6 = VAR_0;
 boolean_t VAR_7 = FUNC_2(VAR_0);

 if (FUNC_0(VAR_4)) {
  if (VAR_3 &&
      (VAR_2.kds_inuse_count >= VAR_5))
  {
   VAR_3 = 0;
   VAR_6 = VAR_1;
  }
  FUNC_1(VAR_4);
 }

 FUNC_2(VAR_7);

 if (VAR_6 == VAR_1) {
  FUNC_3(&VAR_3);
 }
}
