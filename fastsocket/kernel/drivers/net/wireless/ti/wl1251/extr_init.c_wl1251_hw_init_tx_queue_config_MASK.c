
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251_acx_mem_map {int num_tx_mem_blocks; } ;
struct wl1251 {struct wl1251_acx_mem_map* target_mem_map; } ;
struct acx_tx_queue_qos_config {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
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
 int VAR_21 ;
 int FUNC_0 (struct acx_tx_queue_qos_config*) ;
 struct acx_tx_queue_qos_config* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct wl1251*,int ,struct acx_tx_queue_qos_config*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int,struct acx_tx_queue_qos_config*,int ) ;

__attribute__((used)) static int FUNC_6(struct wl1251 *VAR_22)
{
 struct acx_tx_queue_qos_config *VAR_23;
 struct wl1251_acx_mem_map *VAR_24 = VAR_22->target_mem_map;
 int VAR_25, VAR_26;

 FUNC_4(VAR_14, "acx tx queue config");

 VAR_23 = FUNC_1(sizeof(*VAR_23), VAR_16);
 if (!VAR_23) {
  VAR_25 = -VAR_15;
  goto out;
 }

 for (VAR_26 = 0; VAR_26 < VAR_17; VAR_26++) {
  VAR_25 = FUNC_5(VAR_26, VAR_23,
           VAR_24->num_tx_mem_blocks);
  if (VAR_25 < 0)
   goto out;

  VAR_25 = FUNC_3(VAR_22, VAR_0,
        VAR_23, sizeof(*VAR_23));
  if (VAR_25 < 0)
   goto out;
 }

 FUNC_2(VAR_22, VAR_1, VAR_10, VAR_6, VAR_5, VAR_18);
 FUNC_2(VAR_22, VAR_2, VAR_11, VAR_7, VAR_5, VAR_19);
 FUNC_2(VAR_22, VAR_3, VAR_12, VAR_8, VAR_5, VAR_20);
 FUNC_2(VAR_22, VAR_4, VAR_13, VAR_9, VAR_5, VAR_21);

out:
 FUNC_0(VAR_23);
 return VAR_25;
}
