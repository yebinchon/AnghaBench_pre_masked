
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MovieBufferStruct {char size; char* data; } ;
struct TYPE_2__ {scalar_t__ Status; scalar_t__ ReadOnly; int fp; } ;
typedef int FILE ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (char*,int,int,int *) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,int,int ) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (int ) ;

void FUNC_6(FILE* VAR_4) {

 struct MovieBufferStruct VAR_5;
 int VAR_6;
   size_t VAR_7 = 0;


 if(VAR_0.Status == VAR_2 || (VAR_0.Status == VAR_1 && VAR_0.ReadOnly == 0)) {

  VAR_6=FUNC_2(VAR_4);
      VAR_7 = FUNC_0(&VAR_5.size, 4, 1, VAR_4);
  if ((VAR_5.data = (char *)FUNC_4(VAR_5.size)) == ((void*)0))
  {
   return;
  }
      VAR_7 = FUNC_0(VAR_5.data, 1, VAR_5.size, VAR_4);
  FUNC_1(VAR_4, VAR_6, VAR_3);

  FUNC_5(VAR_0.fp);
  FUNC_3(VAR_5.data, 1, VAR_5.size, VAR_0.fp);
  FUNC_5(VAR_0.fp);
 }
}
