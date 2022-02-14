
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* xParseCell ) (TYPE_1__*,int ,int *) ;} ;
typedef TYPE_1__ MemPage ;
typedef int CellInfo ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static void FUNC_2(
  MemPage *VAR_0,
  int VAR_1,
  CellInfo *VAR_2
){
  VAR_0->xParseCell(VAR_0, FUNC_0(VAR_0, VAR_1), VAR_2);
}
