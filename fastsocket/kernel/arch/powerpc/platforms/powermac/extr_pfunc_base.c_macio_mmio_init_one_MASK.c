
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct macio_chip {TYPE_1__* of_node; } ;
struct TYPE_2__ {int full_name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *,struct macio_chip*) ;

__attribute__((used)) static void FUNC_2(struct macio_chip *VAR_1)
{
 FUNC_0("Installing MMIO functions for macio %s\n",
     VAR_1->of_node->full_name);

 FUNC_1(VAR_1->of_node, &VAR_0, VAR_1);
}
