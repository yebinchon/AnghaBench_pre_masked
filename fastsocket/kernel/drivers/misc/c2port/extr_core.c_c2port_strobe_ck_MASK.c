
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c2port_ops {int (* c2ck_set ) (struct c2port_device*,int) ;} ;
struct c2port_device {struct c2port_ops* ops; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct c2port_device*,int) ;
 int FUNC_3 (struct c2port_device*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct c2port_device *VAR_0)
{
 struct c2port_ops *VAR_1 = VAR_0->ops;






 FUNC_0();
 VAR_1->c2ck_set(VAR_0, 0);
 FUNC_4(1);
 VAR_1->c2ck_set(VAR_0, 1);
 FUNC_1();

 FUNC_4(1);
}
