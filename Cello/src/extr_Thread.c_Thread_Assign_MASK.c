
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Thread* var ;
struct Thread {scalar_t__ tls; int func; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 struct Thread* FUNC_2 (struct Thread*,int ) ;

__attribute__((used)) static void FUNC_3(var VAR_2, var VAR_3) {
  struct Thread* VAR_4 = VAR_2;
  struct Thread* VAR_5 = FUNC_2(VAR_3, VAR_1);
  VAR_4->func = VAR_5->func;
  VAR_4->tls = VAR_4->tls ? VAR_4->tls : FUNC_0(VAR_0);
  FUNC_1(VAR_4->tls, VAR_5->tls);
}
