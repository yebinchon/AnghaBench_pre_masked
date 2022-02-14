
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef int info ;
typedef int TaskMapKey ;
typedef int TaskMapEntry ;
struct TYPE_4__ {int keysize; int entrysize; int hcxt; int hash; } ;
typedef int HTAB ;
typedef TYPE_1__ HASHCTL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (char const*,int,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static HTAB *
FUNC_2(uint32 VAR_5)
{
 HASHCTL VAR_6;
 const char *VAR_7 = "Task Hash";
 int VAR_8 = 0;
 HTAB *VAR_9 = ((void*)0);





 if (VAR_5 == 0)
 {
  VAR_5 = 2;
 }

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.keysize = sizeof(TaskMapKey);
 VAR_6.entrysize = sizeof(TaskMapEntry);
 VAR_6.hash = VAR_4;
 VAR_6.hcxt = VAR_0;
 VAR_8 = (VAR_2 | VAR_3 | VAR_1);

 VAR_9 = FUNC_0(VAR_7, VAR_5, &VAR_6, VAR_8);

 return VAR_9;
}
