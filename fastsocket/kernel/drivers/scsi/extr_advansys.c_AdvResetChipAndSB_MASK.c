
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ushort ;
typedef int uchar ;
struct TYPE_6__ {scalar_t__ chip_type; scalar_t__ err_code; int iop_base; } ;
typedef int AdvPortAddr ;
typedef TYPE_1__ ADV_DVC_VAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,int) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(ADV_DVC_VAR *VAR_16)
{
 int VAR_17;
 ushort VAR_18, VAR_19, VAR_20;
 ushort VAR_21 = 0;
 uchar VAR_22, VAR_23[VAR_5 + 1];
 AdvPortAddr VAR_24;
 ushort VAR_25;

 VAR_24 = VAR_16->iop_base;




 FUNC_4(VAR_24, VAR_13, VAR_18);
 FUNC_4(VAR_24, VAR_11, VAR_19);
 if (VAR_16->chip_type == VAR_1) {
  FUNC_4(VAR_24, VAR_10, VAR_21);
 }
 FUNC_4(VAR_24, VAR_12, VAR_20);
 for (VAR_22 = 0; VAR_22 <= VAR_5; VAR_22++) {
  FUNC_3(VAR_24, VAR_9 + VAR_22,
    VAR_23[VAR_22]);
 }







 FUNC_4(VAR_24, VAR_8, VAR_25);
 FUNC_6(VAR_24, VAR_8, 0);




 FUNC_7(VAR_24, VAR_15, VAR_6);
 FUNC_7(VAR_24, VAR_14, VAR_2);
 FUNC_8(100);
 FUNC_7(VAR_24, VAR_14,
        VAR_3);





 VAR_16->err_code = 0;
 if (VAR_16->chip_type == VAR_1) {
  VAR_17 = FUNC_2(VAR_16);
 } else if (VAR_16->chip_type == VAR_0) {
  VAR_17 = FUNC_1(VAR_16);
 } else {
  VAR_17 = FUNC_0(VAR_16);
 }


 if (VAR_17 == 0) {
  VAR_17 = VAR_7;
 } else {
  VAR_17 = VAR_4;
 }




 FUNC_6(VAR_24, VAR_8, VAR_25);




 FUNC_6(VAR_24, VAR_13, VAR_18);
 FUNC_6(VAR_24, VAR_11, VAR_19);
 if (VAR_16->chip_type == VAR_1) {
  FUNC_6(VAR_24, VAR_10, VAR_21);
 }
 FUNC_6(VAR_24, VAR_12, VAR_20);
 for (VAR_22 = 0; VAR_22 <= VAR_5; VAR_22++) {
  FUNC_5(VAR_24, VAR_9 + VAR_22,
     VAR_23[VAR_22]);
 }

 return VAR_17;
}
