
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Thread* var ;
struct Thread {int is_running; } ;



__attribute__((used)) static bool FUNC_0(var VAR_0) {
  struct Thread* VAR_1 = VAR_0;
  return VAR_1->is_running;
}
