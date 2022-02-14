
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct i2c_device_id {int driver_data; } ;
struct TYPE_11__ {int kobj; scalar_t__ platform_data; } ;
struct i2c_client {TYPE_4__ dev; int name; scalar_t__ addr; int adapter; } ;
struct at24_platform_data {int byte_len; int flags; int page_size; int * context; int (* setup ) (TYPE_3__*,int *) ;} ;
struct TYPE_10__ {int write; int read; } ;
struct TYPE_8__ {char* name; int mode; } ;
struct TYPE_9__ {int size; TYPE_1__ attr; int write; int read; } ;
struct at24_data {int use_smbus; unsigned int num_addresses; unsigned int write_max; struct at24_data* writebuf; struct i2c_client** client; TYPE_3__ macc; TYPE_2__ bin; struct at24_platform_data chip; int lock; } ;
typedef int kernel_ulong_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (TYPE_4__*,char*,int,...) ;
 int FUNC_4 (TYPE_4__*,char*,scalar_t__) ;
 int FUNC_5 (TYPE_4__*,char*,int,int ,char*) ;
 int FUNC_6 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 struct i2c_client* FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (struct i2c_client*,struct at24_data*) ;
 int FUNC_10 (struct i2c_client*) ;
 unsigned int VAR_22 ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct at24_data*) ;
 struct at24_data* FUNC_13 (unsigned int,int ) ;
 struct at24_data* FUNC_14 (int,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_3__*,int *) ;
 int FUNC_17 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_18(struct i2c_client *VAR_23, const struct i2c_device_id *VAR_24)
{
 struct at24_platform_data VAR_25;
 bool VAR_26;
 bool VAR_27 = 0;
 struct at24_data *VAR_28;
 int VAR_29;
 unsigned VAR_30, VAR_31;
 kernel_ulong_t VAR_32;

 if (VAR_23->dev.platform_data) {
  VAR_25 = *(struct at24_platform_data *)VAR_23->dev.platform_data;
 } else {
  if (!VAR_24->driver_data) {
   VAR_29 = -VAR_7;
   goto err_out;
  }
  VAR_32 = VAR_24->driver_data;
  VAR_25.byte_len = FUNC_1(VAR_32 & FUNC_0(VAR_4));
  VAR_32 >>= VAR_4;
  VAR_25.flags = VAR_32 & FUNC_0(VAR_5);





  VAR_25.page_size = 1;

  VAR_25.setup = ((void*)0);
  VAR_25.context = ((void*)0);
 }

 if (!FUNC_11(VAR_25.byte_len))
  FUNC_6(&VAR_23->dev,
   "byte_len looks suspicious (no power of 2)!\n");
 if (!FUNC_11(VAR_25.page_size))
  FUNC_6(&VAR_23->dev,
   "page_size looks suspicious (no power of 2)!\n");


 if (!FUNC_7(VAR_23->adapter, VAR_11)) {
  if (VAR_25.flags & VAR_0) {
   VAR_29 = -VAR_9;
   goto err_out;
  }
  if (!FUNC_7(VAR_23->adapter,
    VAR_12)) {
   VAR_29 = -VAR_9;
   goto err_out;
  }
  VAR_27 = 1;
 }

 if (VAR_25.flags & VAR_3)
  VAR_31 = 8;
 else
  VAR_31 = FUNC_2(VAR_25.byte_len,
   (VAR_25.flags & VAR_0) ? 65536 : 256);

 VAR_28 = FUNC_14(sizeof(struct at24_data) +
  VAR_31 * sizeof(struct i2c_client *), VAR_10);
 if (!VAR_28) {
  VAR_29 = -VAR_8;
  goto err_out;
 }

 FUNC_15(&VAR_28->lock);
 VAR_28->use_smbus = VAR_27;
 VAR_28->chip = VAR_25;
 VAR_28->num_addresses = VAR_31;





 VAR_28->bin.attr.name = "eeprom";
 VAR_28->bin.attr.mode = VAR_25.flags & VAR_1 ? VAR_15 : VAR_16;
 VAR_28->bin.read = VAR_18;
 VAR_28->bin.size = VAR_25.byte_len;

 VAR_28->macc.read = VAR_20;

 VAR_26 = !(VAR_25.flags & VAR_2);
 if (VAR_26) {
  if (!VAR_27 || FUNC_7(VAR_23->adapter,
    VAR_13)) {

   unsigned VAR_33 = VAR_25.page_size;

   VAR_28->macc.write = VAR_21;

   VAR_28->bin.write = VAR_19;
   VAR_28->bin.attr.mode |= VAR_17;

   if (VAR_33 > VAR_22)
    VAR_33 = VAR_22;
   if (VAR_27 && VAR_33 > VAR_14)
    VAR_33 = VAR_14;
   VAR_28->write_max = VAR_33;


   VAR_28->writebuf = FUNC_13(VAR_33 + 2, VAR_10);
   if (!VAR_28->writebuf) {
    VAR_29 = -VAR_8;
    goto err_struct;
   }
  } else {
   FUNC_6(&VAR_23->dev,
    "cannot write due to controller restrictions.");
  }
 }

 VAR_28->client[0] = VAR_23;


 for (VAR_30 = 1; VAR_30 < VAR_31; VAR_30++) {
  VAR_28->client[VAR_30] = FUNC_8(VAR_23->adapter,
     VAR_23->addr + VAR_30);
  if (!VAR_28->client[VAR_30]) {
   FUNC_4(&VAR_23->dev, "address 0x%02x unavailable\n",
     VAR_23->addr + VAR_30);
   VAR_29 = -VAR_6;
   goto err_clients;
  }
 }

 VAR_29 = FUNC_17(&VAR_23->dev.kobj, &VAR_28->bin);
 if (VAR_29)
  goto err_clients;

 FUNC_9(VAR_23, VAR_28);

 FUNC_5(&VAR_23->dev, "%zu byte %s EEPROM %s\n",
  VAR_28->bin.size, VAR_23->name,
  VAR_26 ? "(writable)" : "(read-only)");
 FUNC_3(&VAR_23->dev,
  "page_size %d, num_addresses %d, write_max %d%s\n",
  VAR_25.page_size, VAR_31,
  VAR_28->write_max,
  VAR_27 ? ", use_smbus" : "");


 if (VAR_25.setup)
  VAR_25.setup(&VAR_28->macc, VAR_25.context);

 return 0;

err_clients:
 for (VAR_30 = 1; VAR_30 < VAR_31; VAR_30++)
  if (VAR_28->client[VAR_30])
   FUNC_10(VAR_28->client[VAR_30]);

 FUNC_12(VAR_28->writebuf);
err_struct:
 FUNC_12(VAR_28);
err_out:
 FUNC_3(&VAR_23->dev, "probe error %d\n", VAR_29);
 return VAR_29;
}
