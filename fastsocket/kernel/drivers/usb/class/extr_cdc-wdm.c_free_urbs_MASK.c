
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wdm_device {int command; int response; int validity; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct wdm_device *VAR_0)
{
 FUNC_0(VAR_0->validity);
 FUNC_0(VAR_0->response);
 FUNC_0(VAR_0->command);
}
