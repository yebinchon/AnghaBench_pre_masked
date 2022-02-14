
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int task; int lock; int pending_bh; int device_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_1)
{
 struct slgt_info *VAR_2 = (struct slgt_info*)VAR_1;
 unsigned long VAR_3;

 FUNC_0(("%s rx_timeout\n", VAR_2->device_name));
 FUNC_2(&VAR_2->lock, VAR_3);
 VAR_2->pending_bh |= VAR_0;
 FUNC_3(&VAR_2->lock, VAR_3);
 FUNC_1(&VAR_2->task);
}
