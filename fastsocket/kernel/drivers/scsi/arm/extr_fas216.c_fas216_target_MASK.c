
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* SCpnt; } ;
struct TYPE_6__ {TYPE_1__* device; } ;
struct TYPE_5__ {char id; } ;
typedef TYPE_3__ FAS216_Info ;



__attribute__((used)) static char FUNC_0(FAS216_Info *VAR_0)
{
 if (VAR_0->SCpnt)
  return '0' + VAR_0->SCpnt->device->id;
 else
  return 'H';
}
