
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* if_fake_ref ;
struct TYPE_5__ {scalar_t__ iff_retain_count; int iff_name; scalar_t__ iff_pending_tx_packet; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(if_fake_ref VAR_1)
{
 FUNC_1(VAR_1->iff_retain_count == 0);
 if (FUNC_2(VAR_1)) {
  if (VAR_1->iff_pending_tx_packet) {
   FUNC_4(VAR_1->iff_pending_tx_packet);
  }
 }

 FUNC_0("%s\n", VAR_1->iff_name);
 FUNC_3(&VAR_0, VAR_1);
}
