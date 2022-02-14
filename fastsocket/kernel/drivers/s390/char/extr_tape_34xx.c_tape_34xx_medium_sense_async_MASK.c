
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {int * callback_data; void* callback; int cpdata; int cpaddr; int op; } ;
struct tape_device {int dummy; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct tape_request*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct tape_request* FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (struct tape_device*,struct tape_request*) ;

__attribute__((used)) static void FUNC_5(struct tape_device *VAR_3)
{
 struct tape_request *VAR_4;

 VAR_4 = FUNC_2(1, 32);
 if (FUNC_1(VAR_4)) {
  FUNC_0(6, "MSEN fail\n");
  return;
 }

 VAR_4->op = VAR_1;
 FUNC_3(VAR_4->cpaddr, VAR_0, 32, VAR_4->cpdata);
 VAR_4->callback = (void *) VAR_2;
 VAR_4->callback_data = ((void*)0);
 FUNC_4(VAR_3, VAR_4);
}
