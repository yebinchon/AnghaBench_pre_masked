
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_send_wr_private {int timeout; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ib_mad_send_wr_private*) ;

void FUNC_2(struct ib_mad_send_wr_private *VAR_0,
     int VAR_1)
{
 VAR_0->timeout = FUNC_0(VAR_1);
 FUNC_1(VAR_0);
}
