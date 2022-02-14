
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static int FUNC_0( char *VAR_0, int *VAR_1, int VAR_2 ) {
 u16 VAR_3;
 int VAR_4 = 0;
 for (VAR_3 = 0; *VAR_1 < VAR_2 && VAR_0[*VAR_1] >= '0' &&
   VAR_0[*VAR_1] <= '9'; (*VAR_1)++) {
  VAR_4 = 1;
  VAR_3 *= 10;
  VAR_3 += VAR_0[*VAR_1] - '0';
 }
 if ( !VAR_4 ) return -1;
 return VAR_3;
}
