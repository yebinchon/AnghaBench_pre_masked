
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int typnamespace; } ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,...) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static Oid
FUNC_4(Oid VAR_3)
{
 Form_pg_type VAR_4 = ((void*)0);
 Relation VAR_5 = FUNC_3(VAR_2, VAR_0);



 HeapTuple VAR_6 = FUNC_1(VAR_5, VAR_3);

 FUNC_2(VAR_5, VAR_0);

 VAR_4 = (Form_pg_type) FUNC_0(VAR_6);

 return VAR_4->typnamespace;
}
