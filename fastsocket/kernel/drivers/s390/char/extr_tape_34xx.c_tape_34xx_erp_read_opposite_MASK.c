
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {scalar_t__ op; } ;
struct tape_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct tape_request*,int ) ;
 int FUNC_1 (struct tape_request*) ;
 int FUNC_2 (struct tape_device*,struct tape_request*) ;

__attribute__((used)) static int
FUNC_3(struct tape_device *VAR_2,
       struct tape_request *VAR_3)
{
 if (VAR_3->op == VAR_1) {





  FUNC_2(VAR_2, VAR_3);
  return FUNC_1(VAR_3);
 }





 return FUNC_0(VAR_3, -VAR_0);
}
