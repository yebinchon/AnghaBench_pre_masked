
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vnode_t ;
struct session {scalar_t__ s_ttyvp; int s_ttyvid; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_4__ {int p_flag; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct session* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct session*) ;
 int FUNC_2 (struct session*) ;
 int FUNC_3 (struct session*) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;

__attribute__((used)) static vnode_t
FUNC_5(proc_t VAR_2)
{
 vnode_t VAR_3;
 int VAR_4;
 struct session *VAR_5;

 VAR_5 = FUNC_0(VAR_2);

 FUNC_1(VAR_5);
 VAR_3 = (VAR_2->p_flag & VAR_1 ? VAR_5->s_ttyvp : VAR_0);
 VAR_4 = VAR_5->s_ttyvid;
 FUNC_3(VAR_5);

 FUNC_2(VAR_5);

 if (VAR_3 != VAR_0) {

  if (FUNC_4(VAR_3, VAR_4) != 0)
   VAR_3 = VAR_0;
 }
 return(VAR_3);
}
