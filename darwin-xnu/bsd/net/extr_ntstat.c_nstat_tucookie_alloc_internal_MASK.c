
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nstat_tucookie {int pname; struct inpcb* inp; } ;
struct inpcb {int inp_nstat_refcnt; TYPE_1__* inp_socket; } ;
struct TYPE_2__ {int last_pid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct nstat_tucookie*,int,int ) ;
 int FUNC_2 (int *) ;
 struct nstat_tucookie* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (struct nstat_tucookie*,int) ;
 scalar_t__ FUNC_6 (struct inpcb*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static struct nstat_tucookie *
FUNC_8(
    struct inpcb *VAR_6,
    bool VAR_7,
    bool VAR_8)
{
 struct nstat_tucookie *VAR_9;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_4);
 if (VAR_9 == ((void*)0))
  return ((void*)0);
 if (!VAR_8)
  FUNC_0(&VAR_5, VAR_1);
 if (VAR_7 && FUNC_6(VAR_6, VAR_2, VAR_8) == VAR_3)
 {
  FUNC_1(VAR_9, sizeof(*VAR_9), VAR_4);
  return ((void*)0);
 }
 FUNC_5(VAR_9, sizeof(*VAR_9));
 VAR_9->inp = VAR_6;
 FUNC_7(VAR_6->inp_socket->last_pid, VAR_9->pname,
     sizeof(VAR_9->pname));




 if (FUNC_4(VAR_6->inp_socket) == VAR_0)
  FUNC_2(&VAR_6->inp_nstat_refcnt);

 return VAR_9;
}
