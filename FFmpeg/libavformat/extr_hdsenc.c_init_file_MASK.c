
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {int (* io_open ) (TYPE_2__*,int *,int ,int ,int *) ;} ;
struct TYPE_6__ {int nb_extra_packets; int** extra_packets; int * extra_packet_sizes; int out; int temp_filename; } ;
typedef TYPE_1__ OutputStream ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (char,char,char,char) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int*,int ) ;
 int FUNC_5 (TYPE_2__*,int *,int ,int ,int *) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_1, OutputStream *VAR_2, int64_t VAR_3)
{
    int VAR_4, VAR_5;
    VAR_4 = VAR_1->io_open(VAR_1, &VAR_2->out, VAR_2->temp_filename, VAR_0, ((void*)0));
    if (VAR_4 < 0)
        return VAR_4;
    FUNC_2(VAR_2->out, 0);
    FUNC_3(VAR_2->out, FUNC_1('m','d','a','t'));
    for (VAR_5 = 0; VAR_5 < VAR_2->nb_extra_packets; VAR_5++) {
        FUNC_0(VAR_2->extra_packets[VAR_5] + 4, VAR_3);
        VAR_2->extra_packets[VAR_5][7] = (VAR_3 >> 24) & 0x7f;
        FUNC_4(VAR_2->out, VAR_2->extra_packets[VAR_5], VAR_2->extra_packet_sizes[VAR_5]);
    }
    return 0;
}
