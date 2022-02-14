
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int userData; scalar_t__ (* realloc ) (int ,int *,int) ;} ;
struct TYPE_8__ {TYPE_2__* pMemberNames; TYPE_1__ memorySuite; } ;
struct TYPE_7__ {int * pFirstName; struct TYPE_7__* pAncestor; } ;
typedef TYPE_2__ MemberNames ;
typedef int JSON_Status ;
typedef TYPE_3__* JSON_Parser ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int *,int) ;

__attribute__((used)) static JSON_Status FUNC_2(JSON_Parser VAR_3)
{
   MemberNames* VAR_4 = (MemberNames*)VAR_3->memorySuite.realloc(
         VAR_3->memorySuite.userData, ((void*)0), sizeof(MemberNames));

   if (!VAR_4)
   {
      FUNC_0(VAR_3, VAR_0);
      return VAR_1;
   }

   VAR_4->pAncestor = VAR_3->pMemberNames;
   VAR_4->pFirstName = ((void*)0);
   VAR_3->pMemberNames = VAR_4;
   return VAR_2;
}
