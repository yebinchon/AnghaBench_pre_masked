
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int type; int offset; scalar_t__ bytes; } ;
struct TYPE_5__ {int buffer_type; int buffer; scalar_t__* length; scalar_t__* is_null; } ;
typedef TYPE_1__ TAOS_BIND ;
typedef TYPE_2__ SParamInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,short) ;
 int FUNC_2 (char*,int,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(char* VAR_2, SParamInfo* VAR_3, TAOS_BIND* VAR_4) {
  if (VAR_4->is_null != ((void*)0) && *(VAR_4->is_null)) {
    FUNC_2(VAR_2, VAR_3->type, VAR_3->bytes);
    return VAR_1;
  }

  if (VAR_4->buffer_type != VAR_3->type) {
    return VAR_0;
  }

  short VAR_5 = 0;
  switch(VAR_3->type) {
    case 135:
    case 128:
      VAR_5 = 1;
      break;

    case 130:
      VAR_5 = 2;
      break;

    case 132:
    case 133:
      VAR_5 = 4;
      break;

    case 137:
    case 134:
    case 129:
      VAR_5 = 8;
      break;

    case 136:
      if ((*VAR_4->length) > VAR_3->bytes) {
        return VAR_0;
      }
      VAR_5 = (short)*VAR_4->length;
      break;

    case 131:
      if (!FUNC_3(VAR_4->buffer, *VAR_4->length, VAR_2 + VAR_3->offset, VAR_3->bytes)) {
        return VAR_0;
      }
      return VAR_1;

    default:
      FUNC_0(0);
      return VAR_0;
  }

  FUNC_1(VAR_2 + VAR_3->offset, VAR_4->buffer, VAR_5);
  return VAR_1;
}
