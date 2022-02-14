
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nstat_tucookie {TYPE_1__* inp; } ;
struct TYPE_2__ {int inp_nstat_refcnt; int inp_socket; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nstat_tucookie*,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(
    struct nstat_tucookie *VAR_3,
    int VAR_4)
{
 if (FUNC_2(VAR_3->inp->inp_socket) == VAR_0)
  FUNC_0(&VAR_3->inp->inp_nstat_refcnt);
 FUNC_3(VAR_3->inp, VAR_1, VAR_4);
 FUNC_1(VAR_3, sizeof(*VAR_3), VAR_2);
}
