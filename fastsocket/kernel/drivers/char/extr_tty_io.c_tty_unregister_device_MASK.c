
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_driver {int minor_start; int major; } ;


 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int VAR_0 ;

void FUNC_2(struct tty_driver *VAR_1, unsigned VAR_2)
{
 FUNC_1(VAR_0,
  FUNC_0(VAR_1->major, VAR_1->minor_start) + VAR_2);
}
