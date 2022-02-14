
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {int dummy; } ;
struct tape_device {int cdev_id; struct tape_3590_disc_data* discdata; } ;
struct tape_3590_disc_data {scalar_t__ read_back_op; } ;
struct irb {int dummy; } ;


 int FUNC_0 (int,char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct tape_device*,struct tape_request*,struct irb*) ;
 int FUNC_2 (struct tape_device*,struct tape_request*) ;

__attribute__((used)) static int
FUNC_3(struct tape_device *VAR_2,
        struct tape_request *VAR_3, struct irb *VAR_4)
{
 struct tape_3590_disc_data *VAR_5;
 VAR_5 = VAR_2->discdata;
 if (VAR_5->read_back_op == VAR_1) {
  FUNC_0(2, "(%08x): No support for READ_PREVIOUS command\n",
     VAR_2->cdev_id);
  VAR_5->read_back_op = VAR_0;
 } else {
  FUNC_0(2, "(%08x): No support for READ_BACKWARD command\n",
     VAR_2->cdev_id);
  VAR_5->read_back_op = VAR_1;
 }
 FUNC_2(VAR_2, VAR_3);
 return FUNC_1(VAR_2, VAR_3, VAR_4);
}
