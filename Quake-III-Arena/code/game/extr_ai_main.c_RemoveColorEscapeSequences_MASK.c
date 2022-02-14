
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;

void FUNC_1( char *VAR_0 ) {
 int VAR_1, VAR_2;

 VAR_2 = 0;
 for ( VAR_1 = 0; VAR_0[VAR_1]; VAR_1++ ) {
  if (FUNC_0(&VAR_0[VAR_1])) {
   VAR_1++;
   continue;
  }
  if (VAR_0[VAR_1] > 0x7E)
   continue;
  VAR_0[VAR_2++] = VAR_0[VAR_1];
 }
 VAR_0[VAR_2] = '\0';
}
