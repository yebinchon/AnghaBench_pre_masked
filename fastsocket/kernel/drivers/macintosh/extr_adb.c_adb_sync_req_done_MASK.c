
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct completion {int dummy; } ;
struct adb_request {struct completion* arg; } ;


 int FUNC_0 (struct completion*) ;

__attribute__((used)) static void FUNC_1(struct adb_request *VAR_0)
{
 struct completion *VAR_1 = VAR_0->arg;

 FUNC_0(VAR_1);
}
