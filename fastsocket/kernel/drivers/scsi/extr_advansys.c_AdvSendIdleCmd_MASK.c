
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ushort ;
struct TYPE_3__ {scalar_t__ chip_type; int iop_base; } ;
typedef int AdvPortAddr ;
typedef TYPE_1__ ADV_DVC_VAR ;
typedef scalar_t__ ADV_DCNT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 () ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(ADV_DVC_VAR *VAR_10,
        ushort VAR_11, ADV_DCNT VAR_12)
{
 int VAR_13;
 ADV_DCNT VAR_14, VAR_15;
 AdvPortAddr VAR_16;

 VAR_16 = VAR_10->iop_base;






 FUNC_3(VAR_16, VAR_6, (ushort)0);







 FUNC_2(VAR_16, VAR_5,
    FUNC_5(VAR_12));
 FUNC_3(VAR_16, VAR_4, VAR_11);




 FUNC_1(VAR_16, VAR_7, VAR_2);
 if (VAR_10->chip_type == VAR_0) {





  FUNC_1(VAR_16, VAR_7, VAR_3);
 }


 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {

  for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
   FUNC_0(VAR_16, VAR_6,
     VAR_13);
   if (VAR_13 != 0)
    return VAR_13;
   FUNC_6(1);
  }
 }

 FUNC_4();
 return VAR_1;
}
