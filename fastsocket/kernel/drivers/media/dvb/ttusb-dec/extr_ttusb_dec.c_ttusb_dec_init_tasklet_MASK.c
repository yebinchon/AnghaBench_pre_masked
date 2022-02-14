
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttusb_dec {int urb_tasklet; int urb_frame_list; int urb_frame_list_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct ttusb_dec *VAR_1)
{
 FUNC_1(&VAR_1->urb_frame_list_lock);
 FUNC_0(&VAR_1->urb_frame_list);
 FUNC_2(&VAR_1->urb_tasklet, VAR_0,
       (unsigned long)VAR_1);
}
