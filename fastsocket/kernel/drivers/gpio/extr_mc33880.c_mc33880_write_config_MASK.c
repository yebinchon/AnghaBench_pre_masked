
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc33880 {int port_config; int spi; } ;


 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct mc33880 *VAR_0)
{
 return FUNC_0(VAR_0->spi, &VAR_0->port_config, sizeof(VAR_0->port_config));
}
