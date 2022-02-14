
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct superio_struct {int dma; } ;
struct parport {int dummy; } ;


 int VAR_0 ;
 struct superio_struct* FUNC_0 (struct parport*) ;

__attribute__((used)) static int FUNC_1(struct parport *VAR_1)
{
 struct superio_struct *VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2->dma;
 return VAR_0;
}
