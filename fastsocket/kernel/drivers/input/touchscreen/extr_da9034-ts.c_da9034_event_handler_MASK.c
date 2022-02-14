
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9034_touch {int state; int interval_ms; int tsi_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (struct da9034_touch*,int) ;
 int FUNC_1 (struct da9034_touch*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct da9034_touch*) ;
 int FUNC_5 (struct da9034_touch*) ;
 int FUNC_6 (struct da9034_touch*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct da9034_touch*) ;
 int FUNC_9 (struct da9034_touch*) ;

__attribute__((used)) static void FUNC_10(struct da9034_touch *VAR_4, int VAR_5)
{
 int VAR_6;

 switch (VAR_4->state) {
 case 130:
  if (VAR_5 != VAR_0)
   break;




  VAR_6 = FUNC_8(VAR_4);
  if (VAR_6)
   goto err_reset;

  VAR_4->state = 131;
  break;

 case 131:
  if (VAR_5 != VAR_3)
   break;

  VAR_6 = FUNC_4(VAR_4);
  if (VAR_6)
   goto err_reset;




  VAR_6 = FUNC_9(VAR_4);
  if (VAR_6)
   goto err_reset;

  VAR_4->state = 129;






  FUNC_2(1);
  FUNC_10(VAR_4,
         FUNC_1(VAR_4) ? VAR_0 :
         VAR_1);
  break;

 case 129:
  if (VAR_5 == VAR_0) {
   FUNC_5(VAR_4);
   FUNC_7(&VAR_4->tsi_work,
    FUNC_3(VAR_4->interval_ms));
   VAR_4->state = 128;
  }

  if (VAR_5 == VAR_1) {
   FUNC_6(VAR_4);
   VAR_4->state = 130;
  }
  break;

 case 128:
  if (VAR_5 != VAR_2)
   break;

  if (FUNC_1(VAR_4)) {
   FUNC_8(VAR_4);
   VAR_4->state = 131;
  } else {
   FUNC_6(VAR_4);
   VAR_4->state = 130;
  }
  break;
 }
 return;

err_reset:
 VAR_4->state = 130;
 FUNC_9(VAR_4);
 FUNC_0(VAR_4, 1);
}
