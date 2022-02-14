
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
typedef int info ;
struct TYPE_4__ {int keysize; int entrysize; int hcxt; } ;
typedef int MemoryContext ;
typedef int HTAB ;
typedef TYPE_1__ HASHCTL ;
typedef int CopyShardState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (char*,int,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static HTAB *
FUNC_2(MemoryContext VAR_3)
{
 HTAB *VAR_4 = ((void*)0);
 int VAR_5 = 0;
 HASHCTL VAR_6;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.keysize = sizeof(uint64);
 VAR_6.entrysize = sizeof(CopyShardState);
 VAR_6.hcxt = VAR_3;
 VAR_5 = (VAR_2 | VAR_1 | VAR_0);

 VAR_4 = FUNC_0("Copy Shard State Hash", 128, &VAR_6, VAR_5);

 return VAR_4;
}
