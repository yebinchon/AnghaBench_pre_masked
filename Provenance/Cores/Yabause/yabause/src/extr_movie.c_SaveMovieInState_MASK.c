
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MovieBufferStruct {int size; int* data; } ;
struct TYPE_2__ {scalar_t__ Status; int fp; } ;
typedef int IOCheck_struct ;
typedef int FILE ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct MovieBufferStruct FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int*,int,int,int *) ;

void FUNC_3(FILE* VAR_4, IOCheck_struct VAR_5) {

 struct MovieBufferStruct VAR_6;

 FUNC_1(VAR_4, 0, VAR_3);

 if(VAR_0.Status == VAR_2 || VAR_0.Status == VAR_1) {
  VAR_6=FUNC_0(VAR_0.fp);

  FUNC_2(&VAR_6.size, 4, 1, VAR_4);
  FUNC_2(VAR_6.data, VAR_6.size, 1, VAR_4);
 }
}
