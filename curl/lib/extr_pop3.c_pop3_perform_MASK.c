
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* tcpconnect; } ;
struct connectdata {TYPE_4__* data; TYPE_2__ bits; } ;
struct POP3 {int transfer; } ;
struct TYPE_5__ {scalar_t__ opt_no_body; } ;
struct TYPE_7__ {struct POP3* protop; } ;
struct TYPE_8__ {TYPE_1__ set; TYPE_3__ req; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_2 (struct connectdata*,int*) ;
 scalar_t__ FUNC_3 (struct connectdata*) ;

__attribute__((used)) static CURLcode FUNC_4(struct connectdata *VAR_4, bool *VAR_5,
                             bool *VAR_6)
{

  CURLcode VAR_7 = VAR_0;
  struct POP3 *VAR_8 = VAR_4->data->req.protop;

  FUNC_0(FUNC_1(VAR_4->data, "DO phase starts\n"));

  if(VAR_4->data->set.opt_no_body) {

    VAR_8->transfer = VAR_3;
  }

  *VAR_6 = VAR_1;


  VAR_7 = FUNC_3(VAR_4);
  if(VAR_7)
    return VAR_7;


  VAR_7 = FUNC_2(VAR_4, VAR_6);

  *VAR_5 = VAR_4->bits.tcpconnect[VAR_2];

  if(*VAR_6)
    FUNC_0(FUNC_1(VAR_4->data, "DO phase is complete\n"));

  return VAR_7;
}
