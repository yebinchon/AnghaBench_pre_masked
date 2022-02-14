
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int dummy; } ;
struct TYPE_4__ {scalar_t__* scsi_status; TYPE_1__* srb; } ;
struct TYPE_3__ {unsigned int result; } ;


 int FUNC_0 () ;
 unsigned int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (struct urb*) ;

__attribute__((used)) static void FUNC_2( struct urb *VAR_2 )
{
 FUNC_0();

 VAR_1->srb->result &= VAR_0;
 VAR_1->srb->result |= (unsigned)(*VAR_1->scsi_status)<<1;

 FUNC_1(VAR_2);

 return;
}
