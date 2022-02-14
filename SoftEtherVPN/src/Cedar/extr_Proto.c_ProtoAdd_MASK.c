
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* impl; } ;
struct TYPE_6__ {int (* Name ) () ;} ;
typedef TYPE_1__ PROTO_IMPL ;
typedef TYPE_2__ PROTO ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (char*,int ) ;
 TYPE_2__* FUNC_2 (int) ;
 int * VAR_0 ;
 int FUNC_3 () ;

bool FUNC_4(PROTO_IMPL *VAR_1)
{
 PROTO *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_2(sizeof(PROTO));
 VAR_2->impl = VAR_1;

 FUNC_0(VAR_0, VAR_2);

 FUNC_1("ProtoAdd(): added %s\n", VAR_2->impl->Name());

 return 1;
}
