
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int userData; scalar_t__ (* realloc ) (int ,int *,scalar_t__) ;} ;
struct TYPE_11__ {TYPE_2__* pMemberNames; int tokenBytesUsed; int pTokenBytes; TYPE_1__ memorySuite; int flags; } ;
struct TYPE_10__ {int pBytes; int length; struct TYPE_10__* pNextName; } ;
struct TYPE_9__ {TYPE_3__* pFirstName; } ;
typedef TYPE_3__ MemberName ;
typedef int JSON_Status ;
typedef TYPE_4__* JSON_Parser ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *,scalar_t__) ;

__attribute__((used)) static JSON_Status FUNC_6(JSON_Parser VAR_5)
{
   if (FUNC_0(VAR_5->flags, VAR_4))
   {
      MemberName* VAR_6;
      for (VAR_6 = VAR_5->pMemberNames->pFirstName; VAR_6; VAR_6 = VAR_6->pNextName)
      {
         if (VAR_6->length == VAR_5->tokenBytesUsed && !FUNC_3(VAR_6->pBytes, VAR_5->pTokenBytes, VAR_6->length))
         {
            FUNC_2(VAR_5, VAR_0);
            return VAR_2;
         }
      }
      VAR_6 = (MemberName*)VAR_5->memorySuite.realloc(VAR_5->memorySuite.userData, ((void*)0), sizeof(MemberName) + VAR_5->tokenBytesUsed - 1);
      if (!VAR_6)
      {
         FUNC_1(VAR_5, VAR_1);
         return VAR_2;
      }
      VAR_6->pNextName = VAR_5->pMemberNames->pFirstName;
      VAR_6->length = VAR_5->tokenBytesUsed;
      FUNC_4(VAR_6->pBytes, VAR_5->pTokenBytes, VAR_5->tokenBytesUsed);
      VAR_5->pMemberNames->pFirstName = VAR_6;
   }
   return VAR_3;
}
