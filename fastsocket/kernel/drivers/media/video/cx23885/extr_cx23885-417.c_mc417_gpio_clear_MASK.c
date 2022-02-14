
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx23885_dev {int dummy; } ;


 int FUNC_0 (struct cx23885_dev*,int,int*) ;
 int FUNC_1 (struct cx23885_dev*,int,int) ;

void FUNC_2(struct cx23885_dev *VAR_0, u32 VAR_1)
{
 u32 VAR_2;


 FUNC_0(VAR_0, 0x900C, &VAR_2);
 VAR_2 &= ~(VAR_1 & 0x0000ffff);
 FUNC_1(VAR_0, 0x900C, VAR_2);
}
