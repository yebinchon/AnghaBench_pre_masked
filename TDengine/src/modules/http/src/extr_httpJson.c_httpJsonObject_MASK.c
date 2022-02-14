
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* httpJsonBuilder ) (int *,void*) ;
typedef int JsonBuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,void*) ;

void FUNC_3(JsonBuf* VAR_2, httpJsonBuilder VAR_3, void* VAR_4) {
  FUNC_0(VAR_2);
  FUNC_1(VAR_2, VAR_1);
  (*VAR_3)(VAR_2, VAR_4);
  FUNC_1(VAR_2, VAR_0);
}
