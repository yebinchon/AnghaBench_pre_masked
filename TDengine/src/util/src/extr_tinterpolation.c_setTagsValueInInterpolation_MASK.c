
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
typedef TYPE_2__ tFilePage ;
struct TYPE_8__ {size_t numOfCols; TYPE_1__* pFields; } ;
typedef TYPE_3__ tColModel ;
typedef size_t int32_t ;
struct TYPE_6__ {int type; int bytes; } ;


 int FUNC_0 (char*,char*,int ,int ) ;
 char* FUNC_1 (int ,int ,size_t,size_t,size_t) ;

__attribute__((used)) static void FUNC_2(tFilePage** VAR_0, char** VAR_1, tColModel* VAR_2, int32_t VAR_3, int32_t VAR_4,
                                        int32_t VAR_5, int32_t VAR_6) {
  for (int32_t VAR_7 = 0, VAR_8 = VAR_4; VAR_8 < VAR_2->numOfCols; ++VAR_8, ++VAR_7) {
    char* VAR_9 = FUNC_1(VAR_0[VAR_8]->data, VAR_2->pFields[VAR_8].bytes, VAR_3, VAR_5, VAR_6);
    FUNC_0(VAR_9, VAR_1[VAR_7], VAR_2->pFields[VAR_8].bytes, VAR_2->pFields[VAR_8].type);
  }
}
