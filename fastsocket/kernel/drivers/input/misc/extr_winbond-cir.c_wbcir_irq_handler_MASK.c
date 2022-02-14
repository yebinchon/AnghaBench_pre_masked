
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wbcir_data {int irdata_error; scalar_t__ idle_count; int irdata_count; int * irdata; scalar_t__ sbase; } ;
struct device {int dummy; } ;
struct pnp_dev {struct device dev; } ;
typedef int irqreturn_t ;
typedef int irdata ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct wbcir_data*,int) ;
 int FUNC_1 (struct device*,char*,...) ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int*,int) ;
 int FUNC_5 (int ,scalar_t__) ;
 struct wbcir_data* FUNC_6 (struct pnp_dev*) ;
 int VAR_13 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int VAR_14 ;
 int FUNC_9 (struct device*,struct wbcir_data*) ;
 int FUNC_10 (struct device*,struct wbcir_data*) ;
 int FUNC_11 (struct device*,struct wbcir_data*) ;
 int FUNC_12 (struct wbcir_data*) ;
 int FUNC_13 (struct wbcir_data*,int ) ;

__attribute__((used)) static irqreturn_t
FUNC_14(int VAR_15, void *VAR_16)
{
 struct pnp_dev *VAR_17 = VAR_16;
 struct wbcir_data *VAR_18 = FUNC_6(VAR_17);
 struct device *VAR_19 = &VAR_17->dev;
 u8 VAR_20;
 unsigned long VAR_21;
 u8 VAR_22[8];
 int VAR_23;
 unsigned int VAR_24;

 FUNC_7(&VAR_14, VAR_21);

 FUNC_13(VAR_18, VAR_3);

 VAR_20 = FUNC_3(VAR_18->sbase + VAR_8);

 if (!(VAR_20 & (VAR_5 | VAR_4))) {
  FUNC_8(&VAR_14, VAR_21);
  return VAR_2;
 }

 if (VAR_20 & VAR_4)
  VAR_18->irdata_error = 1;

 if (!(VAR_20 & VAR_5))
  goto out;


 FUNC_4(VAR_18->sbase + VAR_10, &VAR_22[0], 8);

 for (VAR_23 = 0; VAR_23 < sizeof(VAR_22); VAR_23++) {
  VAR_24 = FUNC_2(VAR_22[VAR_23]);
  if (VAR_24 > 4)
   FUNC_0(VAR_18, 0);
  else
   FUNC_0(VAR_18, 1);

  if (VAR_24 == 8)
   VAR_18->idle_count++;
  else
   VAR_18->idle_count = 0;
 }

 if (VAR_18->idle_count > VAR_6) {

  FUNC_5(VAR_12, VAR_18->sbase + VAR_7);


  while (FUNC_3(VAR_18->sbase + VAR_9) & VAR_11)
   FUNC_3(VAR_18->sbase + VAR_10);

  FUNC_1(VAR_19, "IRDATA:\n");
  for (VAR_23 = 0; VAR_23 < VAR_18->irdata_count; VAR_23 += VAR_0)
   FUNC_1(VAR_19, "0x%08lX\n", VAR_18->irdata[VAR_23/VAR_0]);

  switch (VAR_13) {
  case 129:
   FUNC_10(VAR_19, VAR_18);
   break;
  case 128:
   FUNC_11(VAR_19, VAR_18);
   break;
  case 130:
   FUNC_9(VAR_19, VAR_18);
   break;
  }

  FUNC_12(VAR_18);
  VAR_18->idle_count = 0;
 }

out:
 FUNC_8(&VAR_14, VAR_21);
 return VAR_1;
}
