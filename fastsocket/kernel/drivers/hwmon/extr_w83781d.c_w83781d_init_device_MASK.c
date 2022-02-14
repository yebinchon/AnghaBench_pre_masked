
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83781d_data {int type; int* sens; int* fan_min; int update_lock; int vrm; } ;
struct device {int dummy; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct w83781d_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_12 ;
 int FUNC_5 () ;
 int VAR_13 ;
 int FUNC_6 (struct w83781d_data*,int ) ;
 int FUNC_7 (struct w83781d_data*,int ,int) ;
 int VAR_14 ;

__attribute__((used)) static void
FUNC_8(struct device *VAR_15)
{
 struct w83781d_data *VAR_16 = FUNC_1(VAR_15);
 int VAR_17, VAR_18;
 int VAR_19 = VAR_16->type;
 u8 VAR_20;

 if (VAR_12 && VAR_19 != VAR_10) {







  FUNC_2(VAR_15, "If reset=1 solved a problem you were "
    "having, please report!\n");


  VAR_17 = FUNC_6(VAR_16, VAR_2);
  VAR_18 = FUNC_6(VAR_16, VAR_5);


  FUNC_7(VAR_16, VAR_4, 0x80);


  FUNC_7(VAR_16, VAR_2, VAR_17 | 0x80);
  FUNC_7(VAR_16, VAR_5, VAR_18);



  FUNC_7(VAR_16, VAR_3, 0);
 }



 if (VAR_11 && !VAR_12 && VAR_19 != VAR_10) {
  VAR_17 = FUNC_6(VAR_16, VAR_2);
  FUNC_7(VAR_16, VAR_2, VAR_17 | 0x80);
 }

 VAR_16->vrm = FUNC_5();

 if ((VAR_19 != VAR_13) && (VAR_19 != VAR_10)) {
  VAR_20 = FUNC_6(VAR_16, VAR_6);
  for (VAR_17 = 1; VAR_17 <= 3; VAR_17++) {
   if (!(VAR_20 & VAR_0[VAR_17 - 1])) {
    VAR_16->sens[VAR_17 - 1] = 4;
   } else {
    if (FUNC_6
        (VAR_16,
         VAR_7) & VAR_1[VAR_17 - 1])
     VAR_16->sens[VAR_17 - 1] = 1;
    else
     VAR_16->sens[VAR_17 - 1] = 2;
   }
   if (VAR_19 == VAR_14 && VAR_17 == 2)
    break;
  }
 }

 if (VAR_11 && VAR_19 != VAR_10) {

  VAR_20 = FUNC_6(VAR_16, VAR_8);
  if (VAR_20 & 0x01) {
   FUNC_3(VAR_15, "Enabling temp2, readings "
     "might not make sense\n");
   FUNC_7(VAR_16, VAR_8,
    VAR_20 & 0xfe);
  }


  if (VAR_19 != VAR_14) {
   VAR_20 = FUNC_6(VAR_16,
    VAR_9);
   if (VAR_20 & 0x01) {
    FUNC_3(VAR_15, "Enabling temp3, "
      "readings might not make sense\n");
    FUNC_7(VAR_16,
     VAR_9, VAR_20 & 0xfe);
   }
  }
 }


 FUNC_7(VAR_16, VAR_4,
       (FUNC_6(VAR_16,
      VAR_4) & 0xf7)
       | 0x01);


 for (VAR_17 = 0; VAR_17 < 3; VAR_17++) {
  VAR_16->fan_min[VAR_17] = FUNC_6(VAR_16,
     FUNC_0(VAR_17));
 }

 FUNC_4(&VAR_16->update_lock);
}
