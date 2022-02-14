
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x25_asy {scalar_t__ magic; int * tty; TYPE_1__* dev; } ;
struct tty_struct {struct x25_asy* disc_data; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct x25_asy*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_2)
{
 struct x25_asy *VAR_3 = VAR_2->disc_data;


 if (!VAR_3 || VAR_3->magic != VAR_1)
  return;

 FUNC_1();
 if (VAR_3->dev->flags & VAR_0)
  FUNC_0(VAR_3->dev);
 FUNC_2();

 VAR_2->disc_data = ((void*)0);
 VAR_3->tty = ((void*)0);
 FUNC_3(VAR_3);
}
