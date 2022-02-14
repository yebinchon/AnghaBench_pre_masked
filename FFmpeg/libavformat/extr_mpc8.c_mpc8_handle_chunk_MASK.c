
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_4__ {int * pb; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;

 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(AVFormatContext *VAR_1, int VAR_2, int64_t VAR_3, int64_t VAR_4)
{
    AVIOContext *VAR_5 = VAR_1->pb;
    int64_t VAR_6, VAR_7;

    switch(VAR_2){
    case 128:
        VAR_6 = FUNC_2(VAR_5) + VAR_4;
        VAR_7 = FUNC_3(VAR_5);
        FUNC_4(VAR_1, VAR_3 + VAR_7);
        FUNC_0(VAR_5, VAR_6, VAR_0);
        break;
    default:
        FUNC_1(VAR_5, VAR_4);
    }
}
