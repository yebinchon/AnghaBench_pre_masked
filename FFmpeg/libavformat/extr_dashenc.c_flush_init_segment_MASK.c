
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int filename ;
struct TYPE_11__ {TYPE_2__* priv_data; } ;
struct TYPE_10__ {char* dirname; int single_file; } ;
struct TYPE_9__ {int pos; int init_range_length; int out; int initfile; } ;
typedef TYPE_1__ OutputStream ;
typedef TYPE_2__ DASHContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (TYPE_3__*,int *,char*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int*) ;
 int FUNC_2 (char*,int,char*,char*,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_0, OutputStream *VAR_1)
{
    DASHContext *VAR_2 = VAR_0->priv_data;
    int VAR_3, VAR_4;

    VAR_3 = FUNC_1(VAR_2, VAR_1, &VAR_4);
    if (VAR_3 < 0)
        return VAR_3;

    VAR_1->pos = VAR_1->init_range_length = VAR_4;
    if (!VAR_2->single_file) {
        char VAR_5[1024];
        FUNC_2(VAR_5, sizeof(VAR_5), "%s%s", VAR_2->dirname, VAR_1->initfile);
        FUNC_0(VAR_0, &VAR_1->out, VAR_5);
    }
    return 0;
}
