
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
float FUNC_0( float VAR_0 ) {
 int VAR_1 = * ( int * ) &VAR_0;
 VAR_1 &= 0x7FFFFFFF;
 return * ( float * ) &VAR_1;
}
