
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef int info ;
struct TYPE_4__ {int keysize; int entrysize; int hcxt; int hash; } ;
typedef int RelationAccessHashKey ;
typedef int RelationAccessHashEntry ;
typedef TYPE_1__ HASHCTL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_5 ;

void
FUNC_2(void)
{
 HASHCTL VAR_6;
 uint32 VAR_7 = 0;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.keysize = sizeof(RelationAccessHashKey);
 VAR_6.entrysize = sizeof(RelationAccessHashEntry);
 VAR_6.hash = VAR_5;
 VAR_6.hcxt = VAR_0;
 VAR_7 = (VAR_3 | VAR_1 | VAR_2);

 VAR_4 = FUNC_0("citus connection cache (relationid)",
          8, &VAR_6, VAR_7);
}
