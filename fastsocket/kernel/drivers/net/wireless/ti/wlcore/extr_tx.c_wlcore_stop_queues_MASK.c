
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int wl_lock; int hw; int * queue_stop_reasons; } ;
typedef enum wlcore_queue_stop_reason { ____Placeholder_wlcore_queue_stop_reason } wlcore_queue_stop_reason ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,int *) ;

void FUNC_5(struct wl1271 *VAR_2,
   enum wlcore_queue_stop_reason VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_2->wl_lock, VAR_5);


        for (VAR_4 = 0; VAR_4 < VAR_1 * VAR_0; VAR_4++)
                FUNC_0(FUNC_4(VAR_3,
           &VAR_2->queue_stop_reasons[VAR_4]));




 FUNC_1(VAR_2->hw);

 FUNC_3(&VAR_2->wl_lock, VAR_5);
}
