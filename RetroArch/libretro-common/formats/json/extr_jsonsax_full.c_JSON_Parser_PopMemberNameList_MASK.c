
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int userData; int (* free ) (int ,TYPE_2__*) ;} ;
struct TYPE_10__ {TYPE_2__* pMemberNames; TYPE_1__ memorySuite; } ;
struct TYPE_9__ {struct TYPE_9__* pFirstName; struct TYPE_9__* pNextName; struct TYPE_9__* pAncestor; } ;
typedef TYPE_2__ MemberNames ;
typedef TYPE_2__ MemberName ;
typedef TYPE_4__* JSON_Parser ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(JSON_Parser VAR_0)
{
   MemberNames* VAR_1 = VAR_0->pMemberNames->pAncestor;
   while (VAR_0->pMemberNames->pFirstName)
   {
      MemberName* VAR_2 = VAR_0->pMemberNames->pFirstName->pNextName;
      VAR_0->memorySuite.free(VAR_0->memorySuite.userData, VAR_0->pMemberNames->pFirstName);
      VAR_0->pMemberNames->pFirstName = VAR_2;
   }
   VAR_0->memorySuite.free(VAR_0->memorySuite.userData, VAR_0->pMemberNames);
   VAR_0->pMemberNames = VAR_1;
}
