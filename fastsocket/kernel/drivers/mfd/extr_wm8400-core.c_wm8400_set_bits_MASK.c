
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wm8400 {int io_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wm8400*,int ,int,int*) ;
 int FUNC_3 (struct wm8400*,int ,int,int*) ;

int FUNC_4(struct wm8400 *VAR_0, u8 VAR_1, u16 VAR_2, u16 VAR_3)
{
 u16 VAR_4;
 int VAR_5;

 FUNC_0(&VAR_0->io_lock);

 VAR_5 = FUNC_2(VAR_0, VAR_1, 1, &VAR_4);
 VAR_4 = (VAR_4 & ~VAR_2) | VAR_3;
 if (VAR_5 == 0)
  VAR_5 = FUNC_3(VAR_0, VAR_1, 1, &VAR_4);

 FUNC_1(&VAR_0->io_lock);

 return VAR_5;
}
