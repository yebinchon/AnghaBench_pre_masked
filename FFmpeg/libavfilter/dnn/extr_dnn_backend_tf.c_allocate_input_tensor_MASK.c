
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int height; int width; int channels; int dt; } ;
typedef int TF_Tensor ;
typedef int TF_DataType ;
typedef TYPE_1__ DNNData ;




 int * FUNC_0 (int ,int*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static TF_Tensor *FUNC_2(const DNNData *VAR_2)
{
    TF_DataType VAR_3;
    size_t VAR_4;
    int64_t VAR_5[] = {1, VAR_2->height, VAR_2->width, VAR_2->channels};
    switch (VAR_2->dt) {
    case 129:
        VAR_3 = VAR_0;
        VAR_4 = sizeof(float);
        break;
    case 128:
        VAR_3 = VAR_1;
        VAR_4 = sizeof(char);
        break;
    default:
        FUNC_1(!"should not reach here");
    }

    return FUNC_0(VAR_3, VAR_5, 4,
                             VAR_5[1] * VAR_5[2] * VAR_5[3] * VAR_4);
}
