
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmidi_device {scalar_t__ config; int out_ep; int in_ep; } ;


 int FUNC_0 (struct gmidi_device*,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct gmidi_device *VAR_0)
{
 if (VAR_0->config == 0) {
  return;
 }

 FUNC_0(VAR_0, "reset config\n");




 FUNC_1(VAR_0->in_ep);
 FUNC_1(VAR_0->out_ep);
 VAR_0->config = 0;
}
