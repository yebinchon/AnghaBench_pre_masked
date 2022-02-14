
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amba_kmi_port {int io; } ;
struct amba_device {int dummy; } ;


 struct amba_kmi_port* FUNC_0 (struct amba_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct amba_device *VAR_0)
{
 struct amba_kmi_port *VAR_1 = FUNC_0(VAR_0);


 FUNC_1(VAR_1->io);

 return 0;
}
