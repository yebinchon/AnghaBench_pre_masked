
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vout_fbdev {int * mem; int mem_size; int fbvar_old; int fd; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct vout_fbdev *VAR_2)
{
 FUNC_0(VAR_2->fd, VAR_0, &VAR_2->fbvar_old);
 if (VAR_2->mem != VAR_1)
  FUNC_1(VAR_2->mem, VAR_2->mem_size);
 VAR_2->mem = ((void*)0);
}
