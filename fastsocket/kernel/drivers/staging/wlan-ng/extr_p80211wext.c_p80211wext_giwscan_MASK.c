
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int wlandevice_t ;
typedef int u8 ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; scalar_t__ flags; } ;
struct TYPE_9__ {scalar_t__ data; } ;
struct TYPE_8__ {int data; } ;
struct TYPE_10__ {TYPE_2__ resultcode; TYPE_1__ bssindex; int msgcode; } ;
typedef TYPE_3__ p80211msg_dot11req_scan_results_t ;
struct TYPE_11__ {int * ml_priv; } ;
typedef TYPE_4__ netdevice_t ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (scalar_t__) ;
 char* FUNC_3 (struct iw_request_info*,char*,char*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(netdevice_t *VAR_4,
         struct iw_request_info *VAR_5,
         struct iw_point *VAR_6, char *VAR_7)
{
 wlandevice_t *VAR_8 = VAR_4->ml_priv;
 p80211msg_dot11req_scan_results_t VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13 = 0;
 char *VAR_14 = VAR_7;





 do {
  FUNC_0(&VAR_9, 0, sizeof(VAR_9));
  VAR_9.msgcode = VAR_0;
  VAR_9.bssindex.data = VAR_12;

  VAR_10 = FUNC_1(VAR_8, (u8 *) & VAR_9);
  if ((VAR_10 != 0) ||
      (VAR_9.resultcode.data != VAR_3)) {
   break;
  }

  VAR_14 =
      FUNC_3(VAR_5, VAR_14,
           VAR_7 + VAR_2, &VAR_9);
  VAR_13 = 1;
  VAR_12++;
 } while (VAR_12 < VAR_1);

 VAR_6->length = (VAR_14 - VAR_7);
 VAR_6->flags = 0;

 if (VAR_10 && !VAR_13)
  VAR_11 = FUNC_2(VAR_9.resultcode.data);

 return VAR_11;
}
