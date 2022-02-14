
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iw_freq {int e; int m; } ;
union iwreq_data {struct iw_freq freq; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int status; int action_mutex; TYPE_1__* ieee; } ;
struct TYPE_2__ {scalar_t__ iw_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_1 (struct ipw2100_priv*,int,int ) ;
 struct ipw2100_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_6,
          struct iw_request_info *VAR_7,
          union iwreq_data *VAR_8, char *VAR_9)
{
 struct ipw2100_priv *VAR_10 = FUNC_2(VAR_6);
 struct iw_freq *VAR_11 = &VAR_8->freq;
 int VAR_12 = 0;

 if (VAR_10->ieee->iw_mode == VAR_2)
  return -VAR_1;

 FUNC_3(&VAR_10->action_mutex);
 if (!(VAR_10->status & VAR_4)) {
  VAR_12 = -VAR_0;
  goto done;
 }


 if (VAR_11->e == 1) {
  if ((VAR_11->m >= (int)2.412e8 && VAR_11->m <= (int)2.487e8)) {
   int VAR_13 = VAR_11->m / 100000;
   int VAR_14 = 0;

   while ((VAR_14 < VAR_3) &&
          (VAR_13 != VAR_5[VAR_14]))
    VAR_14++;


   VAR_11->e = 0;
   VAR_11->m = VAR_14 + 1;
  }
 }

 if (VAR_11->e > 0 || VAR_11->m > 1000) {
  VAR_12 = -VAR_1;
  goto done;
 } else {
  FUNC_0("SET Freq/Channel -> %d\n", VAR_11->m);
  VAR_12 = FUNC_1(VAR_10, VAR_11->m, 0);
 }

      done:
 FUNC_4(&VAR_10->action_mutex);
 return VAR_12;
}
