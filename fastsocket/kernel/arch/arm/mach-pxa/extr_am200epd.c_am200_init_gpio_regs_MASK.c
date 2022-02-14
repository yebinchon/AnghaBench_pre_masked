
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct metronomefb_par {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int * VAR_7 ;
 int FUNC_5 (int ,int ) ;
 int * VAR_8 ;

__attribute__((used)) static int FUNC_6(struct metronomefb_par *VAR_9)
{
 int VAR_10;
 int VAR_11;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_8); VAR_10++) {
  VAR_11 = FUNC_5(VAR_8[VAR_10], VAR_7[VAR_10]);
  if (VAR_11) {
   FUNC_1(&VAR_6->dev, "failed requesting "
    "gpio %s, err=%d\n", VAR_7[VAR_10], VAR_11);
   goto err_req_gpio;
  }
 }

 FUNC_3(VAR_1, 0);
 FUNC_3(VAR_5, 0);
 FUNC_3(VAR_4, 0);

 FUNC_2(VAR_3);
 FUNC_2(VAR_0);

 FUNC_3(VAR_2, 0);

 return 0;

err_req_gpio:
 while (VAR_10 > 0)
  FUNC_4(VAR_8[VAR_10--]);

 return VAR_11;
}
