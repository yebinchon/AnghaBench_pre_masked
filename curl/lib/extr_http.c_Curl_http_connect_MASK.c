
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ proxy_connect_closed; } ;
struct connectdata {TYPE_4__* given; TYPE_3__* data; TYPE_1__ bits; } ;
struct TYPE_8__ {int protocol; } ;
struct TYPE_6__ {scalar_t__ haproxyprotocol; } ;
struct TYPE_7__ {TYPE_2__ set; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct connectdata*) ;
 scalar_t__ FUNC_2 (struct connectdata*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct connectdata*) ;
 int FUNC_4 (struct connectdata*,char*) ;
 scalar_t__ FUNC_5 (struct connectdata*,int*) ;

CURLcode FUNC_6(struct connectdata *VAR_4, bool *VAR_5)
{
  CURLcode VAR_6;



  FUNC_4(VAR_4, "HTTP default");


  VAR_6 = FUNC_2(VAR_4, VAR_2);
  if(VAR_6)
    return VAR_6;

  if(VAR_4->bits.proxy_connect_closed)

    return VAR_0;

  if(FUNC_0())
    return VAR_0;

  if(FUNC_1(VAR_4))

    return VAR_0;


  if(VAR_4->data->set.haproxyprotocol) {

    VAR_6 = FUNC_3(VAR_4);
    if(VAR_6)
      return VAR_6;
  }


  if(VAR_4->given->protocol & VAR_1) {

    VAR_6 = FUNC_5(VAR_4, VAR_5);
    if(VAR_6)
      return VAR_6;
  }
  else
    *VAR_5 = VAR_3;

  return VAR_0;
}
