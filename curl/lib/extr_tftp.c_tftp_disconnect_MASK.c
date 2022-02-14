
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int data; } ;
struct TYPE_7__ {int data; } ;
struct TYPE_9__ {TYPE_3__ spacket; TYPE_2__ rpacket; } ;
typedef TYPE_4__ tftp_state_data_t ;
struct TYPE_6__ {TYPE_4__* tftpc; } ;
struct connectdata {TYPE_1__ proto; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_1, bool VAR_2)
{
  tftp_state_data_t *VAR_3 = VAR_1->proto.tftpc;
  (void) VAR_2;


  if(VAR_3) {
    FUNC_0(VAR_3->rpacket.data);
    FUNC_0(VAR_3->spacket.data);
    FUNC_1(VAR_3);
  }

  return VAR_0;
}
