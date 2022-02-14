
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ var ;
struct Array {int dummy; } ;


 scalar_t__ FUNC_0 (struct Array*,int ) ;
 int FUNC_1 (struct Array*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static var FUNC_2(var VAR_1, var VAR_2) {
  struct Array* VAR_3 = VAR_1;
  if (VAR_2 < FUNC_0(VAR_3, 0)) {
    return VAR_0;
  } else {
    return (char*)VAR_2 - FUNC_1(VAR_3);
  }
}
