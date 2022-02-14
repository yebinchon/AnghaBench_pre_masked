
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int dummy; } ;
struct acx_packet_detection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct acx_packet_detection*) ;
 struct acx_packet_detection* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct acx_packet_detection*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1251 *VAR_4)
{
 struct acx_packet_detection *VAR_5;
 int VAR_6;

 FUNC_3(VAR_1, "acx data pd threshold");

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_3);
 if (!VAR_5) {
  VAR_6 = -VAR_2;
  goto out;
 }



 VAR_6 = FUNC_2(VAR_4, VAR_0, VAR_5, sizeof(*VAR_5));
 if (VAR_6 < 0) {
  FUNC_4("failed to set pd threshold: %d", VAR_6);
  goto out;
 }

out:
 FUNC_0(VAR_5);
 return VAR_6;
}
