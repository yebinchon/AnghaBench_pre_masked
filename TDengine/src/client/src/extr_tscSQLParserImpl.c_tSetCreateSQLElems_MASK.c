
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tVariantList ;
typedef int tFieldList ;
typedef int int32_t ;
struct TYPE_7__ {int metricName; int * pTagVals; } ;
struct TYPE_6__ {int * pTagColumns; int * pColumns; } ;
struct TYPE_8__ {int * pSelect; TYPE_2__ usingInfo; TYPE_1__ colInfo; } ;
typedef int SSQLToken ;
typedef int SQuerySQL ;
typedef TYPE_3__ SCreateTableSQL ;






 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int,int) ;

SCreateTableSQL *FUNC_2(tFieldList *VAR_0, tFieldList *VAR_1, SSQLToken *VAR_2,
                                    tVariantList *VAR_3, SQuerySQL *VAR_4, int32_t VAR_5) {
  SCreateTableSQL *VAR_6 = FUNC_1(1, sizeof(SCreateTableSQL));

  switch (VAR_5) {
    case 130: {
      VAR_6->colInfo.pColumns = VAR_0;
      FUNC_0(VAR_3 == ((void*)0) && VAR_1 == ((void*)0));
      break;
    }
    case 129: {
      VAR_6->colInfo.pColumns = VAR_0;
      VAR_6->colInfo.pTagColumns = VAR_1;
      FUNC_0(VAR_3 == ((void*)0) && VAR_1 != ((void*)0) && VAR_0 != ((void*)0));
      break;
    }
    case 131: {
      VAR_6->usingInfo.pTagVals = VAR_3;
      VAR_6->usingInfo.metricName = *VAR_2;
      break;
    }
    case 128: {
      VAR_6->pSelect = VAR_4;
      break;
    }
    default:
      FUNC_0(0);
  }

  return VAR_6;
}
