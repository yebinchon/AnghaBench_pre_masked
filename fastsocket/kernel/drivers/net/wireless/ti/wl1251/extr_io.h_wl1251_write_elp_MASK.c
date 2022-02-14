
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wl1251 {TYPE_1__* if_ops; } ;
struct TYPE_2__ {int (* write ) (struct wl1251*,int,int *,int) ;int (* write_elp ) (struct wl1251*,int,int ) ;} ;


 int FUNC_0 (struct wl1251*,int,int ) ;
 int FUNC_1 (struct wl1251*,int,int *,int) ;

__attribute__((used)) static inline void FUNC_2(struct wl1251 *VAR_0, int VAR_1, u32 VAR_2)
{
 if (VAR_0->if_ops->write_elp)
  VAR_0->if_ops->write_elp(VAR_0, VAR_1, VAR_2);
 else
  VAR_0->if_ops->write(VAR_0, VAR_1, &VAR_2, sizeof(u32));
}
