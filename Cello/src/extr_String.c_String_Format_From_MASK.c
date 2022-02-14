
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct String* var ;
typedef int va_list ;
struct String {scalar_t__ val; } ;


 int FUNC_0 (scalar_t__,char const*,int ) ;

__attribute__((used)) static int FUNC_1(var VAR_0, int VAR_1, const char* VAR_2, va_list VAR_3) {
  struct String* VAR_4 = VAR_0;
  return FUNC_0(VAR_4->val + VAR_1, VAR_2, VAR_3);
}
