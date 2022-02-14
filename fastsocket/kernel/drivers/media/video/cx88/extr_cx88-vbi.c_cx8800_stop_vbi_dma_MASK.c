
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx88_core {int dummy; } ;
struct cx8800_dev {struct cx88_core* core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;

int FUNC_1(struct cx8800_dev *VAR_5)
{
 struct cx88_core *VAR_6 = VAR_5->core;


 FUNC_0(VAR_1, 0x88);


 FUNC_0(VAR_4,0x18);


 FUNC_0(VAR_0, VAR_3);
 FUNC_0(VAR_2, 0x0f0088);
 return 0;
}
