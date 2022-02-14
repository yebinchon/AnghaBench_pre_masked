
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_7__ {char* option; int valType; scalar_t__ ptr; } ;
struct TYPE_6__ {int* offset; int* bytes; int numOfReads; } ;
typedef TYPE_1__ SShowObj ;
typedef TYPE_2__ SGlobalConfig ;
typedef int SConnObj ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,int ,char*,...) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;

int FUNC_2(SShowObj *VAR_4, char *VAR_5, int VAR_6, SConnObj *VAR_7) {
  int VAR_8 = 0;

  for (int VAR_9 = VAR_3 - 1; VAR_9 >= 0 && VAR_8 < VAR_6; --VAR_9) {
    SGlobalConfig *VAR_10 = VAR_2 + VAR_9;
    if (!FUNC_0(VAR_10)) continue;

    char *VAR_11;
    int VAR_12 = 0;

    VAR_11 = VAR_5 + VAR_4->offset[VAR_12] * VAR_6 + VAR_4->bytes[VAR_12] * VAR_8;
    FUNC_1(VAR_11, VAR_0, "%s", VAR_10->option);
    VAR_12++;

    VAR_11 = VAR_5 + VAR_4->offset[VAR_12] * VAR_6 + VAR_4->bytes[VAR_12] * VAR_8;
    switch (VAR_10->valType) {
      case 130:
        FUNC_1(VAR_11, VAR_1, "%d", *((int16_t *)VAR_10->ptr));
        VAR_8++;
        break;
      case 132:
        FUNC_1(VAR_11, VAR_1, "%d", *((int32_t *)VAR_10->ptr));
        VAR_8++;
        break;
      case 128:
        FUNC_1(VAR_11, VAR_1, "%d", *((uint32_t *)VAR_10->ptr));
        VAR_8++;
        break;
      case 133:
        FUNC_1(VAR_11, VAR_1, "%f", *((float *)VAR_10->ptr));
        VAR_8++;
        break;
      case 129:
      case 131:
      case 134:
        FUNC_1(VAR_11, VAR_1, "%s", (char *)VAR_10->ptr);
        VAR_8++;
        break;
      default:
        break;
    }
  }

  VAR_4->numOfReads += VAR_8;
  return VAR_8;
}
