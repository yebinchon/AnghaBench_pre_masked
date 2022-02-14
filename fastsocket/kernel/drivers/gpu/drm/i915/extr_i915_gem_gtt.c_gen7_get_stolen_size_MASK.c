
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static inline size_t FUNC_0(u16 VAR_2)
{
 static const int VAR_3[] = {
  0, 0, 0, 0, 0, 32, 48, 64, 128, 256, 96, 160, 224, 352};
 VAR_2 >>= VAR_1;
 VAR_2 &= VAR_0;
 return VAR_3[VAR_2] << 20;
}
