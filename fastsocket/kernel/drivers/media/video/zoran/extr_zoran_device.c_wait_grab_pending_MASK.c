
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zoran {scalar_t__ v4l_pend_tail; scalar_t__ v4l_pend_head; int spinlock; int v4l_capq; int v4l_memgrab_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct zoran*,int ) ;

int
FUNC_5 (struct zoran *VAR_2)
{
 unsigned long VAR_3;



 if (!VAR_2->v4l_memgrab_active)
  return 0;

 FUNC_3(VAR_2->v4l_capq,
   (VAR_2->v4l_pend_tail == VAR_2->v4l_pend_head));
 if (FUNC_0(VAR_1))
  return -VAR_0;

 FUNC_1(&VAR_2->spinlock, VAR_3);
 FUNC_4(VAR_2, 0);
 FUNC_2(&VAR_2->spinlock, VAR_3);

 return 0;
}
