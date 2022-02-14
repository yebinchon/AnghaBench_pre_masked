
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct twl4030_gpio_platform_data {int mmc_cd; } ;
struct gpio_chip {TYPE_1__* dev; } ;
struct TYPE_2__ {struct twl4030_gpio_platform_data* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int) ;
 int VAR_15 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int*,int ) ;
 int FUNC_4 (int,int,int ) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_16, unsigned VAR_17)
{
 int VAR_18 = 0;

 FUNC_1(&VAR_14);


 if (VAR_17 >= VAR_6) {
  u8 VAR_19 = VAR_1 | VAR_0
    | VAR_2 | VAR_3;
  u8 VAR_20 = VAR_9;

  VAR_17 -= VAR_6;
  if (VAR_17) {
   VAR_19 <<= 1;
   VAR_20 = VAR_10;
  }


  VAR_18 = FUNC_4(VAR_20, 0x7f,
    VAR_11);
  if (VAR_18 < 0)
   goto done;
  VAR_18 = FUNC_4(VAR_20, 0x7f,
    VAR_12);
  if (VAR_18 < 0)
   goto done;


  VAR_20 = VAR_8;
  VAR_18 = FUNC_3(VAR_20, &VAR_13,
    VAR_7);
  if (VAR_18 < 0)
   goto done;
  VAR_13 &= ~VAR_19;
  VAR_18 = FUNC_4(VAR_20, VAR_13,
    VAR_7);
  if (VAR_18 < 0)
   goto done;

  VAR_18 = 0;
  goto done;
 }


 if (!VAR_15) {
  struct twl4030_gpio_platform_data *VAR_21;
  u8 VAR_22 = VAR_4;




  VAR_21 = VAR_16->dev->platform_data;
  VAR_22 |= VAR_21->mmc_cd & 0x03;

  VAR_18 = FUNC_0(VAR_5, VAR_22);
 }

 if (!VAR_18)
  VAR_15 |= (0x1 << VAR_17);

done:
 FUNC_2(&VAR_14);
 return VAR_18;
}
