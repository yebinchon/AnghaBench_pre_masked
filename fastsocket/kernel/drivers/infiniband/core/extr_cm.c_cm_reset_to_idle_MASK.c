
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; } ;
struct cm_id_private {int * timewait_info; TYPE_1__ id; } ;
struct TYPE_4__ {int lock; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct cm_id_private *VAR_2)
{
 unsigned long VAR_3;

 VAR_2->id.state = VAR_0;
 if (VAR_2->timewait_info) {
  FUNC_2(&VAR_1.lock, VAR_3);
  FUNC_0(VAR_2->timewait_info);
  FUNC_3(&VAR_1.lock, VAR_3);
  FUNC_1(VAR_2->timewait_info);
  VAR_2->timewait_info = ((void*)0);
 }
}
