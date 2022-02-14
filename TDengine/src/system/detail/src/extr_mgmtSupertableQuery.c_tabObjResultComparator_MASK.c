
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t numOfOrderedCols; size_t* pData; } ;
struct TYPE_12__ {TYPE_3__* pTagSchema; TYPE_1__ orderIdx; } ;
typedef TYPE_4__ tOrderDescriptor ;
typedef size_t int32_t ;
struct TYPE_14__ {scalar_t__ type; int bytes; int member_0; } ;
struct TYPE_13__ {char* meterId; } ;
struct TYPE_11__ {TYPE_2__* pSchema; } ;
struct TYPE_10__ {scalar_t__ type; } ;
typedef TYPE_5__ STabObj ;
typedef TYPE_6__ SSchema ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (char*,char*,scalar_t__,int ) ;
 char* FUNC_2 (TYPE_5__*,size_t,TYPE_6__*) ;

__attribute__((used)) static int32_t FUNC_3(const void* VAR_2, const void* VAR_3, void* VAR_4) {
  tOrderDescriptor* VAR_5 = (tOrderDescriptor*)VAR_4;

  STabObj* VAR_6 = (STabObj*)VAR_2;
  STabObj* VAR_7 = (STabObj*)VAR_3;

  for (int32_t VAR_8 = 0; VAR_8 < VAR_5->orderIdx.numOfOrderedCols; ++VAR_8) {
    int32_t VAR_9 = VAR_5->orderIdx.pData[VAR_8];

    char* VAR_10 = ((void*)0);
    char* VAR_11 = ((void*)0);

    SSchema VAR_12 = {0};

    if (VAR_9 == -1) {
      VAR_10 = VAR_6->meterId;
      VAR_11 = VAR_7->meterId;
      VAR_12.type = VAR_0;
      VAR_12.bytes = VAR_1;
    } else {
      VAR_10 = FUNC_2(VAR_6, VAR_9, ((void*)0));
      VAR_11 = FUNC_2(VAR_7, VAR_9, &VAR_12);
      FUNC_0(VAR_12.type == VAR_5->pTagSchema->pSchema[VAR_9].type);
    }

    int32_t VAR_13 = FUNC_1(VAR_10, VAR_11, VAR_12.type, VAR_12.bytes);
    if (VAR_13 == 0) {
      continue;
    } else {
      return VAR_13;
    }
  }

  return 0;
}
