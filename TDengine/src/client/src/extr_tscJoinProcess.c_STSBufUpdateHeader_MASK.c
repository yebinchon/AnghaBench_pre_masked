
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef int int32_t ;
struct TYPE_7__ {int * f; } ;
struct TYPE_6__ {scalar_t__ numOfVnode; scalar_t__ magic; } ;
typedef TYPE_1__ STSBufFileHeader ;
typedef TYPE_2__ STSBuf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int,int,int *) ;

int32_t FUNC_2(STSBuf* VAR_2, STSBufFileHeader* VAR_3) {
  if ((VAR_2->f == ((void*)0)) || VAR_3 == ((void*)0) || VAR_3->numOfVnode < 0 || VAR_3->magic != VAR_1) {
    return -1;
  }

  int64_t VAR_4 = FUNC_0(VAR_2->f, 0, VAR_0);
  if (VAR_4 != 0) {
    return -1;
  }

  FUNC_1(VAR_3, sizeof(STSBufFileHeader), 1, VAR_2->f);
  return 0;
}
