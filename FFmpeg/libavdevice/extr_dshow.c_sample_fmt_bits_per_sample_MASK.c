
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum AVSampleFormat FUNC_0(int VAR_4)
{
    switch (VAR_4) {
    case 8: return VAR_3;
    case 16: return VAR_1;
    case 32: return VAR_2;
    default: return VAR_0;
    }
}
