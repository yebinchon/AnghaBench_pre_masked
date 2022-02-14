
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_attribute {int dummy; } ;
struct ib_port {int port_num; int ibdev; } ;
typedef int ssize_t ;




 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct ib_port *VAR_0, struct port_attribute *VAR_1,
          char *VAR_2)
{
 switch (FUNC_0(VAR_0->ibdev, VAR_0->port_num)) {
 case 128:
  return FUNC_1(VAR_2, "%s\n", "InfiniBand");
 case 129:
  return FUNC_1(VAR_2, "%s\n", "Ethernet");
 default:
  return FUNC_1(VAR_2, "%s\n", "Unknown");
 }
}
