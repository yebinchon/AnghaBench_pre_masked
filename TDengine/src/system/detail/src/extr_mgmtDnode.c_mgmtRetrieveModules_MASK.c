
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {char* name; } ;
struct TYPE_9__ {size_t status; int privateIp; } ;
struct TYPE_8__ {int* offset; int* bytes; int numOfReads; int pNode; } ;
typedef TYPE_1__ SShowObj ;
typedef TYPE_2__ SDnodeObj ;
typedef int SConnObj ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__**) ;
 char** VAR_1 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int ) ;
 TYPE_3__* VAR_2 ;

int FUNC_4(SShowObj *VAR_3, char *VAR_4, int VAR_5, SConnObj *VAR_6) {
  int VAR_7 = 0;
  SDnodeObj *VAR_8 = ((void*)0);
  char * VAR_9;
  int VAR_10 = 0;
  char VAR_11[20];

  while (VAR_7 < VAR_5) {
    VAR_3->pNode = FUNC_1(VAR_3, (SDnodeObj **)&VAR_8);
    if (VAR_8 == ((void*)0)) break;

    for (int VAR_12 = 0; VAR_12 < VAR_0; ++VAR_12) {
      if (!FUNC_0(VAR_8, VAR_12)) {
        continue;
      }

      VAR_10 = 0;

      FUNC_3(VAR_11, VAR_8->privateIp);
      VAR_9 = VAR_4 + VAR_3->offset[VAR_10] * VAR_5 + VAR_3->bytes[VAR_10] * VAR_7;
      FUNC_2(VAR_9, VAR_11);
      VAR_10++;

      VAR_9 = VAR_4 + VAR_3->offset[VAR_10] * VAR_5 + VAR_3->bytes[VAR_10] * VAR_7;
      FUNC_2(VAR_9, VAR_2[VAR_12].name);
      VAR_10++;

      VAR_9 = VAR_4 + VAR_3->offset[VAR_10] * VAR_5 + VAR_3->bytes[VAR_10] * VAR_7;
      FUNC_2(VAR_9, VAR_1[VAR_8->status]);
      VAR_10++;

      VAR_7++;
    }
  }

  VAR_3->numOfReads += VAR_7;
  return VAR_7;
}
