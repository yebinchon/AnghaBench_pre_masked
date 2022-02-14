
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct spi_eeprom {int flags; int byte_len; int page_size; int name; int context; int (* setup ) (TYPE_3__*,int ) ;} ;
struct TYPE_10__ {int kobj; struct spi_eeprom* platform_data; } ;
struct spi_device {TYPE_4__ dev; } ;
struct TYPE_7__ {char* name; int mode; } ;
struct TYPE_8__ {int size; TYPE_1__ attr; int write; int read; } ;
struct TYPE_9__ {int write; int read; } ;
struct at25_data {int addrlen; struct spi_eeprom chip; TYPE_2__ bin; TYPE_3__ mem; int spi; int lock; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (TYPE_4__*,char*,...) ;
 int FUNC_1 (TYPE_4__*,char*,int,char*,int ,char*,int ) ;
 int FUNC_2 (TYPE_4__*,struct at25_data*) ;
 int FUNC_3 (struct at25_data*) ;
 struct at25_data* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct spi_device*) ;
 int FUNC_7 (struct spi_device*,int ) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_10(struct spi_device *VAR_17)
{
 struct at25_data *VAR_18 = ((void*)0);
 const struct spi_eeprom *VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;


 VAR_19 = VAR_17->dev.platform_data;
 if (!VAR_19) {
  FUNC_0(&VAR_17->dev, "no chip description\n");
  VAR_20 = -VAR_7;
  goto fail;
 }


 if (VAR_19->flags & VAR_2)
  VAR_22 = 1;
 else if (VAR_19->flags & VAR_3)
  VAR_22 = 2;
 else if (VAR_19->flags & VAR_4)
  VAR_22 = 3;
 else {
  FUNC_0(&VAR_17->dev, "unsupported address type\n");
  VAR_20 = -VAR_6;
  goto fail;
 }





 VAR_21 = FUNC_7(VAR_17, VAR_0);
 if (VAR_21 < 0 || VAR_21 & VAR_1) {
  FUNC_0(&VAR_17->dev, "rdsr --> %d (%02x)\n", VAR_21, VAR_21);
  VAR_20 = -VAR_9;
  goto fail;
 }

 if (!(VAR_18 = FUNC_4(sizeof *VAR_18, VAR_10))) {
  VAR_20 = -VAR_8;
  goto fail;
 }

 FUNC_5(&VAR_18->lock);
 VAR_18->chip = *VAR_19;
 VAR_18->spi = FUNC_6(VAR_17);
 FUNC_2(&VAR_17->dev, VAR_18);
 VAR_18->addrlen = VAR_22;
 VAR_18->bin.attr.name = "eeprom";
 VAR_18->bin.attr.mode = VAR_11;
 VAR_18->bin.read = VAR_13;
 VAR_18->mem.read = VAR_15;

 VAR_18->bin.size = VAR_18->chip.byte_len;
 if (!(VAR_19->flags & VAR_5)) {
  VAR_18->bin.write = VAR_14;
  VAR_18->bin.attr.mode |= VAR_12;
  VAR_18->mem.write = VAR_16;
 }

 VAR_20 = FUNC_9(&VAR_17->dev.kobj, &VAR_18->bin);
 if (VAR_20)
  goto fail;

 if (VAR_19->setup)
  VAR_19->setup(&VAR_18->mem, VAR_19->context);

 FUNC_1(&VAR_17->dev, "%Zd %s %s eeprom%s, pagesize %u\n",
  (VAR_18->bin.size < 1024)
   ? VAR_18->bin.size
   : (VAR_18->bin.size / 1024),
  (VAR_18->bin.size < 1024) ? "Byte" : "KByte",
  VAR_18->chip.name,
  (VAR_19->flags & VAR_5) ? " (readonly)" : "",
  VAR_18->chip.page_size);
 return 0;
fail:
 FUNC_0(&VAR_17->dev, "probe err %d\n", VAR_20);
 FUNC_3(VAR_18);
 return VAR_20;
}
