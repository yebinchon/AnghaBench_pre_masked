
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nozomi {TYPE_1__* pdev; } ;
typedef enum port_type { ____Placeholder_port_type } port_type ;
typedef enum ctrl_port_type { ____Placeholder_ctrl_port_type } ctrl_port_type ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (int *,char*) ;

__attribute__((used)) static enum ctrl_port_type FUNC_1(enum port_type VAR_5,
     const struct nozomi *VAR_6)
{
 switch (VAR_5) {
 case 128:
  return VAR_4;
 case 129:
  return VAR_2;
 case 131:
  return VAR_0;
 case 130:
  return VAR_1;
 default:
  FUNC_0(&VAR_6->pdev->dev,
   "ERROR: send flow control " "received for non-existing port\n");

 };
 return VAR_3;
}
