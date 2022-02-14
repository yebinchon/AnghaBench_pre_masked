
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {int firmware_type; } ;





 int FUNC_0 (struct orinoco_private*,int *,int ) ;
 int * VAR_0 ;
 int FUNC_1 (struct orinoco_private*,int *) ;

int FUNC_2(struct orinoco_private *VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_1->firmware_type) {
 case 130:

  VAR_2 = FUNC_0(VAR_1,
       &VAR_0[VAR_1->firmware_type], 0);
  break;

 case 128:
  VAR_2 = FUNC_1(VAR_1,
      &VAR_0[VAR_1->firmware_type]);
  break;
 case 129:
  break;
 }



 return VAR_2;
}
