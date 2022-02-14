
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct r8a66597 {int max_root_hub; TYPE_1__* pdata; scalar_t__ irq_sense_low; } ;
struct TYPE_2__ {scalar_t__ endian; scalar_t__ vif; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct r8a66597*,int,int ) ;
 int FUNC_1 (struct r8a66597*) ;
 int FUNC_2 (struct r8a66597*,int) ;

__attribute__((used)) static int FUNC_3(struct r8a66597 *VAR_22)
{
 int VAR_23, VAR_24;
 u16 VAR_25 = VAR_22->pdata->vif ? VAR_13 : 0;
 u16 VAR_26 = VAR_22->irq_sense_low ? VAR_12 : 0;
 u16 VAR_27 = VAR_22->pdata->endian ? VAR_3 : 0;

 VAR_23 = FUNC_1(VAR_22);
 if (VAR_23 < 0)
  return VAR_23;

 FUNC_0(VAR_22, VAR_25 & VAR_13, VAR_15);
 FUNC_0(VAR_22, VAR_21, VAR_19);

 FUNC_0(VAR_22, VAR_1 | VAR_14 | VAR_5, VAR_10);
 FUNC_0(VAR_22, VAR_26 & VAR_12, VAR_18);
 FUNC_0(VAR_22, VAR_4, VAR_6);
 FUNC_0(VAR_22, VAR_0, VAR_2);

 FUNC_0(VAR_22, VAR_27 & VAR_3, VAR_7);
 FUNC_0(VAR_22, VAR_27 & VAR_3, VAR_8);
 FUNC_0(VAR_22, VAR_27 & VAR_3, VAR_9);
 FUNC_0(VAR_22, VAR_20, VAR_18);

 FUNC_0(VAR_22, VAR_17 | VAR_16, VAR_11);

 for (VAR_24 = 0; VAR_24 < VAR_22->max_root_hub; VAR_24++)
  FUNC_2(VAR_22, VAR_24);

 return 0;
}
