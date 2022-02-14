
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * data32; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2 (void)
{
  if (VAR_0[0].data32)
    FUNC_1(VAR_0[0].data32);
  VAR_0[0].data32 = ((void*)0);
  if (VAR_0[1].data32)
    FUNC_1(VAR_0[1].data32);
  VAR_0[1].data32 = ((void*)0);

  VAR_0[0].data32 = (u32 *)FUNC_0(VAR_1, sizeof(u32));
  if (VAR_0[0].data32 == ((void*)0))
    return -1;
  VAR_0[1].data32 = (u32 *)FUNC_0(VAR_1, sizeof(u32));
  if (VAR_0[1].data32 == ((void*)0))
    return -1;

  return 0;
}
