
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int count1; int pp; } ;
struct TYPE_9__ {TYPE_2__ ftpc; } ;
struct TYPE_10__ {void* ftp_use_epsv; scalar_t__ socksproxy; scalar_t__ tunnel_proxy; scalar_t__ ipv6; } ;
struct connectdata {TYPE_3__ proto; TYPE_5__* data; TYPE_4__ bits; } ;
struct TYPE_7__ {void* errorbuf; } ;
struct TYPE_11__ {TYPE_1__ state; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (TYPE_5__*,char*) ;
 int FUNC_2 (TYPE_5__*,char*) ;
 int FUNC_3 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_4(struct connectdata *VAR_4)
{
  CURLcode VAR_5 = VAR_0;

  if(VAR_4->bits.ipv6 && !(VAR_4->bits.tunnel_proxy || VAR_4->bits.socksproxy)) {

    FUNC_1(VAR_4->data, "Failed EPSV attempt, exiting\n");
    return VAR_1;
  }

  FUNC_2(VAR_4->data, "Failed EPSV attempt. Disabling EPSV\n");

  VAR_4->bits.ftp_use_epsv = VAR_2;
  VAR_4->data->state.errorbuf = VAR_2;

  FUNC_0(&VAR_4->proto.ftpc.pp, "%s", "PASV");
  VAR_4->proto.ftpc.count1++;

  FUNC_3(VAR_4, VAR_3);
  return VAR_5;
}
