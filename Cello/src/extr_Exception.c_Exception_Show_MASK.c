
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Exception* var ;
struct Exception {int msg; int obj; } ;


 int FUNC_0 (struct Exception*,int,char*,struct Exception*,int ,int ) ;

__attribute__((used)) static int FUNC_1(var VAR_0, var VAR_1, int VAR_2) {
  struct Exception* VAR_3 = VAR_0;
  return FUNC_0(VAR_1, VAR_2,
    "<'Exception' At 0x%p %$ - %$>", VAR_0, VAR_3->obj, VAR_3->msg);
}
