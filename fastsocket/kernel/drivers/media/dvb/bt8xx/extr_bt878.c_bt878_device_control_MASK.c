
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int value; } ;
struct TYPE_5__ {int highvals; int mask; } ;
struct TYPE_4__ {int enable; int mask; } ;
union dst_gpio_packet {int psize; TYPE_3__ rd; TYPE_2__ outp; TYPE_1__ enb; } ;
struct bt878 {int gpio_lock; int TS_Size; int bttv_nr; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct bt878 *VAR_2, unsigned int VAR_3, union dst_gpio_packet *VAR_4)
{
 int VAR_5;

 VAR_5 = 0;
 if (FUNC_3(&VAR_2->gpio_lock))
  return -VAR_1;

 switch (VAR_3) {
     case 131:

  VAR_5 = FUNC_0(VAR_2->bttv_nr,
    VAR_4->enb.mask,
    VAR_4->enb.enable);
  break;
     case 128:

  VAR_5 = FUNC_2(VAR_2->bttv_nr,
    VAR_4->outp.mask,
    VAR_4->outp.highvals);

  break;
     case 130:

  VAR_5 = FUNC_1(VAR_2->bttv_nr, &VAR_4->rd.value);

  break;
     case 129:

  VAR_2->TS_Size = VAR_4->psize;
  break;

     default:
  VAR_5 = -VAR_0;
  break;
 }
 FUNC_4(&VAR_2->gpio_lock);
 return VAR_5;
}
