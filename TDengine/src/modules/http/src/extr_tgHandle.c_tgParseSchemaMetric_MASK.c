
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ type; int * valuestring; } ;
typedef TYPE_1__ cJSON ;
struct TYPE_13__ {int size; TYPE_2__* schemas; } ;
struct TYPE_12__ {int fieldNum; void** fields; void* tbName; void* name; int member_0; } ;
typedef TYPE_2__ STgSchema ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ VAR_2 ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (void*,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_3__ VAR_3 ;

void FUNC_7(cJSON *VAR_4) {
  STgSchema VAR_5 = {0};
  bool VAR_6 = 1;


  cJSON *VAR_7 = FUNC_2(VAR_4, "name");
  if (VAR_7 == ((void*)0)) {
    VAR_6 = 0;
    goto ParseEnd;
  }
  if (VAR_7->type != VAR_2) {
    VAR_6 = 0;
    goto ParseEnd;
  }
  if (VAR_7->valuestring == ((void*)0)) {
    VAR_6 = 0;
    goto ParseEnd;
  }
  int VAR_8 = (int)FUNC_5(VAR_7->valuestring);
  if (VAR_8 == 0) {
    VAR_6 = 0;
    goto ParseEnd;
  }

  VAR_5.name = FUNC_3(VAR_8 + 1, 1);
  FUNC_4(VAR_5.name, VAR_7->valuestring);


  cJSON *VAR_9 = FUNC_2(VAR_4, "tbname");
  if (VAR_9 == ((void*)0)) {
    VAR_6 = 0;
    goto ParseEnd;
  }
  if (VAR_9->type != VAR_2) {
    VAR_6 = 0;
    goto ParseEnd;
  }
  if (VAR_9->valuestring == ((void*)0)) {
    VAR_6 = 0;
    goto ParseEnd;
  }
  int VAR_10 = (int)FUNC_5(VAR_9->valuestring);
  if (VAR_10 == 0) {
    VAR_6 = 0;
    goto ParseEnd;
  }

  VAR_5.tbName = FUNC_3(VAR_10 + 1, 1);
  FUNC_4(VAR_5.tbName, VAR_9->valuestring);


  cJSON *VAR_11 = FUNC_2(VAR_4, "fields");
  if (VAR_11 == ((void*)0)) {
    goto ParseEnd;
  }
  int VAR_12 = FUNC_1(VAR_11);
  if (VAR_12 <= 0 || VAR_12 > VAR_0) {
    goto ParseEnd;
  }

  if (VAR_12 > 0) {
    VAR_5.fields = FUNC_3(sizeof(STgSchema), (size_t)VAR_12);
    VAR_5.fieldNum = VAR_12;
    for (int VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
      cJSON *VAR_14 = FUNC_0(VAR_11, VAR_13);
      if (VAR_14 == ((void*)0)) {
        VAR_6 = 0;
        goto ParseEnd;
      }
      if (VAR_14->valuestring == ((void*)0)) {
        VAR_6 = 0;
        goto ParseEnd;
      }
      int VAR_15 = (int)FUNC_5(VAR_14->valuestring);
      if (VAR_15 == 0 || VAR_15 > VAR_1) {
        VAR_6 = 0;
        goto ParseEnd;
      }
      VAR_5.fields[VAR_13] = FUNC_3(VAR_15 + 1, 1);
      FUNC_4(VAR_5.fields[VAR_13], VAR_14->valuestring);
    }
  }

ParseEnd:
  if (VAR_6) {
    VAR_3.schemas[VAR_3.size++] = VAR_5;
  } else {
    FUNC_6(&VAR_5);
  }
}
