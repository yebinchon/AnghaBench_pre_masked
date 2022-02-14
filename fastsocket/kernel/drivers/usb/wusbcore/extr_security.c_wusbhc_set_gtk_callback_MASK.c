
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int gtk_rekey_done_work; } ;
struct urb {struct wusbhc* context; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct urb *VAR_1)
{
 struct wusbhc *VAR_2 = VAR_1->context;

 FUNC_0(VAR_0, &VAR_2->gtk_rekey_done_work);
}
