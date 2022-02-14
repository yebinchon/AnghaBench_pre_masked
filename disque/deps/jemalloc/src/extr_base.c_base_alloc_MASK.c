
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int extent_node_t ;


 size_t FUNC_0 (size_t) ;
 int FUNC_1 (void*,size_t) ;
 scalar_t__ FUNC_2 (uintptr_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int * FUNC_3 (size_t) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *,void*) ;
 int FUNC_7 (int *,int *,int *,size_t,int,int) ;
 size_t FUNC_8 (int *) ;
 int FUNC_9 (int *,size_t) ;
 int FUNC_10 (int *,int *) ;
 int * FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 size_t FUNC_15 (size_t) ;

void *
FUNC_16(size_t VAR_5)
{
 void *VAR_6;
 size_t VAR_7, VAR_8;
 extent_node_t *VAR_9;
 extent_node_t VAR_10;





 VAR_7 = FUNC_0(VAR_5);

 VAR_8 = FUNC_15(VAR_7);
 FUNC_7(&VAR_10, ((void*)0), ((void*)0), VAR_8, 0, 0);
 FUNC_13(&VAR_2);
 VAR_9 = FUNC_11(&VAR_1, &VAR_10);
 if (VAR_9 != ((void*)0)) {

  FUNC_12(&VAR_1, VAR_9);
 } else {

  VAR_9 = FUNC_3(VAR_7);
 }
 if (VAR_9 == ((void*)0)) {
  VAR_6 = ((void*)0);
  goto label_return;
 }

 VAR_6 = FUNC_5(VAR_9);
 if (FUNC_8(VAR_9) > VAR_7) {
  FUNC_6(VAR_9, (void *)((uintptr_t)VAR_6 + VAR_7));
  FUNC_9(VAR_9, FUNC_8(VAR_9) - VAR_7);
  FUNC_10(&VAR_1, VAR_9);
 } else
  FUNC_4(VAR_9);
 if (VAR_4) {
  VAR_0 += VAR_7;




  VAR_3 += FUNC_2((uintptr_t)VAR_6 + VAR_7) -
      FUNC_2((uintptr_t)VAR_6);
 }
 FUNC_1(VAR_6, VAR_7);
label_return:
 FUNC_14(&VAR_2);
 return (VAR_6);
}
