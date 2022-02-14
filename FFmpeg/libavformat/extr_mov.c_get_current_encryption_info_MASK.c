
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ id; TYPE_3__* priv_data; } ;
struct TYPE_14__ {TYPE_1__* fc; int frag_index; } ;
struct TYPE_13__ {scalar_t__ id; int * encryption_index; } ;
struct TYPE_11__ {int * encryption_index; int default_encrypted_sample; } ;
struct TYPE_12__ {TYPE_2__ cenc; } ;
struct TYPE_10__ {int nb_streams; TYPE_6__** streams; } ;
typedef TYPE_3__ MOVStreamContext ;
typedef TYPE_4__ MOVFragmentStreamInfo ;
typedef int MOVEncryptionIndex ;
typedef TYPE_5__ MOVContext ;
typedef TYPE_6__ AVStream ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(MOVContext *VAR_1, MOVEncryptionIndex **VAR_2, MOVStreamContext **VAR_3)
{
    MOVFragmentStreamInfo *VAR_4;
    AVStream *VAR_5;
    int VAR_6;

    VAR_4 = FUNC_2(&VAR_1->frag_index);
    if (VAR_4) {
        for (VAR_6 = 0; VAR_6 < VAR_1->fc->nb_streams; VAR_6++) {
            if (VAR_1->fc->streams[VAR_6]->id == VAR_4->id) {
              VAR_5 = VAR_1->fc->streams[VAR_6];
              break;
            }
        }
        if (VAR_6 == VAR_1->fc->nb_streams)
            return 0;
        *VAR_3 = VAR_5->priv_data;

        if (!VAR_4->encryption_index) {

            if (!(*VAR_3)->cenc.default_encrypted_sample)
                return 0;
            VAR_4->encryption_index = FUNC_1(sizeof(*VAR_4->encryption_index));
            if (!VAR_4->encryption_index)
                return FUNC_0(VAR_0);
        }
        *VAR_2 = VAR_4->encryption_index;
        return 1;
    } else {


        if (VAR_1->fc->nb_streams < 1)
            return 0;
        VAR_5 = VAR_1->fc->streams[VAR_1->fc->nb_streams - 1];
        *VAR_3 = VAR_5->priv_data;

        if (!(*VAR_3)->cenc.encryption_index) {

            if (!(*VAR_3)->cenc.default_encrypted_sample)
                return 0;
            (*VAR_3)->cenc.encryption_index = FUNC_1(sizeof(*VAR_4->encryption_index));
            if (!(*VAR_3)->cenc.encryption_index)
                return FUNC_0(VAR_0);
        }

        *VAR_2 = (*VAR_3)->cenc.encryption_index;
        return 1;
    }
}
