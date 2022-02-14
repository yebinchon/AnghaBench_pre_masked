
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qe_udc {scalar_t__ ep0_state; int local_setup_buff; struct qe_ep* eps; } ;
struct qe_frame {int data; } ;
struct qe_ep {int data01; struct qe_frame* rxframe; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct qe_frame*) ;
 unsigned int FUNC_1 (struct qe_frame*) ;
 int FUNC_2 (int *,int ,unsigned int) ;
 int FUNC_3 (struct qe_udc*,int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct qe_udc *VAR_3)
{
 struct qe_ep *VAR_4 = &VAR_3->eps[0];
 struct qe_frame *VAR_5;
 unsigned int VAR_6;
 u8 *VAR_7;

 VAR_5 = VAR_4->rxframe;
 if ((FUNC_0(VAR_5) & VAR_1)
   && (VAR_3->ep0_state == VAR_2)) {
  VAR_6 = FUNC_1(VAR_5);
  if (FUNC_4(VAR_6 != 8))
   return -VAR_0;
  VAR_7 = (u8 *)&VAR_3->local_setup_buff;
  FUNC_2(VAR_7, VAR_5->data, VAR_6);
  VAR_4->data01 = 1;


  FUNC_3(VAR_3, &VAR_3->local_setup_buff);
  return 0;
 }
 return -VAR_0;
}
