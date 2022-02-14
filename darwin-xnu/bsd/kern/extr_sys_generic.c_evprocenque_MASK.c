
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct eventqelt {int ee_flags; int ee_eventmask; TYPE_1__* ee_proc; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_4__ {int p_evlist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int,int ,int ,int ) ;
 int FUNC_1 (int *,struct eventqelt*,int ) ;
 int FUNC_2 (struct eventqelt*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct eventqelt *VAR_5)
{
        proc_t VAR_6;

 FUNC_2(VAR_5);
 VAR_6 = VAR_5->ee_proc;

 FUNC_0(VAR_2|VAR_1, (uint32_t)VAR_5, VAR_5->ee_flags, VAR_5->ee_eventmask,0,0);

 FUNC_3(VAR_6);

 if (VAR_5->ee_flags & VAR_3) {
         FUNC_4(VAR_6);

         FUNC_0(VAR_2|VAR_0, 0,0,0,0,0);
  return;
 }
 VAR_5->ee_flags |= VAR_3;

 FUNC_1(&VAR_6->p_evlist, VAR_5, VAR_4);

 FUNC_4(VAR_6);

 FUNC_5(&VAR_6->p_evlist);

 FUNC_0(VAR_2|VAR_0, 0,0,0,0,0);
}
