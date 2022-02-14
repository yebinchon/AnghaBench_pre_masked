
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MovieBufferStruct {int size; int data; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,int,int ,int *) ;

void FUNC_3(struct MovieBufferStruct VAR_0) {

 FILE* VAR_1;

 VAR_1=FUNC_1("rmiab.txt", "wb");
 FUNC_2 (VAR_0.data, 1, VAR_0.size, VAR_1);
 FUNC_0(VAR_1);
}
