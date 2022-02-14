
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3270_request {scalar_t__ view; } ;
struct con3270 {int write; } ;


 int FUNC_0 (struct raw3270_request*) ;
 int FUNC_1 (int *,struct raw3270_request*) ;

__attribute__((used)) static void
FUNC_2(struct raw3270_request *VAR_0, void *VAR_1)
{
 FUNC_0(VAR_0);
 FUNC_1(&((struct con3270 *) VAR_0->view)->write, VAR_0);
}
