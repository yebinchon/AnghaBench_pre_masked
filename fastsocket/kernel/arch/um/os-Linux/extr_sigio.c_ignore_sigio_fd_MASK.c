
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pollfd {int fd; } ;
struct TYPE_5__ {int used; struct pollfd* poll; } ;
struct TYPE_4__ {int used; struct pollfd* poll; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_3 ;

int FUNC_4(int VAR_4)
{
 struct pollfd *VAR_5;
 int VAR_6 = 0, VAR_7, VAR_8 = 0;






 if (VAR_3 == -1)
  return -VAR_0;

 FUNC_1();
 for (VAR_7 = 0; VAR_7 < VAR_1.used; VAR_7++) {
  if (VAR_1.poll[VAR_7].fd == VAR_4)
   break;
 }
 if (VAR_7 == VAR_1.used)
  goto out;

 VAR_6 = FUNC_0(&VAR_2, VAR_1.used - 1);
 if (VAR_6)
  goto out;

 for (VAR_7 = 0; VAR_7 < VAR_1.used; VAR_7++) {
  VAR_5 = &VAR_1.poll[VAR_7];
  if (VAR_5->fd != VAR_4)
   VAR_2.poll[VAR_8++] = *VAR_5;
 }
 VAR_2.used = VAR_1.used - 1;

 FUNC_3();
 out:
 FUNC_2();
 return VAR_6;
}
