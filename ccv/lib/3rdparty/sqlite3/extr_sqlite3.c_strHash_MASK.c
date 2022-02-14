
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(const char *VAR_1){
  unsigned int VAR_2 = 0;
  unsigned char VAR_3;
  while( (VAR_3 = (unsigned char)*VAR_1++)!=0 ){



    VAR_2 += VAR_0[VAR_3];
    VAR_2 *= 0x9e3779b1;
  }
  return VAR_2;
}
