
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct TYPE_7__ {scalar_t__ CR2; int CR3; scalar_t__ CR4; int HIRQ; } ;
struct TYPE_8__ {TYPE_3__ reg; int status; scalar_t__ calcsize; TYPE_2__* partition; } ;
struct TYPE_6__ {scalar_t__ size; TYPE_1__** block; } ;
struct TYPE_5__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_0 (int ) ;

void FUNC_1(void) {
  u16 VAR_3;
  u32 VAR_4;
  u16 VAR_5;
  u16 VAR_6;

  VAR_5 = VAR_2->reg.CR2;
  VAR_4 = VAR_2->reg.CR3 >> 8;
  VAR_6 = VAR_2->reg.CR4;

  if (VAR_2->partition[VAR_4].size != 0)
  {
     VAR_2->calcsize = 0;

     for (VAR_3 = 0; VAR_3 < VAR_6; VAR_3++)
     {
        if (VAR_2->partition[VAR_4].block[VAR_5])
           VAR_2->calcsize += (VAR_2->partition[VAR_4].block[VAR_5]->size / 2);
     }
  }
  else
     VAR_2->calcsize = 0;

  FUNC_0(VAR_2->status);
  VAR_2->reg.HIRQ |= VAR_0 | VAR_1;
}
