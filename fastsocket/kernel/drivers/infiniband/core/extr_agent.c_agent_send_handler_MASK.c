
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_mad_send_wc {TYPE_1__* send_buf; } ;
struct ib_mad_agent {int dummy; } ;
struct TYPE_2__ {int ah; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct ib_mad_agent *VAR_0,
          struct ib_mad_send_wc *VAR_1)
{
 FUNC_0(VAR_1->send_buf->ah);
 FUNC_1(VAR_1->send_buf);
}
