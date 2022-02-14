
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_device {struct fw_device* config_rom; TYPE_1__* node; struct fw_card* card; } ;
struct fw_card {int lock; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int * data; } ;


 int FUNC_0 (struct fw_card*) ;
 struct fw_device* FUNC_1 (struct device*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct fw_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_0)
{
 struct fw_device *VAR_1 = FUNC_1(VAR_0);
 struct fw_card *VAR_2 = VAR_1->card;
 unsigned long VAR_3;






 FUNC_4(&VAR_2->lock, VAR_3);
 VAR_1->node->data = ((void*)0);
 FUNC_5(&VAR_2->lock, VAR_3);

 FUNC_2(VAR_1->node);
 FUNC_3(VAR_1->config_rom);
 FUNC_3(VAR_1);
 FUNC_0(VAR_2);
}
