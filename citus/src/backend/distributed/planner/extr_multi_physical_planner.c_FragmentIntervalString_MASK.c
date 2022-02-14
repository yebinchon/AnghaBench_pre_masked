
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int maxValue; int minValue; int maxValueExists; int minValueExists; int valueTypeId; } ;
typedef int * StringInfo ;
typedef TYPE_1__ ShardInterval ;
typedef int Oid ;
typedef int FmgrInfo ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,char*,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,int*) ;
 int * FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static StringInfo
FUNC_7(ShardInterval *VAR_1)
{
 StringInfo VAR_2 = ((void*)0);
 Oid VAR_3 = VAR_1->valueTypeId;
 Oid VAR_4 = VAR_0;
 bool VAR_5 = 0;
 FmgrInfo *VAR_6 = ((void*)0);
 char *VAR_7 = ((void*)0);
 char *VAR_8 = ((void*)0);

 FUNC_0(VAR_1->minValueExists);
 FUNC_0(VAR_1->maxValueExists);

 VAR_6 = (FmgrInfo *) FUNC_6(sizeof(FmgrInfo));
 FUNC_4(VAR_3, &VAR_4, &VAR_5);
 FUNC_3(VAR_4, VAR_6);

 VAR_7 = FUNC_1(VAR_6, VAR_1->minValue);
 VAR_8 = FUNC_1(VAR_6, VAR_1->maxValue);

 VAR_2 = FUNC_5();
 FUNC_2(VAR_2, "[%s,%s]", VAR_7, VAR_8);

 return VAR_2;
}
