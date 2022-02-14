
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_6__ {unsigned int nb_samples; int * seek_table; } ;
typedef TYPE_1__ TTAMuxContext ;
typedef TYPE_2__ AVFormatContext ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (TYPE_2__*) ;
 unsigned int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_1)
{
    TTAMuxContext *VAR_2 = VAR_1->priv_data;
    uint8_t *VAR_3;
    unsigned int VAR_4;
    int VAR_5;

    FUNC_3(VAR_1->pb, VAR_2->nb_samples);
    VAR_4 = FUNC_6(VAR_1->pb) ^ VAR_0;
    FUNC_3(VAR_1->pb, VAR_4);


    VAR_4 = FUNC_6(VAR_2->seek_table) ^ VAR_0;
    FUNC_3(VAR_2->seek_table, VAR_4);
    VAR_5 = FUNC_1(VAR_2->seek_table, &VAR_3);
    FUNC_4(VAR_1->pb, VAR_3, VAR_5);
    VAR_2->seek_table = ((void*)0);
    FUNC_0(VAR_3);


    FUNC_7(VAR_1);

    FUNC_5(VAR_1);
    FUNC_2(VAR_1->pb);

    return 0;
}
