
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int e; int m; } ;
union iwreq_data {TYPE_4__ freq; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {int config; int status; int channel; int mutex; TYPE_5__* ieee; } ;
struct TYPE_9__ {TYPE_2__* bg; TYPE_1__* a; } ;
struct TYPE_11__ {TYPE_3__ geo; } ;
struct TYPE_8__ {int freq; } ;
struct TYPE_7__ {int freq; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 struct ipw_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_3,
      struct iw_request_info *VAR_4,
      union iwreq_data *VAR_5, char *VAR_6)
{
 struct ipw_priv *VAR_7 = FUNC_5(VAR_3);

 VAR_5->freq.e = 0;



 FUNC_6(&VAR_7->mutex);
 if (VAR_7->config & VAR_0 ||
     VAR_7->status & (VAR_2 | VAR_1)) {
  int VAR_8;

  VAR_8 = FUNC_3(VAR_7->ieee, VAR_7->channel);
  FUNC_1(VAR_8 == -1);
  VAR_5->freq.e = 1;

  switch (FUNC_4(VAR_7->ieee, VAR_7->channel)) {
  case 128:
   VAR_5->freq.m = VAR_7->ieee->geo.a[VAR_8].freq * 100000;
   break;

  case 129:
   VAR_5->freq.m = VAR_7->ieee->geo.bg[VAR_8].freq * 100000;
   break;

  default:
   FUNC_0();
  }
 } else
  VAR_5->freq.m = 0;

 FUNC_7(&VAR_7->mutex);
 FUNC_2("GET Freq/Channel -> %d\n", VAR_7->channel);
 return 0;
}
