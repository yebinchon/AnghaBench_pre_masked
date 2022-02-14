
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ objectSubId; int objectId; int classId; int member_2; int member_1; int member_0; } ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef int Node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_2(Oid VAR_3, Node *VAR_4)
{
 ObjectAddress VAR_5 = { 0, 0, 0 };
 ObjectAddress VAR_6 = { 0, 0, 0 };

 VAR_5.classId = VAR_2;
 VAR_5.objectId = VAR_3;
 VAR_5.objectSubId = 0;

 VAR_6.classId = VAR_1;
 VAR_6.objectId = FUNC_0("citus", 0);
 VAR_6.objectSubId = 0;


 FUNC_1(&VAR_5, &VAR_6, VAR_0);
}
