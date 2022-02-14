
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parport_ip32_private {unsigned int fifo_depth; } ;
struct parport {TYPE_1__* cad; struct parport* physport; struct parport_ip32_private* private_data; } ;
struct TYPE_2__ {unsigned long timeout; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (struct parport*,unsigned long) ;
 unsigned int FUNC_1 (struct parport*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct parport *VAR_3)
{
 struct parport_ip32_private * const VAR_4 = VAR_3->physport->private_data;
 struct parport * const VAR_5 = VAR_3->physport;
 unsigned long VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;

 VAR_6 = VAR_2 + VAR_5->cad->timeout;
 VAR_7 = 0;
 while (1) {
  if (FUNC_0(VAR_3, VAR_6))
   break;





  VAR_8 = FUNC_1(VAR_3);
  if (VAR_8 & VAR_0) {

   VAR_7 = VAR_4->fifo_depth;
   break;
  }


  FUNC_2(VAR_1);
 }

 return VAR_7;
}
