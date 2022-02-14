
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rx_msdu_life_time; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;
struct wl1271 {TYPE_2__ conf; } ;
struct acx_rx_msdu_lifetime {int lifetime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct acx_rx_msdu_lifetime*) ;
 struct acx_rx_msdu_lifetime* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct acx_rx_msdu_lifetime*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_4)
{
 struct acx_rx_msdu_lifetime *VAR_5;
 int VAR_6;

 FUNC_4(VAR_0, "acx rx msdu life time");

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_3);
 if (!VAR_5) {
  VAR_6 = -VAR_2;
  goto out;
 }

 VAR_5->lifetime = FUNC_0(VAR_4->conf.rx.rx_msdu_life_time);
 VAR_6 = FUNC_3(VAR_4, VAR_1,
       VAR_5, sizeof(*VAR_5));
 if (VAR_6 < 0) {
  FUNC_5("failed to set rx msdu life time: %d", VAR_6);
  goto out;
 }

out:
 FUNC_1(VAR_5);
 return VAR_6;
}
