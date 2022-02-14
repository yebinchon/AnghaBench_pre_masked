
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int interval; int actual_length; int transfer_buffer_length; } ;
struct c67x00_td {int privdata; int pipe; struct urb* urb; } ;
struct c67x00_hcd {int dummy; } ;
 int FUNC_0 (struct c67x00_hcd*,struct c67x00_td*) ;
 int FUNC_1 (struct c67x00_td*) ;
 int FUNC_2 (struct c67x00_hcd*,struct urb*,int ) ;
 scalar_t__ FUNC_3 (struct c67x00_td*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct c67x00_hcd *VAR_0,
     struct c67x00_td *VAR_1)
{
 struct urb *VAR_2 = VAR_1->urb;

 if (!VAR_2)
  return;

 VAR_2->actual_length += FUNC_3(VAR_1);

 switch (FUNC_5(VAR_1->pipe)) {

 case 131:
  switch (VAR_1->privdata) {
  case 129:
   VAR_2->interval =
       VAR_2->transfer_buffer_length ?
       133 : 128;

   VAR_2->actual_length = 0;
   break;

  case 133:
   if (FUNC_1(VAR_1)) {
    VAR_2->interval = 128;
    FUNC_0(VAR_0, VAR_1);
   }
   break;

  case 128:
   VAR_2->interval = 0;
   FUNC_2(VAR_0, VAR_2, 0);
   break;
  }
  break;

 case 130:
 case 132:
  if (FUNC_4(FUNC_1(VAR_1))) {
   FUNC_0(VAR_0, VAR_1);
   FUNC_2(VAR_0, VAR_2, 0);
  }
  break;
 }
}
