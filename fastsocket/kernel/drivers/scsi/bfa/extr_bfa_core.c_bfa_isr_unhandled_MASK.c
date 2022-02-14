
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i2htok; } ;
struct TYPE_4__ {TYPE_1__ mtag; int msg_id; int msg_class; } ;
struct bfi_msg_s {TYPE_2__ mhdr; } ;
struct bfa_s {int trcmod; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_s*,int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct bfa_s *VAR_0, struct bfi_msg_s *VAR_1)
{
 FUNC_1(VAR_0, VAR_1->mhdr.msg_class);
 FUNC_1(VAR_0, VAR_1->mhdr.msg_id);
 FUNC_1(VAR_0, VAR_1->mhdr.mtag.i2htok);
 FUNC_0(1);
 FUNC_2(VAR_0->trcmod);
}
