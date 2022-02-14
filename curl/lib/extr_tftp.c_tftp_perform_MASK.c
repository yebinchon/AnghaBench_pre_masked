
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; } ;
typedef TYPE_2__ tftp_state_data_t ;
struct TYPE_4__ {scalar_t__ tftpc; } ;
struct connectdata {int data; TYPE_1__ proto; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct connectdata*,int*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static CURLcode FUNC_4(struct connectdata *VAR_4, bool *VAR_5)
{
  CURLcode VAR_6 = VAR_0;
  tftp_state_data_t *VAR_7 = (tftp_state_data_t *)VAR_4->proto.tftpc;

  *VAR_5 = VAR_1;

  VAR_6 = FUNC_3(VAR_7, VAR_2);

  if((VAR_7->state == VAR_3) || VAR_6)
    return VAR_6;

  FUNC_2(VAR_4, VAR_5);

  if(*VAR_5)
    FUNC_0(FUNC_1(VAR_4->data, "DO phase is complete\n"));

  return VAR_6;
}
