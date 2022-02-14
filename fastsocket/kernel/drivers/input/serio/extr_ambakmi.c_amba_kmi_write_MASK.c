
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct amba_kmi_port* port_data; } ;
struct amba_kmi_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char,int ) ;

__attribute__((used)) static int FUNC_3(struct serio *VAR_4, unsigned char VAR_5)
{
 struct amba_kmi_port *VAR_6 = VAR_4->port_data;
 unsigned int VAR_7 = 10000;

 while ((FUNC_0(VAR_1) & VAR_2) == 0 && --VAR_7)
  FUNC_1(10);

 if (VAR_7)
  FUNC_2(VAR_5, VAR_0);

 return VAR_7 ? 0 : VAR_3;
}
