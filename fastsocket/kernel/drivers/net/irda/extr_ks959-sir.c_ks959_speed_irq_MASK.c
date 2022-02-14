
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ status; } ;


 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct urb *VAR_0)
{

 if (VAR_0->status != 0) {
  FUNC_0("ks959_speed_irq: urb asynchronously failed - %d",
      VAR_0->status);
 }
}
