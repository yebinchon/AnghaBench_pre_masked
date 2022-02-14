
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct x25_asy {scalar_t__ magic; TYPE_2__* dev; struct tty_struct* tty; } ;
struct tty_struct {int receive_room; struct x25_asy* disc_data; TYPE_1__* ops; } ;
struct TYPE_4__ {int base_addr; int type; } ;
struct TYPE_3__ {int * write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 struct x25_asy* FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_5)
{
 struct x25_asy *VAR_6 = VAR_5->disc_data;
 int VAR_7;

 if (VAR_5->ops->write == ((void*)0))
  return -VAR_3;


 if (VAR_6 && VAR_6->magic == VAR_4)
  return -VAR_1;


 VAR_6 = FUNC_2();
 if (VAR_6 == ((void*)0))
  return -VAR_2;

 VAR_6->tty = VAR_5;
 VAR_5->disc_data = VAR_6;
 VAR_5->receive_room = 65536;
 FUNC_0(VAR_5);
 FUNC_1(VAR_5);


 VAR_6->dev->type = VAR_0;


 VAR_7 = FUNC_3(VAR_6->dev);
 if (VAR_7)
  return VAR_7;

 return VAR_6->dev->base_addr;
}
