
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
typedef int int16_t ;
struct TYPE_7__ {size_t status; size_t lbState; int publicIp; int numOfFreeVnodes; int openVnodes; int createdTime; int privateIp; } ;
struct TYPE_6__ {int* offset; int* bytes; int numOfReads; int pNode; } ;
typedef TYPE_1__ SShowObj ;
typedef TYPE_2__ SDnodeObj ;
typedef int SConnObj ;


 int FUNC_0 (TYPE_1__*,TYPE_2__**) ;
 char** VAR_0 ;
 char** VAR_1 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int ) ;

int FUNC_3(SShowObj *VAR_2, char *VAR_3, int VAR_4, SConnObj *VAR_5) {
  int VAR_6 = 0;
  SDnodeObj *VAR_7 = ((void*)0);
  char * VAR_8;
  int VAR_9 = 0;
  char VAR_10[20];

  while (VAR_6 < VAR_4) {
    VAR_2->pNode = FUNC_0(VAR_2, (SDnodeObj **)&VAR_7);
    if (VAR_7 == ((void*)0)) break;

    VAR_9 = 0;

    FUNC_2(VAR_10, VAR_7->privateIp);
    VAR_8 = VAR_3 + VAR_2->offset[VAR_9] * VAR_4 + VAR_2->bytes[VAR_9] * VAR_6;
    FUNC_1(VAR_8, VAR_10);
    VAR_9++;

    VAR_8 = VAR_3 + VAR_2->offset[VAR_9] * VAR_4 + VAR_2->bytes[VAR_9] * VAR_6;
    *(int64_t *)VAR_8 = VAR_7->createdTime;
    VAR_9++;

    VAR_8 = VAR_3 + VAR_2->offset[VAR_9] * VAR_4 + VAR_2->bytes[VAR_9] * VAR_6;
    *(int16_t *)VAR_8 = VAR_7->openVnodes;
    VAR_9++;

    VAR_8 = VAR_3 + VAR_2->offset[VAR_9] * VAR_4 + VAR_2->bytes[VAR_9] * VAR_6;
    *(int16_t *)VAR_8 = VAR_7->numOfFreeVnodes;
    VAR_9++;

    VAR_8 = VAR_3 + VAR_2->offset[VAR_9] * VAR_4 + VAR_2->bytes[VAR_9] * VAR_6;
    FUNC_1(VAR_8, VAR_1[VAR_7->status]);
    VAR_9++;

    VAR_8 = VAR_3 + VAR_2->offset[VAR_9] * VAR_4 + VAR_2->bytes[VAR_9] * VAR_6;
    FUNC_1(VAR_8, VAR_0[VAR_7->lbState]);
    VAR_9++;

    FUNC_2(VAR_10, VAR_7->publicIp);
    VAR_8 = VAR_3 + VAR_2->offset[VAR_9] * VAR_4 + VAR_2->bytes[VAR_9] * VAR_6;
    FUNC_1(VAR_8, VAR_10);
    VAR_9++;

    VAR_6++;
  }

  VAR_2->numOfReads += VAR_6;
  return VAR_6;
}
