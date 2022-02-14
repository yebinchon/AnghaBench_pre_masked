
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* cmdSyntaxPtr ;
struct TYPE_3__ {unsigned char* cmd; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static cmdSyntaxPtr
FUNC_0(int VAR_2, unsigned short VAR_3)
{
 cmdSyntaxPtr VAR_4;

 switch(VAR_2)
 {
 case 1:
  VAR_4 = (cmdSyntaxPtr) VAR_0;
  break;
 default:
 case 2:
  VAR_4 = (cmdSyntaxPtr) VAR_1;
  break;
 }
 VAR_4->cmd[1] = (unsigned char) VAR_3;
 VAR_4->cmd[2] = (unsigned char) (VAR_3 >> 8);
 return VAR_4;
}
