
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; } ;
struct TYPE_4__ {TYPE_1__ ret_unlink; } ;
struct usbip_header {TYPE_2__ u; int base; } ;
struct stub_unlink {int status; int seqnum; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct usbip_header *VAR_1,
  struct stub_unlink *VAR_2)
{
 FUNC_0(&VAR_1->base, VAR_0, VAR_2->seqnum);

 VAR_1->u.ret_unlink.status = VAR_2->status;
}
