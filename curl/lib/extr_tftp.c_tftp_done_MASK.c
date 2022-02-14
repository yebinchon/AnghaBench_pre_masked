
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int error; } ;
typedef TYPE_2__ tftp_state_data_t ;
struct TYPE_3__ {scalar_t__ tftpc; } ;
struct connectdata {TYPE_1__ proto; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct connectdata*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_2, CURLcode VAR_3,
                          bool VAR_4)
{
  CURLcode VAR_5 = VAR_1;
  tftp_state_data_t *VAR_6 = (tftp_state_data_t *)VAR_2->proto.tftpc;

  (void)VAR_3;
  (void)VAR_4;

  if(FUNC_0(VAR_2))
    return VAR_0;


  if(VAR_6)
    VAR_5 = FUNC_1(VAR_6->error);

  return VAR_5;
}
