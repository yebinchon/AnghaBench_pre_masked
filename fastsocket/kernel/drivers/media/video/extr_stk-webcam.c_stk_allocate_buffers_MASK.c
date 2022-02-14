
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk_camera {int dummy; } ;


 int FUNC_0 (struct stk_camera*) ;
 int FUNC_1 (struct stk_camera*) ;
 int FUNC_2 (struct stk_camera*) ;
 int FUNC_3 (struct stk_camera*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct stk_camera *VAR_0, unsigned VAR_1)
{
 int VAR_2;
 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2) {
  FUNC_0(VAR_0);
  return VAR_2;
 }
 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (VAR_2) {
  FUNC_1(VAR_0);
  return VAR_2;
 }
 return 0;
}
