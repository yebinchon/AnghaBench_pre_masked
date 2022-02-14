
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int is_compatible_bit; } ;
struct TYPE_9__ {int Cedar; } ;
struct TYPE_8__ {TYPE_7__* x; } ;
typedef TYPE_1__ RPC_CERT ;
typedef TYPE_2__ CLIENT ;


 int FUNC_0 (int ,TYPE_7__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_0 ;

bool FUNC_3(CLIENT *VAR_1, RPC_CERT *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 if (VAR_2->x->is_compatible_bit == 0)
 {
  FUNC_2(VAR_1, VAR_0);
  return 0;
 }

 FUNC_0(VAR_1->Cedar, VAR_2->x);

 FUNC_1(VAR_1);

 return 1;
}
