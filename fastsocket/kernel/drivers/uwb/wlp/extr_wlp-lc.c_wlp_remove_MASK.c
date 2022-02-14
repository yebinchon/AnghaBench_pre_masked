
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp {int * rc; int mutex; int * dev_info; int eda; int uwb_notifs_handler; int pal; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct wlp*) ;

void FUNC_7(struct wlp *VAR_0)
{
 FUNC_6(VAR_0);
 FUNC_4(&VAR_0->pal);
 FUNC_3(VAR_0->rc, &VAR_0->uwb_notifs_handler);
 FUNC_5(&VAR_0->eda);
 FUNC_1(&VAR_0->mutex);
 if (VAR_0->dev_info != ((void*)0))
  FUNC_0(VAR_0->dev_info);
 FUNC_2(&VAR_0->mutex);
 VAR_0->rc = ((void*)0);
}
