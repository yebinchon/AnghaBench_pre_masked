
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {int numParts; int sizeParts; int numParams; TYPE_1__* parts; } ;
struct TYPE_5__ {int isParam; char* str; int len; } ;
typedef TYPE_1__ SNormalStmtPart ;
typedef TYPE_2__ SNormalStmt ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(SNormalStmt* VAR_2, bool VAR_3, char* VAR_4, uint32_t VAR_5) {
  uint16_t VAR_6 = VAR_2->numParts + 1;
  if (VAR_6 > VAR_2->sizeParts) {
    VAR_6 *= 2;
    void* VAR_7 = FUNC_0(VAR_2->parts, sizeof(SNormalStmtPart) * VAR_6);
    if (VAR_7 == ((void*)0)) {
      return VAR_0;
    }
    VAR_2->sizeParts = VAR_6;
    VAR_2->parts = (SNormalStmtPart*)VAR_7;
  }

  VAR_2->parts[VAR_2->numParts].isParam = VAR_3;
  VAR_2->parts[VAR_2->numParts].str = VAR_4;
  VAR_2->parts[VAR_2->numParts].len = VAR_5;

  ++VAR_2->numParts;
  if (VAR_3) {
    ++VAR_2->numParams;
  }

  return VAR_1;
}
