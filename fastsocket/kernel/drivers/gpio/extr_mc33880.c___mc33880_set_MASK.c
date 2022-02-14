
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc33880 {int port_config; } ;


 int FUNC_0 (struct mc33880*) ;

__attribute__((used)) static int FUNC_1(struct mc33880 *VAR_0, unsigned VAR_1, int VAR_2)
{
 if (VAR_2)
  VAR_0->port_config |= 1 << VAR_1;
 else
  VAR_0->port_config &= ~(1 << VAR_1);

 return FUNC_0(VAR_0);
}
