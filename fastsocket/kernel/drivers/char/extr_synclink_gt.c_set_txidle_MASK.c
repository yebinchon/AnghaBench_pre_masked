
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; } ;
struct slgt_info {int idle_mode; int lock; TYPE_1__ params; int device_name; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct slgt_info*) ;

__attribute__((used)) static int FUNC_4(struct slgt_info *VAR_1, int VAR_2)
{
  unsigned long VAR_3;
 FUNC_0(("%s set_txidle(%d)\n", VAR_1->device_name, VAR_2));
 FUNC_1(&VAR_1->lock,VAR_3);
 VAR_1->idle_mode = VAR_2;
 if (VAR_1->params.mode != VAR_0)
  FUNC_3(VAR_1);
 FUNC_2(&VAR_1->lock,VAR_3);
 return 0;
}
