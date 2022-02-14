
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {char* data; int rowSize; scalar_t__ id; int delimiter; } ;
struct TYPE_12__ {int rowSize; scalar_t__ id; int offset; void* row; } ;
struct TYPE_11__ {int maxRowSize; int mutex; void* (* appTool ) (int ,void*,char*,int,int *) ;int size; int fd; scalar_t__ id; int name; } ;
typedef int TSCKSUM ;
typedef TYPE_1__ SSdbTable ;
typedef TYPE_2__ SRowMeta ;
typedef TYPE_3__ SRowHead ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ,void*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ,void*,int) ;
 TYPE_2__* FUNC_10 (void*,void*) ;
 int FUNC_11 (char*,int ) ;
 int VAR_7 ;
 void* FUNC_12 (int ,void*,char*,int,int *) ;
 void* FUNC_13 (int ,void*,char*,int,int *) ;
 void* FUNC_14 (int ,void*,char*,int,int *) ;
 void* FUNC_15 (int ,void*,char*,int,int *) ;
 int FUNC_16 (int ,int *,scalar_t__) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (int ,TYPE_3__*,scalar_t__) ;

int FUNC_19(void *VAR_8, void *VAR_9, int VAR_10) {
  SSdbTable *VAR_11 = (SSdbTable *)VAR_8;
  SRowMeta * VAR_12 = ((void*)0);
  int VAR_13 = 0;


  if (VAR_11 == ((void*)0) || VAR_9 == ((void*)0) || VAR_10 <= 0) return -1;
  VAR_12 = FUNC_10(VAR_8, VAR_9);
  if (VAR_12 == ((void*)0)) {
    FUNC_11("table: %s, record is not there, batch update failed", VAR_11->name);
    return -1;
  }

  void *VAR_14 = VAR_12->row;
  FUNC_0(VAR_14 != ((void*)0));

  VAR_13 = sizeof(SRowHead) + VAR_11->maxRowSize + sizeof(TSCKSUM);
  SRowHead *VAR_15 = (SRowHead *)FUNC_2(VAR_13);
  if (VAR_15 == ((void*)0)) {
    FUNC_7("failed to allocate row head memory, sdb: %s", VAR_11->name);
    return -1;
  }

  FUNC_4(&VAR_11->mutex);
  if (FUNC_9(VAR_11, VAR_2, VAR_9, VAR_10) == 0) {




    (*(VAR_11->appTool))(VAR_3, VAR_14, ((void*)0), 0, ((void*)0));

    void *VAR_16 = VAR_14;
    while (VAR_16 != ((void*)0)) {
      VAR_11->id++;
      VAR_7++;

      void *VAR_17 = VAR_16;
      VAR_16 = (*(VAR_11->appTool))(VAR_2, VAR_17, (char *)VAR_9, VAR_10, 0);
      FUNC_3(VAR_15, 0, sizeof(SRowHead) + VAR_11->maxRowSize + sizeof(TSCKSUM));


      VAR_12->id = VAR_11->id;
      VAR_12->offset = VAR_11->size;


      VAR_15->delimiter = VAR_0;
      VAR_15->id = VAR_12->id;
      (*(VAR_11->appTool))(VAR_4, VAR_17, VAR_15->data, VAR_11->maxRowSize, &(VAR_15->rowSize));
      FUNC_16(0, (uint8_t *)VAR_15, sizeof(SRowHead) + VAR_15->rowSize + sizeof(TSCKSUM));
      VAR_12->rowSize = VAR_15->rowSize;
      FUNC_1(VAR_11->fd, VAR_11->size, VAR_6);
      FUNC_18(VAR_11->fd, VAR_15, sizeof(SRowHead) + VAR_15->rowSize + sizeof(TSCKSUM));
      VAR_11->size += (sizeof(SRowHead) + VAR_15->rowSize + sizeof(TSCKSUM));

      FUNC_6(VAR_11, VAR_5, VAR_17);

      if (VAR_16 != ((void*)0)) {
        VAR_12 = FUNC_10(VAR_8, VAR_16);
      }
    }

    FUNC_8(VAR_11);

    (*(VAR_11->appTool))(VAR_1, VAR_14, ((void*)0), 0, ((void*)0));
  }
  FUNC_5(&VAR_11->mutex);

  FUNC_17(VAR_15);

  return 0;
}
