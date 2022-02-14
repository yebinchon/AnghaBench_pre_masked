
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct fdtable {int max_fds; int fd; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct fdtable *VAR_1)
{
 if (VAR_1->max_fds <= (VAR_0 / sizeof(struct file *)))
  FUNC_0(VAR_1->fd);
 else
  FUNC_1(VAR_1->fd);
}
