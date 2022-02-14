
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct qe_udc {struct qe_ep* eps; } ;
struct qe_ep {int * tx_req; } ;


 int VAR_0 ;
 int FUNC_0 (struct qe_ep*,int ) ;

__attribute__((used)) static int FUNC_1(struct qe_udc *VAR_1, u8 VAR_2)
{
 struct qe_ep *VAR_3 = &VAR_1->eps[VAR_2];

 FUNC_0(VAR_3, -VAR_0);
 VAR_3->tx_req = ((void*)0);
 return 0;
}
