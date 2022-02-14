
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tape_request {scalar_t__ op; int status; int options; int cpaddr; } ;
struct tape_device {int tape_dnr; int cdev; TYPE_1__* discipline; } ;
struct TYPE_2__ {int (* check_locate ) (struct tape_device*,struct tape_request*) ;} ;


 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,unsigned long,int,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct tape_device*,struct tape_request*) ;

__attribute__((used)) static int
FUNC_4(struct tape_device *VAR_4, struct tape_request *VAR_5)
{
 int VAR_6;





 VAR_6 = FUNC_1(
  VAR_4->cdev,
  VAR_5->cpaddr,
  (unsigned long) VAR_5,
  0x00,
  VAR_5->options
 );
 if (VAR_6 == 0) {
  VAR_5->status = VAR_1;
 } else if (VAR_6 == -VAR_0) {

  VAR_5->status = VAR_2;
  FUNC_2(&VAR_4->tape_dnr, 0);
  VAR_6 = 0;
 } else {

  FUNC_0(1, "tape: start request failed with RC = %i\n", VAR_6);
 }
 return VAR_6;
}
