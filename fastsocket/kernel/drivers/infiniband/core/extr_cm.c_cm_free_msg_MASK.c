
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_send_buf {scalar_t__* context; int ah; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ib_mad_send_buf*) ;

__attribute__((used)) static void FUNC_3(struct ib_mad_send_buf *VAR_0)
{
 FUNC_1(VAR_0->ah);
 if (VAR_0->context[0])
  FUNC_0(VAR_0->context[0]);
 FUNC_2(VAR_0);
}
