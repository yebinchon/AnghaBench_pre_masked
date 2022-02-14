
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,scalar_t__) ;
 scalar_t__* VAR_0 ;

void FUNC_1( void ) {
 int VAR_1;
 for(VAR_1=0;VAR_1<256;VAR_1++) {
  if (VAR_0[VAR_1]) {
   FUNC_0("%d used %d\n", VAR_1, VAR_0[VAR_1]);
  }
 }
}
