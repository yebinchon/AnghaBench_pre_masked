
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct netx_port {int port; } ;


 int VAR_0 ;
 struct netx_port* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct netx_port *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_1, ((void*)0));

 if (VAR_2)
  FUNC_2(&VAR_0, &VAR_2->port);

 return 0;
}
