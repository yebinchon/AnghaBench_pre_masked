
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nb_encrypted_samples; struct TYPE_5__* auxiliary_offsets; struct TYPE_5__* auxiliary_info_sizes; struct TYPE_5__* encrypted_samples; } ;
typedef TYPE_1__ MOVEncryptionIndex ;


 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (TYPE_1__**) ;

__attribute__((used)) static void FUNC_2(MOVEncryptionIndex **VAR_0) {
    int VAR_1;
    if (!VAR_0 || !*VAR_0) return;
    for (VAR_1 = 0; VAR_1 < (*VAR_0)->nb_encrypted_samples; VAR_1++) {
        FUNC_0((*VAR_0)->encrypted_samples[VAR_1]);
    }
    FUNC_1(&(*VAR_0)->encrypted_samples);
    FUNC_1(&(*VAR_0)->auxiliary_info_sizes);
    FUNC_1(&(*VAR_0)->auxiliary_offsets);
    FUNC_1(VAR_0);
}
