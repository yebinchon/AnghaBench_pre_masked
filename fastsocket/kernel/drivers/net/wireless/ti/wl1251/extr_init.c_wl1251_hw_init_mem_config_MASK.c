
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251_acx_mem_map {int dummy; } ;
struct wl1251 {int * target_mem_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*) ;
 int FUNC_3 (struct wl1251*,int *,int) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct wl1251 *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2->target_mem_map = FUNC_1(sizeof(struct wl1251_acx_mem_map),
       VAR_1);
 if (!VAR_2->target_mem_map) {
  FUNC_4("couldn't allocate target memory map");
  return -VAR_0;
 }


 VAR_3 = FUNC_3(VAR_2, VAR_2->target_mem_map,
     sizeof(struct wl1251_acx_mem_map));
 if (VAR_3 < 0) {
  FUNC_4("couldn't retrieve firmware memory map");
  FUNC_0(VAR_2->target_mem_map);
  VAR_2->target_mem_map = ((void*)0);
  return VAR_3;
 }

 return 0;
}
