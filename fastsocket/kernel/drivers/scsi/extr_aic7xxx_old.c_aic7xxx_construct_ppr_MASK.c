
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct aic7xxx_scb {int cmd; } ;
struct aic7xxx_host {int msg_len; int msg_index; scalar_t__* msg_buf; } ;
struct TYPE_3__ {scalar_t__ options; scalar_t__ width; scalar_t__ offset; scalar_t__ period; } ;
struct TYPE_4__ {TYPE_1__ goal; } ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct aic7xxx_host *VAR_3, struct aic7xxx_scb *VAR_4)
{
  VAR_3->msg_buf[VAR_3->msg_index++] = VAR_0;
  VAR_3->msg_buf[VAR_3->msg_index++] = VAR_2;
  VAR_3->msg_buf[VAR_3->msg_index++] = VAR_1;
  VAR_3->msg_buf[VAR_3->msg_index++] = FUNC_0(VAR_4->cmd)->goal.period;
  VAR_3->msg_buf[VAR_3->msg_index++] = 0;
  VAR_3->msg_buf[VAR_3->msg_index++] = FUNC_0(VAR_4->cmd)->goal.offset;
  VAR_3->msg_buf[VAR_3->msg_index++] = FUNC_0(VAR_4->cmd)->goal.width;
  VAR_3->msg_buf[VAR_3->msg_index++] = FUNC_0(VAR_4->cmd)->goal.options;
  VAR_3->msg_len += 8;
}
