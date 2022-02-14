
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct trap_info {int vector; unsigned long address; int flags; int cs; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ ist; int dpl; } ;
typedef TYPE_1__ gate_desc ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_1 (TYPE_1__ const) ;
 int FUNC_2 (TYPE_1__ const) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int FUNC_3(int VAR_11, const gate_desc *VAR_12,
       struct trap_info *VAR_13)
{
 unsigned long VAR_14;

 if (VAR_12->type != VAR_1 && VAR_12->type != VAR_0)
  return 0;

 VAR_13->vector = VAR_11;

 VAR_14 = FUNC_1(*VAR_12);
 VAR_13->address = VAR_14;

 VAR_13->cs = FUNC_2(*VAR_12);
 VAR_13->flags = VAR_12->dpl;

 if (VAR_12->type == VAR_0)
  VAR_13->flags |= 1 << 2;

 return 1;
}
