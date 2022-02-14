
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;

void FUNC_1() {
 float VAR_4;
 FUNC_0("Memory/String Pool Info\n");
 FUNC_0("----------------\n");
 VAR_4 = VAR_3;
 VAR_4 /= VAR_1;
 VAR_4 *= 100;
 FUNC_0("String Pool is %.1f%% full, %i bytes out of %i used.\n", VAR_4, VAR_3, VAR_1);
 VAR_4 = VAR_2;
 VAR_4 /= VAR_0;
 VAR_4 *= 100;
 FUNC_0("Memory Pool is %.1f%% full, %i bytes out of %i used.\n", VAR_4, VAR_2, VAR_0);
}
