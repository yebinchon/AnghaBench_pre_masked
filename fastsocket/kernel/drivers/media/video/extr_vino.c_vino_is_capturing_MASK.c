
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_channel_settings {int capturing; int capture_lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_2(struct vino_channel_settings *VAR_0)
{
 int VAR_1;
 unsigned long VAR_2;

 FUNC_0(&VAR_0->capture_lock, VAR_2);

 VAR_1 = VAR_0->capturing;

 FUNC_1(&VAR_0->capture_lock, VAR_2);

 return VAR_1;
}
