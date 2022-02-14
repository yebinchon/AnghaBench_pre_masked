
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct protosw* so_proto; int so_flags; } ;
struct protosw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct socket*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct protosw VAR_3 ;

__attribute__((used)) static void
FUNC_1(struct socket *VAR_4)
{
        VAR_4->so_flags |= VAR_1;
        if (FUNC_0(VAR_4) == VAR_0) {
                VAR_4->so_proto = &VAR_3;
        }





}
