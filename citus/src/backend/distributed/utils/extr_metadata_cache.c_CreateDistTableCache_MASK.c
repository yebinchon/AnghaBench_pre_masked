
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int info ;
struct TYPE_4__ {int keysize; int entrysize; int hcxt; int hash; } ;
typedef int Oid ;
typedef TYPE_1__ HASHCTL ;
typedef int DistTableCacheEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_4 ;
 int FUNC_1 (char*,int,TYPE_1__*,int) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_2(void)
{
 HASHCTL VAR_6;
 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.keysize = sizeof(Oid);
 VAR_6.entrysize = sizeof(DistTableCacheEntry);
 VAR_6.hash = VAR_5;
 VAR_6.hcxt = VAR_4;
 VAR_0 =
  FUNC_1("Distributed Relation Cache", 32, &VAR_6,
     VAR_2 | VAR_3 | VAR_1);
}
