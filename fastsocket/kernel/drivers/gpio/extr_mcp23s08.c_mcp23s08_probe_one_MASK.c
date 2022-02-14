
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef int tx ;
struct spi_device {int dev; } ;
struct mcp23s08_driver_data {struct mcp23s08** mcp; } ;
struct TYPE_2__ {char* label; unsigned int base; int ngpio; int can_sleep; int owner; int * dev; int dbg_show; int set; int direction_output; int get; int direction_input; } ;
struct mcp23s08 {int addr; scalar_t__* cache; TYPE_1__ chip; struct spi_device* spi; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,unsigned int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct mcp23s08*,int ) ;
 int FUNC_3 (struct mcp23s08*,int ,scalar_t__*,int) ;
 int VAR_11 ;
 int FUNC_4 (struct mcp23s08*,int ,unsigned int) ;
 int FUNC_5 (unsigned int*,scalar_t__*,int) ;
 int FUNC_6 (int *) ;
 struct mcp23s08_driver_data* FUNC_7 (struct spi_device*) ;
 int FUNC_8 (struct spi_device*,unsigned int*,int,int *,int ) ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_12, unsigned VAR_13,
  unsigned VAR_14, unsigned VAR_15)
{
 struct mcp23s08_driver_data *VAR_16 = FUNC_7(VAR_12);
 struct mcp23s08 *VAR_17 = VAR_16->mcp[VAR_13];
 int VAR_18;
 int VAR_19 = 0;

 FUNC_6(&VAR_17->lock);

 VAR_17->spi = VAR_12;
 VAR_17->addr = 0x40 | (VAR_13 << 1);

 VAR_17->chip.label = "mcp23s08",

 VAR_17->chip.direction_input = VAR_8;
 VAR_17->chip.get = VAR_10;
 VAR_17->chip.direction_output = VAR_9;
 VAR_17->chip.set = VAR_11;
 VAR_17->chip.dbg_show = VAR_7;

 VAR_17->chip.base = VAR_14;
 VAR_17->chip.ngpio = 8;
 VAR_17->chip.can_sleep = 1;
 VAR_17->chip.dev = &VAR_12->dev;
 VAR_17->chip.owner = VAR_6;




 VAR_18 = FUNC_2(VAR_17, VAR_4);
 if (VAR_18 < 0)
  goto fail;
 if ((VAR_18 & VAR_1) || !(VAR_18 & VAR_0)) {
  VAR_18 &= ~VAR_1;
  VAR_18 |= VAR_0;
  VAR_18 = FUNC_4(VAR_17, VAR_4, (u8) VAR_18);
  if (VAR_18 < 0)
   goto fail;
 }


 VAR_18 = FUNC_4(VAR_17, VAR_3, VAR_15);
 if (VAR_18 < 0)
  goto fail;

 VAR_18 = FUNC_3(VAR_17, 0, VAR_17->cache, sizeof VAR_17->cache);
 if (VAR_18 < 0)
  goto fail;


 if (VAR_17->cache[VAR_5] != 0) {
  VAR_17->cache[VAR_5] = 0;
  VAR_19 = 1;
 }


 if (VAR_17->cache[VAR_2] != 0) {
  VAR_17->cache[VAR_2] = 0;
  VAR_19 = 1;
 }

 if (VAR_19) {
  u8 VAR_20[4];

  VAR_20[0] = VAR_17->addr;
  VAR_20[1] = VAR_5;
  FUNC_5(&VAR_20[2], &VAR_17->cache[VAR_5], sizeof(VAR_20) - 2);
  VAR_18 = FUNC_8(VAR_17->spi, VAR_20, sizeof VAR_20, ((void*)0), 0);
  if (VAR_18 < 0)
   goto fail;
 }

 VAR_18 = FUNC_1(&VAR_17->chip);
fail:
 if (VAR_18 < 0)
  FUNC_0(&VAR_12->dev, "can't setup chip %d, --> %d\n",
    VAR_13, VAR_18);
 return VAR_18;
}
