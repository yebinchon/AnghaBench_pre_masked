
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_8__ {int nType; int i64Key; float dKey; char* pz; void* nLen; } ;
typedef TYPE_1__ tVariant ;
typedef int int8_t ;
typedef int int64_t ;
typedef void* int32_t ;
typedef int int16_t ;
struct TYPE_11__ {scalar_t__ numParams; TYPE_1__* params; } ;
struct TYPE_10__ {TYPE_4__ normal; } ;
struct TYPE_9__ {int buffer_type; size_t* length; scalar_t__ buffer; scalar_t__* is_null; } ;
typedef TYPE_2__ TAOS_BIND ;
typedef TYPE_3__ STscStmt ;
typedef TYPE_4__ SNormalStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__,size_t) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(STscStmt* VAR_3, TAOS_BIND* VAR_4) {
  SNormalStmt* VAR_5 = &VAR_3->normal;

  for (uint16_t VAR_6 = 0; VAR_6 < VAR_5->numParams; ++VAR_6) {
    TAOS_BIND* VAR_7 = VAR_4 + VAR_6;
    tVariant* VAR_8 = VAR_5->params + VAR_6;
    FUNC_2(VAR_8);

    VAR_8->nLen = 0;
    if (VAR_7->is_null != ((void*)0) && *(VAR_7->is_null)) {
      VAR_8->nType = 131;
      VAR_8->i64Key = 0;
      continue;
    }

    VAR_8->nType = VAR_7->buffer_type;
    switch (VAR_7->buffer_type) {
      case 131:
        VAR_8->i64Key = 0;
        break;

      case 136:
        VAR_8->i64Key = (*(int8_t*)VAR_7->buffer) ? 1 : 0;
        break;

      case 128:
        VAR_8->i64Key = *(int8_t*)VAR_7->buffer;
        break;

      case 130:
        VAR_8->i64Key = *(int16_t*)VAR_7->buffer;
        break;

      case 133:
        VAR_8->i64Key = *(int32_t*)VAR_7->buffer;
        break;

      case 138:
      case 129:
        VAR_8->i64Key = *(int64_t*)VAR_7->buffer;
        break;

      case 134:
        VAR_8->dKey = *(float*)VAR_7->buffer;
        break;

      case 135:
        VAR_8->dKey = *(double*)VAR_7->buffer;
        break;

      case 137:
      case 132:
        VAR_8->pz = (char*)FUNC_0((*VAR_7->length) + 1);
        if (VAR_8->pz == ((void*)0)) {
          return VAR_0;
        }
        FUNC_1(VAR_8->pz, VAR_7->buffer, (*VAR_7->length));
        VAR_8->pz[*VAR_7->length] = 0;
        VAR_8->nLen = (int32_t)(*VAR_7->length);
        break;

      default:
        FUNC_3("param %d: type mismatch or invalid", VAR_6);
        return VAR_1;
    }
  }

  return VAR_2;
}
