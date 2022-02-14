
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtip_port {int * s_active; TYPE_1__* dd; int flags; } ;
struct TYPE_2__ {unsigned int slot_groups; int dd_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct mtip_port *VAR_6, unsigned long VAR_7)
{
 unsigned long VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10 = 1;

 VAR_8 = VAR_5 + FUNC_0(VAR_7);
 do {
  if (FUNC_3(VAR_4, &VAR_6->flags) &&
   FUNC_3(VAR_3, &VAR_6->flags)) {
   FUNC_1(20);
   continue;
  }
  if (FUNC_3(VAR_2, &VAR_6->dd->dd_flag))
   return -VAR_1;




  VAR_10 = FUNC_2(VAR_6->s_active[0]) & 0xFFFFFFFE;
  for (VAR_9 = 1; VAR_9 < VAR_6->dd->slot_groups; VAR_9++)
   VAR_10 |= FUNC_2(VAR_6->s_active[VAR_9]);

  if (!VAR_10)
   break;

  FUNC_1(20);
 } while (FUNC_4(VAR_5, VAR_8));

 return VAR_10 ? -VAR_0 : 0;
}
