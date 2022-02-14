
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_driver {int num; int magic; int kref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct tty_driver* FUNC_1 (int,int ) ;

struct tty_driver *FUNC_2(int VAR_2)
{
 struct tty_driver *VAR_3;

 VAR_3 = FUNC_1(sizeof(struct tty_driver), VAR_0);
 if (VAR_3) {
  FUNC_0(&VAR_3->kref);
  VAR_3->magic = VAR_1;
  VAR_3->num = VAR_2;

 }
 return VAR_3;
}
