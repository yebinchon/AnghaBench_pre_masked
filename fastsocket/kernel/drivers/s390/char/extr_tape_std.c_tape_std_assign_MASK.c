
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {unsigned long data; scalar_t__ expires; int function; } ;
struct tape_request {scalar_t__ cpaddr; int cpdata; int op; } ;
struct tape_device {int cdev_id; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct tape_request*) ;
 int VAR_2 ;
 int FUNC_2 (struct tape_request*) ;
 int VAR_3 ;
 int FUNC_3 (struct timer_list*) ;
 int FUNC_4 (struct timer_list*) ;
 int FUNC_5 (struct timer_list*) ;
 scalar_t__ VAR_4 ;
 struct tape_request* FUNC_6 (int,int) ;
 int FUNC_7 (scalar_t__,int ,int,int ) ;
 int FUNC_8 (scalar_t__,int ,int ,int *) ;
 int FUNC_9 (struct tape_device*,struct tape_request*) ;
 int FUNC_10 (struct tape_request*) ;
 int VAR_5 ;

int
FUNC_11(struct tape_device *VAR_6)
{
 int VAR_7;
 struct timer_list VAR_8;
 struct tape_request *VAR_9;

 VAR_9 = FUNC_6(2, 11);
 if (FUNC_1(VAR_9))
  return FUNC_2(VAR_9);

 VAR_9->op = VAR_3;
 FUNC_7(VAR_9->cpaddr, VAR_0, 11, VAR_9->cpdata);
 FUNC_8(VAR_9->cpaddr + 1, VAR_2, 0, ((void*)0));






 FUNC_5(&VAR_8);
 VAR_8.function = VAR_5;
 VAR_8.data = (unsigned long) VAR_9;
 VAR_8.expires = VAR_4 + 2 * VAR_1;
 FUNC_3(&VAR_8);

 VAR_7 = FUNC_9(VAR_6, VAR_9);

 FUNC_4(&VAR_8);

 if (VAR_7 != 0) {
  FUNC_0(3, "%08x: assign failed - device might be busy\n",
   VAR_6->cdev_id);
 } else {
  FUNC_0(3, "%08x: Tape assigned\n", VAR_6->cdev_id);
 }
 FUNC_10(VAR_9);
 return VAR_7;
}
