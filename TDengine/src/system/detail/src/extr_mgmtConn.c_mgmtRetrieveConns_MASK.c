
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_8__ {int ip; int stime; int port; int user; } ;
struct TYPE_7__ {int numOfConns; int index; TYPE_3__* connInfo; } ;
struct TYPE_6__ {int* offset; int* bytes; int numOfReads; scalar_t__ pNode; } ;
typedef TYPE_1__ SShowObj ;
typedef TYPE_2__ SConnShow ;
typedef int SConnObj ;
typedef TYPE_3__ SConnInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int,int,int,int,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_2__*) ;

int FUNC_4(SShowObj *VAR_0, char *VAR_1, int VAR_2, SConnObj *VAR_3) {
  int VAR_4 = 0;
  char *VAR_5;
  int VAR_6 = 0;

  SConnShow *VAR_7 = (SConnShow *)VAR_0->pNode;

  if (VAR_2 > VAR_7->numOfConns - VAR_7->index) VAR_2 = VAR_7->numOfConns - VAR_7->index;

  while (VAR_4 < VAR_2) {
    SConnInfo *VAR_8 = VAR_7->connInfo + VAR_7->index;
    VAR_6 = 0;

    VAR_5 = VAR_1 + VAR_0->offset[VAR_6] * VAR_2 + VAR_0->bytes[VAR_6] * VAR_4;
    FUNC_2(VAR_5, VAR_8->user);
    VAR_6++;

    VAR_5 = VAR_1 + VAR_0->offset[VAR_6] * VAR_2 + VAR_0->bytes[VAR_6] * VAR_4;
    uint32_t VAR_9 = VAR_8->ip;
    FUNC_1(VAR_5, "%d.%d.%d.%d:%hu", VAR_9 & 0xFF, (VAR_9 >> 8) & 0xFF, (VAR_9 >> 16) & 0xFF, VAR_9 >> 24, FUNC_0(VAR_8->port));
    VAR_6++;

    VAR_5 = VAR_1 + VAR_0->offset[VAR_6] * VAR_2 + VAR_0->bytes[VAR_6] * VAR_4;
    *(int64_t *)VAR_5 = VAR_8->stime;
    VAR_6++;

    VAR_4++;
    VAR_7->index++;
  }

  if (VAR_4 == 0) {
    FUNC_3(VAR_7);
  }

  VAR_0->numOfReads += VAR_4;
  return VAR_4;
}
