
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned short u16 ;
struct wm831x {int io_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wm831x*,unsigned short,int,unsigned short*) ;
 int FUNC_3 (struct wm831x*,unsigned short,int,unsigned short*) ;

int FUNC_4(struct wm831x *VAR_0, unsigned short VAR_1,
      unsigned short VAR_2, unsigned short VAR_3)
{
 int VAR_4;
 u16 VAR_5;

 FUNC_0(&VAR_0->io_lock);

 VAR_4 = FUNC_2(VAR_0, VAR_1, 2, &VAR_5);
 if (VAR_4 < 0)
  goto out;

 VAR_5 &= ~VAR_2;
 VAR_5 |= VAR_3;

 VAR_4 = FUNC_3(VAR_0, VAR_1, 2, &VAR_5);

out:
 FUNC_1(&VAR_0->io_lock);

 return VAR_4;
}
