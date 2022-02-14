
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 void** FUNC_0 (int) ;
 void** VAR_1 ;
 void* FUNC_1 (int ,int,char*) ;
 int VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 int VAR_6 ;

void FUNC_2() {
  VAR_2 = (1.0 - VAR_5)*VAR_3*VAR_4 / 2.0;
  if (VAR_2 < 1) VAR_2 = 1;

  VAR_1 = FUNC_0(VAR_2*sizeof(void *));

  for (int VAR_7=0; VAR_7< VAR_2; ++VAR_7 )
    VAR_1[VAR_7] = FUNC_1(VAR_6, 1, "dnode");

  VAR_0 = FUNC_1(VAR_6, 1, "mgmt");
}
