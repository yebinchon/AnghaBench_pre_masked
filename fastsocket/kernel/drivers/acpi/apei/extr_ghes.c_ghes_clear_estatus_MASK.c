
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ghes {int flags; int buffer_paddr; TYPE_1__* estatus; } ;
struct TYPE_2__ {scalar_t__ block_status; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct ghes *VAR_1)
{
 VAR_1->estatus->block_status = 0;
 if (!(VAR_1->flags & VAR_0))
  return;
 FUNC_0(VAR_1->estatus, VAR_1->buffer_paddr,
         sizeof(VAR_1->estatus->block_status), 0);
 VAR_1->flags &= ~VAR_0;
}
