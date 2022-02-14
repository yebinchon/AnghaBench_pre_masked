
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int* offset; int* bytes; int numOfReads; void* pNode; } ;
struct TYPE_4__ {char* user; int createdTime; scalar_t__ writeAuth; scalar_t__ superAuth; scalar_t__ next; } ;
typedef TYPE_1__ SUserObj ;
typedef TYPE_2__ SShowObj ;
typedef int SConnObj ;


 int FUNC_0 (char*,char*) ;

int FUNC_1(SShowObj *VAR_0, char *VAR_1, int VAR_2, SConnObj *VAR_3) {
  int VAR_4 = 0;
  SUserObj *VAR_5 = ((void*)0);
  char * VAR_6;
  int VAR_7 = 0;

  while (VAR_4 < VAR_2) {

    VAR_5 = (SUserObj *)VAR_0->pNode;
    if (VAR_5 == ((void*)0)) break;
    VAR_0->pNode = (void *)VAR_5->next;

    VAR_7 = 0;

    VAR_6 = VAR_1 + VAR_0->offset[VAR_7] * VAR_2 + VAR_0->bytes[VAR_7] * VAR_4;
    FUNC_0(VAR_6, VAR_5->user);
    VAR_7++;

    VAR_6 = VAR_1 + VAR_0->offset[VAR_7] * VAR_2 + VAR_0->bytes[VAR_7] * VAR_4;
    if (VAR_5->superAuth) {
      FUNC_0(VAR_6, "super");
    } else if (VAR_5->writeAuth) {
      FUNC_0(VAR_6, "write");
    } else {
      FUNC_0(VAR_6, "read");
    }
    VAR_7++;

    VAR_6 = VAR_1 + VAR_0->offset[VAR_7] * VAR_2 + VAR_0->bytes[VAR_7] * VAR_4;
    *(int64_t *)VAR_6 = VAR_5->createdTime;
    VAR_7++;

    VAR_4++;
  }
  VAR_0->numOfReads += VAR_4;
  return VAR_4;
}
