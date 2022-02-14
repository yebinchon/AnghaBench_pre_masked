
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVFieldOrder { ____Placeholder_AVFieldOrder } AVFieldOrder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




enum AVFieldOrder FUNC_0(int VAR_4)
{
    enum AVFieldOrder VAR_5 = VAR_3;
    switch (VAR_4 & 0xF) {
    case 128:
        VAR_5 = VAR_1;
        break;
    case 129:
        VAR_5 = VAR_2;
        break;
    case 130:
        VAR_5 = VAR_0;
        break;
    }

    return VAR_5;
}
