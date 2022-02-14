
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_65xx_board {int num_dio_ports; int num_di_ports; int num_do_ports; } ;



__attribute__((used)) static inline unsigned FUNC_0(const struct ni_65xx_board
            *VAR_0)
{
 return VAR_0->num_dio_ports + VAR_0->num_di_ports + VAR_0->num_do_ports;
}
