
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ctl_pin_status_mask; } ;
struct cx231xx {TYPE_1__ board; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx231xx*,int ,int *) ;
 int FUNC_1 (struct cx231xx*,int ,int ) ;

int FUNC_2(struct cx231xx *VAR_1)
{
 u32 VAR_2;
 int VAR_3 = 0;

 VAR_3 = FUNC_0(VAR_1, VAR_0, &VAR_2);
 VAR_2 |= (~VAR_1->board.ctl_pin_status_mask);
 VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2);

 return VAR_3;
}
