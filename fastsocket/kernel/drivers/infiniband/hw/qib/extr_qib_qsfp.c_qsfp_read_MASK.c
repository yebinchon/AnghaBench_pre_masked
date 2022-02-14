
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qib_pportdata {int port; scalar_t__ hw_pidx; struct qib_devdata* dd; } ;
struct qib_devdata {scalar_t__ twsi_eeprom_dev; int eep_lock; int (* f_gpio_mod ) (struct qib_devdata*,int,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qib_devdata*,char*) ;
 int FUNC_4 (struct qib_devdata*,int ,char*,...) ;
 int FUNC_5 (struct qib_devdata*,int ,int,int *,int) ;
 int FUNC_6 (struct qib_devdata*) ;
 int FUNC_7 (struct qib_devdata*,int,int,int) ;
 int FUNC_8 (struct qib_devdata*,int,int,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct qib_pportdata *VAR_10, int VAR_11, void *VAR_12, int VAR_13)
{
 struct qib_devdata *VAR_14 = VAR_10->dd;
 u32 VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19 = 0;
 int VAR_20 = 0;
 u8 *VAR_21 = VAR_12;

 VAR_17 = FUNC_1(&VAR_14->eep_lock);
 if (VAR_17)
  goto no_unlock;

 if (VAR_14->twsi_eeprom_dev == VAR_2) {
  VAR_17 = -VAR_1;
  goto bail;
 }
 VAR_16 = VAR_6 | VAR_5 | VAR_4;
 VAR_15 = VAR_5 | VAR_4;
 if (VAR_10->hw_pidx) {
  VAR_16 <<= VAR_7;
  VAR_15 <<= VAR_7;
 }

 VAR_14->f_gpio_mod(VAR_14, VAR_15, VAR_16, VAR_16);





 FUNC_0(2);


 VAR_17 = FUNC_6(VAR_14);
 if (VAR_17) {
  FUNC_4(VAR_14, VAR_10->port,
    "QSFP interface Reset for read failed\n");
  VAR_17 = -VAR_0;
  VAR_20 = 1;
  goto deselect;
 }



 VAR_18 = 0;
 while (VAR_18 < VAR_13) {
  unsigned VAR_22;
  int VAR_23 = VAR_13 - VAR_18;
  VAR_22 = VAR_11 % VAR_9;
  if ((VAR_22 + VAR_23) > VAR_9)
   VAR_23 = VAR_9 - VAR_22;
  VAR_17 = FUNC_5(VAR_14, VAR_3, VAR_11, VAR_21 + VAR_18, VAR_23);

  if (VAR_17 && VAR_18 == 0 && ++VAR_19 < VAR_8)
   continue;
  if (VAR_17) {

   VAR_17 = -VAR_0;
   goto deselect;
  }
  VAR_11 += VAR_23;
  VAR_18 += VAR_23;
 }
 VAR_17 = VAR_18;

deselect:





 FUNC_9(10);

 VAR_14->f_gpio_mod(VAR_14, VAR_16, VAR_16, VAR_16);






 if (VAR_20)
  FUNC_3(VAR_14, "QSFP interface bus stuck non-idle\n");

 if (VAR_19 >= VAR_8 && VAR_17)
  FUNC_4(VAR_14, VAR_10->port, "QSFP failed even retrying\n");
 else if (VAR_19)
  FUNC_4(VAR_14, VAR_10->port, "QSFP retries: %d\n", VAR_19);

 FUNC_0(2);

bail:
 FUNC_2(&VAR_14->eep_lock);

no_unlock:
 return VAR_17;
}
