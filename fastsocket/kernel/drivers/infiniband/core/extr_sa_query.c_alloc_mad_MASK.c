
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ib_sa_query {TYPE_2__* sm_ah; TYPE_3__* mad_buf; TYPE_1__* port; } ;
typedef int gfp_t ;
struct TYPE_7__ {int ah; } ;
struct TYPE_6__ {int ah; int ref; int pkey_index; } ;
struct TYPE_5__ {int agent; int ah_lock; TYPE_2__* sm_ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_4 ;
 TYPE_3__* FUNC_1 (int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct ib_sa_query *VAR_5, gfp_t VAR_6)
{
 unsigned long VAR_7;

 FUNC_4(&VAR_5->port->ah_lock, VAR_7);
 if (!VAR_5->port->sm_ah) {
  FUNC_5(&VAR_5->port->ah_lock, VAR_7);
  return -VAR_0;
 }
 FUNC_2(&VAR_5->port->sm_ah->ref);
 VAR_5->sm_ah = VAR_5->port->sm_ah;
 FUNC_5(&VAR_5->port->ah_lock, VAR_7);

 VAR_5->mad_buf = FUNC_1(VAR_5->port->agent, 1,
         VAR_5->sm_ah->pkey_index,
         0, VAR_3, VAR_2,
         VAR_6);
 if (FUNC_0(VAR_5->mad_buf)) {
  FUNC_3(&VAR_5->sm_ah->ref, VAR_4);
  return -VAR_1;
 }

 VAR_5->mad_buf->ah = VAR_5->sm_ah->ah;

 return 0;
}
