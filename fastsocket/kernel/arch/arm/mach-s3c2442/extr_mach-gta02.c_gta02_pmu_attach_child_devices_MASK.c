
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pcf50633 {int dev; } ;
struct TYPE_5__ {int parent; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;


 int FUNC_0 (TYPE_2__**) ;
 TYPE_2__** VAR_0 ;
 struct pcf50633* VAR_1 ;
 int FUNC_1 (TYPE_2__**,int) ;

__attribute__((used)) static void FUNC_2(struct pcf50633 *VAR_2)
{
 int VAR_3;


 VAR_1 = VAR_2;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  VAR_0[VAR_3]->dev.parent = VAR_2->dev;

 FUNC_1(VAR_0,
        FUNC_0(VAR_0));
}
