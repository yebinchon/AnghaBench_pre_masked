
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_send_wc {int send_buf; } ;
struct ib_mad_agent {int dummy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ib_mad_agent *VAR_0,
    struct ib_mad_send_wc *VAR_1)
{
 FUNC_0(VAR_1->send_buf);
}
