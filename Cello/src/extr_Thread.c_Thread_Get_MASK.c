
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Thread* var ;
struct Thread {int tls; } ;


 struct Thread* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct Thread*) ;

__attribute__((used)) static var FUNC_2(var VAR_0, var VAR_1) {
  struct Thread* VAR_2 = VAR_0;
  return FUNC_0(FUNC_1(VAR_2->tls, VAR_1));
}
