
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3270_request {int dummy; } ;
struct raw3270 {int cdev; } ;


 int FUNC_0 (int ,long) ;
 int FUNC_1 (int ,long) ;
 scalar_t__ FUNC_2 (struct raw3270_request*) ;

__attribute__((used)) static int
FUNC_3(struct raw3270 *VAR_0, struct raw3270_request *VAR_1)
{
 int VAR_2;
 int VAR_3;

 if (FUNC_2(VAR_1))
  return 0;

 for (VAR_2 = 0; VAR_2 < 5; VAR_2++) {
  if (VAR_2 < 2)
   VAR_3 = FUNC_1(VAR_0->cdev, (long) VAR_1);
  else
   VAR_3 = FUNC_0(VAR_0->cdev, (long) VAR_1);
  if (VAR_3 == 0)
   break;
 }
 return VAR_3;
}
