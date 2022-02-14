
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int FUNC_0( void ) {
 int VAR_2;

 VAR_2 = VAR_0[VAR_1] | (VAR_0[VAR_1+1]<<8) | (VAR_0[VAR_1+2]<<16) | (VAR_0[VAR_1+3]<<24);
 VAR_1 += 4;
 return VAR_2;
}
