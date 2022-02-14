
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int size; int data; } ;
struct TYPE_5__ {int header_count; int* header_len; int * header; } ;
typedef TYPE_1__ NUTContext ;
typedef TYPE_2__ AVPacket ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(NUTContext *VAR_0, AVPacket *VAR_1)
{
    int VAR_2;
    int VAR_3 = 0;
    int VAR_4 = 0;

    if (VAR_1->size > 4096)
        return 0;

    for (VAR_2 = 1; VAR_2 < VAR_0->header_count; VAR_2++)
        if (VAR_1->size >= VAR_0->header_len[VAR_2]
            && VAR_0->header_len[VAR_2] > VAR_4
            && !FUNC_0(VAR_1->data, VAR_0->header[VAR_2], VAR_0->header_len[VAR_2])) {
            VAR_3 = VAR_2;
            VAR_4 = VAR_0->header_len[VAR_2];
        }
    return VAR_3;
}
