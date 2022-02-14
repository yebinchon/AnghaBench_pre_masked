
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef scalar_t__ int32_t ;
typedef int STableDataBlocks ;
typedef int SDataBlockList ;


 scalar_t__ FUNC_0 (void*,int ,char*) ;
 scalar_t__ FUNC_1 (void*,int ) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (size_t,scalar_t__,scalar_t__,char*) ;

STableDataBlocks* FUNC_4(void* VAR_0, SDataBlockList* VAR_1, int64_t VAR_2, int32_t VAR_3,
                                          int32_t VAR_4, int32_t VAR_5, char* VAR_6) {
  STableDataBlocks* VAR_7 = ((void*)0);

  STableDataBlocks** VAR_8 = (STableDataBlocks**)FUNC_1(VAR_0, VAR_2);
  if (VAR_8 != ((void*)0)) {
    VAR_7 = *VAR_8;
  }

  if (VAR_7 == ((void*)0)) {
    VAR_7 = FUNC_3((size_t)VAR_3, VAR_5, VAR_4, VAR_6);
    VAR_7 = *(STableDataBlocks**)FUNC_0(VAR_0, VAR_2, (char*)&VAR_7);
    FUNC_2(VAR_1, VAR_7);
  }

  return VAR_7;
}
