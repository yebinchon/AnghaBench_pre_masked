
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tle62x0_state {unsigned char* tx_buff; unsigned int gpio_state; int nr_gpio; TYPE_1__* us; } ;
struct TYPE_2__ {int dev; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (int *,char*,unsigned char,unsigned char,unsigned char) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int) ;

__attribute__((used)) static inline int FUNC_2(struct tle62x0_state *VAR_1)
{
 unsigned char *VAR_2 = VAR_1->tx_buff;
 unsigned int VAR_3 = VAR_1->gpio_state;

 VAR_2[0] = VAR_0;

 if (VAR_1->nr_gpio == 16) {
  VAR_2[1] = VAR_3 >> 8;
  VAR_2[2] = VAR_3;
 } else {
  VAR_2[1] = VAR_3;
 }

 FUNC_0(&VAR_1->us->dev, "buff %02x,%02x,%02x\n",
  VAR_2[0], VAR_2[1], VAR_2[2]);

 return FUNC_1(VAR_1->us, VAR_2, (VAR_1->nr_gpio == 16) ? 3 : 2);
}
