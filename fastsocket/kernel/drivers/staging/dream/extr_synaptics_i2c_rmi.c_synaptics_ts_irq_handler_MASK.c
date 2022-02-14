
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct synaptics_ts_data {int work; TYPE_1__* client; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct synaptics_ts_data *VAR_4 = VAR_3;

 FUNC_0(VAR_4->client->irq);
 FUNC_1(VAR_1, &VAR_4->work);
 return VAR_0;
}
