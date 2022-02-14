
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int ngpio; } ;
struct pca953x_chip {TYPE_2__* client; TYPE_1__ gpio_chip; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_3(struct pca953x_chip *VAR_0, int VAR_1, uint16_t *VAR_2)
{
 int VAR_3;

 if (VAR_0->gpio_chip.ngpio <= 8)
  VAR_3 = FUNC_1(VAR_0->client, VAR_1);
 else
  VAR_3 = FUNC_2(VAR_0->client, VAR_1 << 1);

 if (VAR_3 < 0) {
  FUNC_0(&VAR_0->client->dev, "failed reading register\n");
  return VAR_3;
 }

 *VAR_2 = (uint16_t)VAR_3;
 return 0;
}
