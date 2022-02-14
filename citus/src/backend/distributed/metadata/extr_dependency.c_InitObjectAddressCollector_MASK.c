
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int info ;
struct TYPE_7__ {int keysize; int entrysize; int hcxt; } ;
struct TYPE_6__ {void* visitedObjects; int * dependencyList; void* dependencySet; } ;
typedef TYPE_1__ ObjectAddressCollector ;
typedef int ObjectAddress ;
typedef TYPE_2__ HASHCTL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (char*,int,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void
FUNC_2(ObjectAddressCollector *VAR_4)
{
 int VAR_5 = 0;
 HASHCTL VAR_6;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.keysize = sizeof(ObjectAddress);
 VAR_6.entrysize = sizeof(ObjectAddress);
 VAR_6.hcxt = VAR_0;
 VAR_5 = (VAR_3 | VAR_2 | VAR_1);

 VAR_4->dependencySet = FUNC_0("dependency set", 128, &VAR_6, VAR_5);
 VAR_4->dependencyList = ((void*)0);

 VAR_4->visitedObjects = FUNC_0("visited object set", 128, &VAR_6, VAR_5);
}
