
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_8__ {scalar_t__ bytes; scalar_t__ type; int name; } ;
struct TYPE_7__ {size_t numOfTags; TYPE_1__* pTagSchema; } ;
struct TYPE_6__ {scalar_t__ bytes; scalar_t__ type; int name; } ;
typedef TYPE_2__ SSyntaxTreeFilterSupporter ;
typedef TYPE_3__ SSchema ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(SSyntaxTreeFilterSupporter* VAR_2, SSchema* VAR_3, int32_t* VAR_4,
                             int32_t* VAR_5) {
  *VAR_4 = 0;
  *VAR_5 = 0;


  if (FUNC_0(VAR_3->name, VAR_1) == 0) {
    *VAR_4 = VAR_0;
    *VAR_5 = VAR_0;
    return;
  }

  while ((*VAR_4) < VAR_2->numOfTags) {
    if (VAR_2->pTagSchema[*VAR_4].bytes == VAR_3->bytes &&
        VAR_2->pTagSchema[*VAR_4].type == VAR_3->type &&
        FUNC_1(VAR_2->pTagSchema[*VAR_4].name, VAR_3->name) == 0) {
      break;
    } else {
      (*VAR_5) += VAR_2->pTagSchema[(*VAR_4)++].bytes;
    }
  }
}
