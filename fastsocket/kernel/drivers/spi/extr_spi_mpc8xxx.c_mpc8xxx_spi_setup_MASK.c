
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_mpc8xxx_cs {int hw_mode; } ;
struct spi_device {int mode; int master; struct spi_mpc8xxx_cs* controller_state; int max_speed_hz; } ;
struct mpc8xxx_spi {TYPE_1__* base; } ;
struct TYPE_2__ {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct spi_mpc8xxx_cs* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct spi_device*,int *) ;
 struct mpc8xxx_spi* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_11)
{
 struct mpc8xxx_spi *VAR_12;
 int VAR_13;
 u32 VAR_14;
 struct spi_mpc8xxx_cs *VAR_15 = VAR_11->controller_state;

 if (!VAR_11->max_speed_hz)
  return -VAR_0;

 if (!VAR_15) {
  VAR_15 = FUNC_0(sizeof *VAR_15, VAR_2);
  if (!VAR_15)
   return -VAR_1;
  VAR_11->controller_state = VAR_15;
 }
 VAR_12 = FUNC_3(VAR_11->master);

 VAR_14 = VAR_15->hw_mode;
 VAR_15->hw_mode = FUNC_1(&VAR_12->base->mode);

 VAR_15->hw_mode &= ~(VAR_8 | VAR_7
    | VAR_10 | VAR_9);

 if (VAR_11->mode & VAR_3)
  VAR_15->hw_mode |= VAR_8;
 if (VAR_11->mode & VAR_4)
  VAR_15->hw_mode |= VAR_7;
 if (!(VAR_11->mode & VAR_6))
  VAR_15->hw_mode |= VAR_10;
 if (VAR_11->mode & VAR_5)
  VAR_15->hw_mode |= VAR_9;

 VAR_13 = FUNC_2(VAR_11, ((void*)0));
 if (VAR_13 < 0) {
  VAR_15->hw_mode = VAR_14;
  return VAR_13;
 }
 return 0;
}
