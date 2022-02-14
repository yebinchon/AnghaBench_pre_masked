
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_mad_send_wc {TYPE_1__* send_buf; } ;
struct TYPE_2__ {scalar_t__* context; scalar_t__ ah; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct ib_mad_send_wc *VAR_0)
{
 if (VAR_0->send_buf->context[0] == VAR_0->send_buf->ah)
  FUNC_0(VAR_0->send_buf->ah);
 FUNC_1(VAR_0->send_buf);
}
