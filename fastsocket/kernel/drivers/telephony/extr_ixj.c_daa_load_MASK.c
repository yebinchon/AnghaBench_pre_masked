
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int low; int high; } ;
struct TYPE_6__ {scalar_t__ XILINXbase; } ;
typedef TYPE_1__ IXJ ;
typedef TYPE_2__ BYTES ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(BYTES * VAR_1, IXJ *VAR_2)
{
 FUNC_1(VAR_1->high, VAR_2->XILINXbase + 0x03);
 FUNC_1(VAR_1->low, VAR_2->XILINXbase + 0x02);
 if (!FUNC_0(VAR_2, VAR_0))
  return 0;
 else
  return 1;
}
