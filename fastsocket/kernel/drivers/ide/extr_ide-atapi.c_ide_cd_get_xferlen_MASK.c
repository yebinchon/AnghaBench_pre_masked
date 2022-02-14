
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int cmd_type; } ;






 int FUNC_0 (struct request*) ;

int FUNC_1(struct request *VAR_0)
{
 switch (VAR_0->cmd_type) {
 case 129:
  return 32768;
 case 128:
 case 130:
 case 131:
  return FUNC_0(VAR_0);
 default:
  return 0;
 }
}
