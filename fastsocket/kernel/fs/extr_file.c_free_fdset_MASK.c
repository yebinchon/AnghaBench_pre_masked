
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdtable {int max_fds; int open_fds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct fdtable *VAR_2)
{
 if (VAR_2->max_fds <= (VAR_1 * VAR_0 / 2))
  FUNC_0(VAR_2->open_fds);
 else
  FUNC_1(VAR_2->open_fds);
}
