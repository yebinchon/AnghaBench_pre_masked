
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pidff_device {int * reports; int hid; TYPE_1__* block_free; } ;
struct TYPE_2__ {int* value; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct pidff_device *VAR_3, int VAR_4)
{
 VAR_3->block_free[VAR_1].value[0] = VAR_4;
 FUNC_0(VAR_3->hid, VAR_3->reports[VAR_0],
     VAR_2);
}
