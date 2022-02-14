
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ n; int z; int member_0; } ;
typedef TYPE_1__ SSQLToken ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(SSQLToken* VAR_1) {
  SSQLToken VAR_2 = *VAR_1;
  SSQLToken VAR_3 = {0};

  FUNC_0(&VAR_2, &VAR_3);

  return (FUNC_2(VAR_0, VAR_2.z, VAR_2.n) == 0 && VAR_2.n == FUNC_1(VAR_0));
}
