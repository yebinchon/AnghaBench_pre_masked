
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_driver {int class; int detect; struct i2c_client_address_data* address_data; } ;
struct i2c_client_address_data {unsigned short** forces; unsigned short const* probe; unsigned short const* normal_i2c; unsigned short const* ignore; } ;
struct i2c_client {unsigned short addr; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int class; int dev; } ;


 unsigned short const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned short const VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int,unsigned short const,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (struct i2c_adapter*,int ) ;
 int FUNC_4 (struct i2c_client*,int,struct i2c_driver*) ;
 int FUNC_5 (struct i2c_client*) ;
 struct i2c_client* FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_6, struct i2c_driver *VAR_7)
{
 const struct i2c_client_address_data *VAR_8;
 struct i2c_client *VAR_9;
 int VAR_10, VAR_11 = 0;
 int VAR_12 = FUNC_2(VAR_6);

 VAR_8 = VAR_7->address_data;
 if (!VAR_7->detect || !VAR_8)
  return 0;


 VAR_9 = FUNC_6(sizeof(struct i2c_client), VAR_3);
 if (!VAR_9)
  return -VAR_1;
 VAR_9->adapter = VAR_6;



 if (VAR_8->forces) {
  const unsigned short * const *VAR_13 = VAR_8->forces;
  int VAR_14;

  for (VAR_14 = 0; VAR_13[VAR_14]; VAR_14++) {
   for (VAR_10 = 0; VAR_13[VAR_14][VAR_10] != VAR_4;
        VAR_10 += 2) {
    if (VAR_13[VAR_14][VAR_10] == VAR_12
     || VAR_13[VAR_14][VAR_10] == VAR_0) {
     FUNC_0(&VAR_6->dev, "found force "
      "parameter for adapter %d, "
      "addr 0x%02x, kind %d\n",
      VAR_12, VAR_13[VAR_14][VAR_10 + 1],
      VAR_14);
     VAR_9->addr = VAR_13[VAR_14][VAR_10 + 1];
     VAR_11 = FUNC_4(VAR_9,
      VAR_14, VAR_7);
     if (VAR_11)
      goto exit_free;
    }
   }
  }
 }


 if (!(VAR_6->class & VAR_7->class))
  goto exit_free;


 if (!FUNC_3(VAR_6, VAR_5)) {
  if (VAR_8->probe[0] == VAR_4
   && VAR_8->normal_i2c[0] == VAR_4)
   goto exit_free;

  FUNC_1(&VAR_6->dev, "SMBus Quick command not supported, "
    "can't probe for chips\n");
  VAR_11 = -VAR_2;
  goto exit_free;
 }



 for (VAR_10 = 0; VAR_8->probe[VAR_10] != VAR_4; VAR_10 += 2) {
  if (VAR_8->probe[VAR_10] == VAR_12
   || VAR_8->probe[VAR_10] == VAR_0) {
   FUNC_0(&VAR_6->dev, "found probe parameter for "
    "adapter %d, addr 0x%02x\n", VAR_12,
    VAR_8->probe[VAR_10 + 1]);
   VAR_9->addr = VAR_8->probe[VAR_10 + 1];
   VAR_11 = FUNC_4(VAR_9, -1, VAR_7);
   if (VAR_11)
    goto exit_free;
  }
 }


 for (VAR_10 = 0; VAR_8->normal_i2c[VAR_10] != VAR_4; VAR_10 += 1) {
  int VAR_15, VAR_16;

  VAR_16 = 0;
  for (VAR_15 = 0; VAR_8->ignore[VAR_15] != VAR_4;
       VAR_15 += 2) {
   if ((VAR_8->ignore[VAR_15] == VAR_12 ||
        VAR_8->ignore[VAR_15] == VAR_0)
    && VAR_8->ignore[VAR_15 + 1]
       == VAR_8->normal_i2c[VAR_10]) {
    FUNC_0(&VAR_6->dev, "found ignore "
     "parameter for adapter %d, "
     "addr 0x%02x\n", VAR_12,
     VAR_8->ignore[VAR_15 + 1]);
    VAR_16 = 1;
    break;
   }
  }
  if (VAR_16)
   continue;

  FUNC_0(&VAR_6->dev, "found normal entry for adapter %d, "
   "addr 0x%02x\n", VAR_12,
   VAR_8->normal_i2c[VAR_10]);
  VAR_9->addr = VAR_8->normal_i2c[VAR_10];
  VAR_11 = FUNC_4(VAR_9, -1, VAR_7);
  if (VAR_11)
   goto exit_free;
 }

 exit_free:
 FUNC_5(VAR_9);
 return VAR_11;
}
