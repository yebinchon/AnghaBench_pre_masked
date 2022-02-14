
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6_pod {int channel_num; int dumpreq; int line6; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(struct usb_line6_pod *VAR_0, int VAR_1)
{
 FUNC_1(&VAR_0->dumpreq);

 if (FUNC_2(&VAR_0->line6, VAR_1) == 0)
  VAR_0->channel_num = VAR_1;
 else
  FUNC_0(&VAR_0->dumpreq);
}
