
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int io_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wm831x*,unsigned short,int,unsigned short*) ;

int FUNC_3(struct wm831x *VAR_0, unsigned short VAR_1,
       unsigned short VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_0->io_lock);

 VAR_3 = FUNC_2(VAR_0, VAR_1, 2, &VAR_2);

 FUNC_1(&VAR_0->io_lock);

 return VAR_3;
}
