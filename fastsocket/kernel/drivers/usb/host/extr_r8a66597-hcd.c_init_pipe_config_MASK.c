
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct r8a66597_device {int state; } ;
struct r8a66597 {int dummy; } ;


 int VAR_0 ;
 struct r8a66597_device* FUNC_0 (struct r8a66597*,struct urb*) ;

__attribute__((used)) static void FUNC_1(struct r8a66597 *VAR_1, struct urb *VAR_2)
{
 struct r8a66597_device *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 VAR_3->state = VAR_0;
}
