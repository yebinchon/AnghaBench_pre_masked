
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport_uss720_private {int* reg; } ;
struct parport {struct parport_uss720_private* private_data; } ;



__attribute__((used)) static unsigned char FUNC_0(struct parport *VAR_0)
{
 struct parport_uss720_private *VAR_1 = VAR_0->private_data;
 return VAR_1->reg[1] & 0xf;
}
