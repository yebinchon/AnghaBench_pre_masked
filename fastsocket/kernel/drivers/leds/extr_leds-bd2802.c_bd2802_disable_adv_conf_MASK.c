
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bd2802_led {scalar_t__ adf_on; TYPE_2__* pdata; TYPE_1__* client; } ;
struct TYPE_4__ {int reset_gpio; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (struct bd2802_led*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct bd2802_led *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  FUNC_2(&VAR_1->client->dev,
      VAR_0[VAR_2]);

 if (FUNC_1(VAR_1))
  FUNC_3(VAR_1->pdata->reset_gpio, 0);

 VAR_1->adf_on = 0;
}
