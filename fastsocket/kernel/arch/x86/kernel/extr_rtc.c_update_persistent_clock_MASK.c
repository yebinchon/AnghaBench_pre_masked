
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int tv_sec; } ;
struct TYPE_2__ {int (* set_wallclock ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_1 ;

int FUNC_3(struct timespec VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_0(&VAR_0, VAR_3);
 VAR_4 = VAR_1.set_wallclock(VAR_2.tv_sec);
 FUNC_1(&VAR_0, VAR_3);

 return VAR_4;
}
