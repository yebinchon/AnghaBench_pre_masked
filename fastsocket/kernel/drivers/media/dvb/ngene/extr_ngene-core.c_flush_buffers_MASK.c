
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ngene_channel {int state_lock; TYPE_3__* nextBuffer; } ;
struct TYPE_4__ {int Flags; } ;
struct TYPE_5__ {TYPE_1__ SR; } ;
struct TYPE_6__ {TYPE_2__ ngeneBuffer; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ngene_channel *VAR_0)
{
 u8 VAR_1;

 do {
  FUNC_0(1);
  FUNC_1(&VAR_0->state_lock);
  VAR_1 = VAR_0->nextBuffer->ngeneBuffer.SR.Flags & 0x80;
  FUNC_2(&VAR_0->state_lock);
 } while (VAR_1);
}
