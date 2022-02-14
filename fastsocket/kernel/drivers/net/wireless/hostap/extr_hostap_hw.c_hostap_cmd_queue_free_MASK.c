
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct hostap_cmd_queue {int dummy; } ;
struct TYPE_4__ {int cmdlock; } ;
typedef TYPE_1__ local_info_t ;


 int FUNC_0 (TYPE_1__*,struct hostap_cmd_queue*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(local_info_t *VAR_0,
      struct hostap_cmd_queue *VAR_1,
      int VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0->cmdlock, VAR_3);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->cmdlock, VAR_3);
}
