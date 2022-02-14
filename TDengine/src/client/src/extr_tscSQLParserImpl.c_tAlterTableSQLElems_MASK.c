
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tVariantList ;
typedef int tFieldList ;
typedef scalar_t__ int32_t ;
struct TYPE_4__ {int * varList; int * pAddColumns; int name; } ;
typedef int SSQLToken ;
typedef TYPE_1__ SAlterTableSQL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int,int) ;

SAlterTableSQL *FUNC_2(SSQLToken *VAR_2, tFieldList *VAR_3, tVariantList *VAR_4, int32_t VAR_5) {
  SAlterTableSQL *VAR_6 = FUNC_1(1, sizeof(SAlterTableSQL));
  VAR_6->name = *VAR_2;

  if (VAR_5 == VAR_0 || VAR_5 == VAR_1) {
    VAR_6->pAddColumns = VAR_3;
    FUNC_0(VAR_4 == ((void*)0));
  } else {


    VAR_6->varList = VAR_4;
    FUNC_0(VAR_3 == ((void*)0));
  }

  return VAR_6;
}
