
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int hw; int * rx_descriptor; int * nvs; int * fw; int * data_path; int * target_mem_map; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wl1251*) ;

int FUNC_5(struct wl1251 *VAR_0)
{
 FUNC_1(VAR_0->hw);

 FUNC_4(VAR_0);

 FUNC_2(VAR_0->target_mem_map);
 FUNC_2(VAR_0->data_path);
 FUNC_3(VAR_0->fw);
 VAR_0->fw = ((void*)0);
 FUNC_2(VAR_0->nvs);
 VAR_0->nvs = ((void*)0);

 FUNC_2(VAR_0->rx_descriptor);
 VAR_0->rx_descriptor = ((void*)0);

 FUNC_0(VAR_0->hw);

 return 0;
}
