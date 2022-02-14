
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_mqueue; } ;
struct knote {int kn_flags; TYPE_1__ kn_ptr; } ;
typedef TYPE_2__* ipc_mqueue_t ;
typedef int ipc_kmsg_t ;
struct TYPE_7__ {int imq_messages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct knote*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(
 struct knote *VAR_6,
 long VAR_7)
{
 ipc_mqueue_t VAR_8 = VAR_6->kn_ptr.p_mqueue;
 ipc_kmsg_t VAR_9;
 int VAR_10 = 0;


 FUNC_0(FUNC_2(VAR_8));

 if (VAR_7 == VAR_5) {
  VAR_6->kn_flags |= VAR_0 | VAR_1;
  VAR_10 = VAR_2 | VAR_3;
 } else if (FUNC_4(VAR_8)) {
  FUNC_0(!FUNC_3(VAR_8));
  if ((VAR_9 = FUNC_5(&VAR_8->imq_messages)) != VAR_4) {
   VAR_10 = VAR_2 | FUNC_1(VAR_6, VAR_9);
  }
 }

 return VAR_10;
}
