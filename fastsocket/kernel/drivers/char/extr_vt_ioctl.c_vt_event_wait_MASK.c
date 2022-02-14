
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_event_wait {int list; scalar_t__ done; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct vt_event_wait *VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(&VAR_3->list);
 VAR_3->done = 0;

 FUNC_3(&VAR_0, VAR_4);
 FUNC_1(&VAR_3->list, &VAR_2);
 FUNC_4(&VAR_0, VAR_4);

 FUNC_5(VAR_1, VAR_3->done);

 FUNC_3(&VAR_0, VAR_4);
 FUNC_2(&VAR_3->list);
 FUNC_4(&VAR_0, VAR_4);
}
