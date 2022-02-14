
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Thread* var ;
struct Thread {int tls; } ;


 struct Thread* FUNC_0 (int ) ;

__attribute__((used)) static var FUNC_1(var VAR_0) {
  struct Thread* VAR_1 = VAR_0;
  return FUNC_0(VAR_1->tls);
}
