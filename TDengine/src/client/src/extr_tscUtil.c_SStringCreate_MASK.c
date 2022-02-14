
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t n; size_t alloc; int z; } ;
typedef TYPE_1__ SString ;


 int FUNC_0 (int,size_t) ;
 int FUNC_1 (int ,char const*) ;
 size_t FUNC_2 (char const*) ;

SString FUNC_3(const char* VAR_0) {
  size_t VAR_1 = FUNC_2(VAR_0);

  SString VAR_2 = {.n = VAR_1, .alloc = VAR_1 + 1};
  VAR_2.z = FUNC_0(1, VAR_2.alloc);
  FUNC_1(VAR_2.z, VAR_0);

  return VAR_2;
}
