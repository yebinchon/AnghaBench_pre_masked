
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ResampleContext {int dummy; } ;
typedef int soxr_t ;
typedef scalar_t__ soxr_error_t ;
struct TYPE_4__ {int ch; int ch_count; } ;
typedef TYPE_1__ AudioData ;


 scalar_t__ FUNC_0 (int ,int ,size_t,size_t*,int ,size_t,size_t*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(
        struct ResampleContext * VAR_0, AudioData *VAR_1, int VAR_2,
        AudioData *VAR_3, int VAR_4, int *VAR_5){
    size_t VAR_6, VAR_7;
    soxr_error_t VAR_8 = FUNC_1((soxr_t)VAR_0, FUNC_2((soxr_t)VAR_0, VAR_3->ch_count));
    if (!VAR_8)
        VAR_8 = FUNC_0((soxr_t)VAR_0, VAR_3->ch, (size_t)VAR_4,
                             &VAR_6, VAR_1->ch, (size_t)VAR_2, &VAR_7);
    else
        VAR_6 = 0;

    *VAR_5 = (int)VAR_6;
    return VAR_8? -1 : VAR_7;
}
