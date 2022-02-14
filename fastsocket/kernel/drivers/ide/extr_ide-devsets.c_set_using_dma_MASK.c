
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* hwif; int id; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_6__ {int * dma_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(ide_drive_t *VAR_3, int VAR_4)
{
 if (VAR_4 < 0 || VAR_4 > 1)
  return -VAR_0;

 return -VAR_2;

}
