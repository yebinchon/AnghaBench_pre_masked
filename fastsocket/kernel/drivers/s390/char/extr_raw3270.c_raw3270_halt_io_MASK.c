
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3270_request {int dummy; } ;
struct raw3270 {int cdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct raw3270*,struct raw3270_request*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static int
FUNC_4(struct raw3270 *VAR_0, struct raw3270_request *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_2(FUNC_0(VAR_0->cdev), VAR_2);
 VAR_3 = FUNC_1(VAR_0, VAR_1);
 FUNC_3(FUNC_0(VAR_0->cdev), VAR_2);
 return VAR_3;
}
