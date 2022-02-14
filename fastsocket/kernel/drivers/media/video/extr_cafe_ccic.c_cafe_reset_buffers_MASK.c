
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cafe_camera {int next_buf; int nbufs; scalar_t__ specframes; int flags; } ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static void FUNC_1(struct cafe_camera *VAR_0)
{
 int VAR_1;

 VAR_0->next_buf = -1;
 for (VAR_1 = 0; VAR_1 < VAR_0->nbufs; VAR_1++)
  FUNC_0(VAR_1, &VAR_0->flags);
 VAR_0->specframes = 0;
}
