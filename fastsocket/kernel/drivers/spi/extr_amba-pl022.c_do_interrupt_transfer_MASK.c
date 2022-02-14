
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pl022 {int virtbase; TYPE_2__* cur_msg; int cur_transfer; TYPE_1__* cur_chip; } ;
struct TYPE_4__ {int status; int state; } ;
struct TYPE_3__ {int (* cs_control ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct pl022*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct pl022*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_5)
{
 struct pl022 *VAR_6 = VAR_5;


 VAR_6->cur_chip->cs_control(VAR_2);
 if (FUNC_4(VAR_6, VAR_6->cur_transfer)) {

  VAR_6->cur_msg->state = VAR_4;
  VAR_6->cur_msg->status = -VAR_0;
  FUNC_2(VAR_6);
  return;
 }

 FUNC_6((FUNC_3(FUNC_0(VAR_6->virtbase)) | VAR_3),
        FUNC_0(VAR_6->virtbase));
 FUNC_6(VAR_1, FUNC_1(VAR_6->virtbase));
}
