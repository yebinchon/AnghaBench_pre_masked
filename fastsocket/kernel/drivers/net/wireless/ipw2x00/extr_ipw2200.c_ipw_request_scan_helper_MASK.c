
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ipw_scan_request_ext {int* channels_list; int full_scan_index; void** dwell_time; } ;
struct ipw_priv {int status; scalar_t__ direct_scan_ssid_len; int config; int channel; scalar_t__ essid_len; int mutex; int scan_check; int essid; int direct_scan_ssid; TYPE_1__* ieee; } ;
typedef int scan ;
struct TYPE_3__ {scalar_t__ iw_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;


 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ipw_priv*,struct ipw_scan_request_ext*,int) ;
 int FUNC_5 (struct ipw_priv*) ;
 int FUNC_6 (struct ipw_priv*,struct ipw_scan_request_ext*) ;
 int FUNC_7 (struct ipw_priv*,int ,scalar_t__) ;
 int FUNC_8 (struct ipw_scan_request_ext*,int,size_t) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (struct ipw_scan_request_ext*,int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ) ;

__attribute__((used)) static int FUNC_16(struct ipw_priv *VAR_21, int VAR_22, int VAR_23)
{
 struct ipw_scan_request_ext VAR_24;
 int VAR_25 = 0, VAR_26;

 if (!(VAR_21->status & VAR_14) ||
     (VAR_21->status & VAR_13))
  return 0;

 FUNC_13(&VAR_21->mutex);

 if (VAR_23 && (VAR_21->direct_scan_ssid_len == 0)) {
  FUNC_0("Direct scan requested but no SSID to scan for\n");
  VAR_21->status &= ~VAR_12;
  goto done;
 }

 if (VAR_21->status & VAR_17) {
  FUNC_0("Concurrent scan requested.  Queuing.\n");
  VAR_21->status |= VAR_23 ? VAR_12 :
     VAR_20;
  goto done;
 }

 if (!(VAR_21->status & VAR_19) &&
     VAR_21->status & VAR_18) {
  FUNC_0("Scan request while abort pending.  Queuing.\n");
  VAR_21->status |= VAR_23 ? VAR_12 :
     VAR_20;
  goto done;
 }

 if (VAR_21->status & VAR_15) {
  FUNC_0("Queuing scan due to RF Kill activation\n");
  VAR_21->status |= VAR_23 ? VAR_12 :
     VAR_20;
  goto done;
 }

 FUNC_12(&VAR_24, 0, sizeof(VAR_24));
 VAR_24.full_scan_index = FUNC_3(FUNC_10(VAR_21->ieee));

 if (VAR_22 == VAR_10) {
  FUNC_1("use passive scanning\n");
  VAR_26 = VAR_8;
  VAR_24.dwell_time[VAR_8] =
   FUNC_2(FUNC_5(VAR_21));
  FUNC_4(VAR_21, &VAR_24, VAR_26);
  goto send_request;
 }


 if (VAR_21->config & VAR_0)
  VAR_24.dwell_time[VAR_5] =
   FUNC_2(30);
 else
  VAR_24.dwell_time[VAR_5] =
   FUNC_2(20);

 VAR_24.dwell_time[VAR_4] =
  FUNC_2(20);

 VAR_24.dwell_time[VAR_8] =
  FUNC_2(FUNC_5(VAR_21));
 VAR_24.dwell_time[VAR_6] = FUNC_2(20);
  if (VAR_23) {
   VAR_25 = FUNC_7(VAR_21, VAR_21->direct_scan_ssid,
                       VAR_21->direct_scan_ssid_len);
   if (VAR_25) {
    FUNC_0("Attempt to send SSID command  "
          "failed\n");
    goto done;
   }

   VAR_26 = VAR_4;
  } else if ((VAR_21->status & VAR_16)
      || (!(VAR_21->status & VAR_11)
          && (VAR_21->config & VAR_1)
          && (FUNC_9(VAR_24.full_scan_index) % 2))) {
   VAR_25 = FUNC_7(VAR_21, VAR_21->essid, VAR_21->essid_len);
   if (VAR_25) {
    FUNC_0("Attempt to send SSID command "
          "failed.\n");
    goto done;
   }

   VAR_26 = VAR_4;
  } else
   VAR_26 = VAR_5;

  FUNC_4(VAR_21, &VAR_24, VAR_26);




send_request:
 VAR_25 = FUNC_6(VAR_21, &VAR_24);
 if (VAR_25) {
  FUNC_0("Sending scan command failed: %08X\n", VAR_25);
  goto done;
 }

 VAR_21->status |= VAR_17;
 if (VAR_23) {
  VAR_21->status &= ~VAR_12;
  VAR_21->direct_scan_ssid_len = 0;
 } else
  VAR_21->status &= ~VAR_20;

 FUNC_15(&VAR_21->scan_check, VAR_7);
done:
 FUNC_14(&VAR_21->mutex);
 return VAR_25;
}
