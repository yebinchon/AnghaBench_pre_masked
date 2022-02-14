
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ status; struct iforce* context; } ;
struct iforce {int wait; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct iforce*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_0)
{
 struct iforce *VAR_1 = VAR_0->context;

 if (VAR_0->status) {
  FUNC_0("urb->status %d, exiting", VAR_0->status);
  return;
 }

 FUNC_1(VAR_1);

 FUNC_2(&VAR_1->wait);
}
