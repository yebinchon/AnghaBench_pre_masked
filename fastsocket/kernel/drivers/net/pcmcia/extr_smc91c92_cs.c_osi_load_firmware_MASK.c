
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ BasePort1; } ;
struct pcmcia_device {TYPE_1__ io; int dev; } ;
struct firmware {int size; int * data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct firmware const*) ;
 int FUNC_3 (struct firmware const**,int ,int *) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct pcmcia_device *VAR_1)
{
 const struct firmware *VAR_2;
 int VAR_3, VAR_4;

 VAR_4 = FUNC_3(&VAR_2, VAR_0, &VAR_1->dev);
 if (VAR_4) {
  FUNC_1("Failed to load firmware \"%s\"\n", VAR_0);
  return VAR_4;
 }


 for (VAR_3 = 0; VAR_3 < VAR_2->size; VAR_3++) {
     FUNC_0(VAR_2->data[VAR_3], VAR_1->io.BasePort1 + 2);
     FUNC_4(50);
 }
 FUNC_2(VAR_2);
 return VAR_4;
}
