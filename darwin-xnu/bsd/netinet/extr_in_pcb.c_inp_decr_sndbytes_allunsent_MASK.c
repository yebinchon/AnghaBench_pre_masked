
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int sb_flags; } ;
struct socket {TYPE_1__ so_snd; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (struct socket*,int ) ;
 int FUNC_1 (struct socket*,int ) ;

inline void
FUNC_2(struct socket *VAR_1, u_int32_t VAR_2)
{
 int32_t VAR_3;

 if (VAR_1 == ((void*)0) || !(VAR_1->so_snd.sb_flags & VAR_0))
  return;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_1, VAR_3);
}
