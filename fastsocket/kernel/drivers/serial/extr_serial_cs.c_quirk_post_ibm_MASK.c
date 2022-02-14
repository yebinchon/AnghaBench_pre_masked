
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {int dummy; } ;
struct TYPE_3__ {int member_2; int Value; int Action; int member_3; int member_1; int member_0; } ;
typedef TYPE_1__ conf_reg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pcmcia_device*,int,int) ;
 int FUNC_1 (struct pcmcia_device*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_4)
{
 conf_reg_t VAR_5 = { 0, VAR_1, 0x800, 0 };
 int VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_4, &VAR_5);
 if (VAR_6) {
  VAR_7 = VAR_0;
  goto cs_failed;
 }
 VAR_5.Action = VAR_2;
 VAR_5.Value = VAR_5.Value | 1;
 VAR_6 = FUNC_1(VAR_4, &VAR_5);
 if (VAR_6) {
  VAR_7 = VAR_0;
  goto cs_failed;
 }
 return 0;

 cs_failed:
 FUNC_0(VAR_4, VAR_7, VAR_6);
 return -VAR_3;
}
