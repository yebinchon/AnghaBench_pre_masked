
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int var ;
struct Doc {char const* (* name ) () ;} ;


 int VAR_0 ;
 char const* FUNC_0 (int ) ;
 char const* FUNC_1 () ;
 struct Doc* FUNC_2 (int ,int ) ;

const char* FUNC_3(var VAR_1) {
  struct Doc* VAR_2 = FUNC_2(VAR_1, VAR_0);
  if (VAR_2->name) { return VAR_2->name(); }
  return FUNC_0(VAR_1);
}
