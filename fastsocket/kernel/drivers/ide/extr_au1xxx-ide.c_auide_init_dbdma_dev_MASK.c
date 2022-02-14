
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_3__ {void* dev_flags; void* dev_devwidth; void* dev_tsize; scalar_t__ dev_intpolarity; scalar_t__ dev_intlevel; void* dev_physaddr; void* dev_id; } ;
typedef TYPE_1__ dbdev_tab_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(dbdev_tab_t *VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 VAR_1->dev_id = VAR_2;
 VAR_1->dev_physaddr = (u32)VAR_0;
 VAR_1->dev_intlevel = 0;
 VAR_1->dev_intpolarity = 0;
 VAR_1->dev_tsize = VAR_3;
 VAR_1->dev_devwidth = VAR_4;
 VAR_1->dev_flags = VAR_5;
}
