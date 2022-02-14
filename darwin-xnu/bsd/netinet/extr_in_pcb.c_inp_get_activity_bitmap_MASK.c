
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inpcb {int inp_nw_activity; } ;
typedef int activity_bitmap_t ;


 int FUNC_0 (int *,int *,int) ;

inline void
FUNC_1(struct inpcb *VAR_0, activity_bitmap_t *VAR_1)
{
 FUNC_0(&VAR_0->inp_nw_activity, VAR_1, sizeof (*VAR_1));
}
