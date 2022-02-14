
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_3__ {int* dw_MolduleConfiguration; int b_BoardVersion; scalar_t__ ui_Address; } ;
struct TYPE_4__ {TYPE_1__ s_BoardInfos; } ;


 TYPE_2__* VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

int FUNC_2(struct comedi_device *VAR_1)
{
 int VAR_2;
 unsigned int VAR_3;




 VAR_2 = FUNC_0(VAR_0->s_BoardInfos.ui_Address + 60);
 VAR_0->s_BoardInfos.dw_MolduleConfiguration[0] = VAR_2;

 VAR_2 = FUNC_0(VAR_0->s_BoardInfos.ui_Address + 124);
 VAR_0->s_BoardInfos.dw_MolduleConfiguration[1] = VAR_2;

 VAR_2 = FUNC_0(VAR_0->s_BoardInfos.ui_Address + 188);
 VAR_0->s_BoardInfos.dw_MolduleConfiguration[2] = VAR_2;

 VAR_2 = FUNC_0(VAR_0->s_BoardInfos.ui_Address + 252);
 VAR_0->s_BoardInfos.dw_MolduleConfiguration[3] = VAR_2;


 FUNC_1(0x83838383, VAR_0->s_BoardInfos.ui_Address + 0x60);

 VAR_0->s_BoardInfos.b_BoardVersion = 1;


 VAR_3 = FUNC_0(VAR_0->s_BoardInfos.ui_Address + 0x38);
 FUNC_1(VAR_3 | 0x2000, VAR_0->s_BoardInfos.ui_Address + 0x38);

 return 0;
}
