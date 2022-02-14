
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MovieBufferStruct {int size; char* data; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (char*,int,int,int *) ;
 int FUNC_1 (int *,int,int ) ;
 void* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;

struct MovieBufferStruct FUNC_5(FILE* VAR_2) {

 int VAR_3;
 struct MovieBufferStruct VAR_4;
   size_t VAR_5 = 0;

 VAR_3 = FUNC_2(VAR_2);

 FUNC_1 (VAR_2,0,VAR_0);
 VAR_4.size=FUNC_2(VAR_2);
 FUNC_4(VAR_2);

 VAR_4.data = (char*) FUNC_3 (sizeof(char)*VAR_4.size);
   VAR_5 = FUNC_0(VAR_4.data, 1, VAR_4.size, VAR_2);

 FUNC_1(VAR_2, VAR_3, VAR_1);
 return(VAR_4);
}
