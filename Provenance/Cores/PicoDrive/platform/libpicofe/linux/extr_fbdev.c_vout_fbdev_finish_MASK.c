
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vout_fbdev {int fd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct vout_fbdev*) ;
 int FUNC_2 (struct vout_fbdev*) ;

void FUNC_3(struct vout_fbdev *VAR_0)
{
 FUNC_2(VAR_0);
 if (VAR_0->fd >= 0)
  FUNC_0(VAR_0->fd);
 VAR_0->fd = -1;
 FUNC_1(VAR_0);
}
