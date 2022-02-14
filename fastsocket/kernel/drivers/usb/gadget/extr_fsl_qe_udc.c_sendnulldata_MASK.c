
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
struct qe_udc {scalar_t__ nullbuf; } ;
struct qe_frame {int dummy; } ;
struct qe_ep {struct qe_udc* udc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qe_frame*,int *) ;
 int FUNC_1 (struct qe_frame*,int) ;
 int FUNC_2 (struct qe_frame*,int) ;
 int FUNC_3 (struct qe_frame*,int ) ;
 int FUNC_4 (struct qe_ep*,struct qe_frame*) ;
 int FUNC_5 (struct qe_frame*) ;

__attribute__((used)) static int FUNC_6(struct qe_ep *VAR_4, struct qe_frame *VAR_5, uint VAR_6)
{
 struct qe_udc *VAR_7 = VAR_4->udc;

 if (VAR_5 == ((void*)0))
  return -VAR_0;

 FUNC_5(VAR_5);
 FUNC_0(VAR_5, (u8 *)VAR_7->nullbuf);
 FUNC_2(VAR_5, 2);
 FUNC_3(VAR_5, VAR_1);
 FUNC_1(VAR_5, (VAR_3 | VAR_2 | VAR_6));

 return FUNC_4(VAR_4, VAR_5);
}
