
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_10__ {int pts; int * data; } ;
struct TYPE_8__ {int last_pts; TYPE_4__* frame; } ;
struct TYPE_9__ {int nb_filters; TYPE_1__** filters; TYPE_2__ sub2video; } ;
struct TYPE_7__ {int filter; } ;
typedef TYPE_3__ InputStream ;
typedef TYPE_4__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_4__*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,char*,int ) ;

__attribute__((used)) static void FUNC_4(InputStream *VAR_4, int64_t VAR_5)
{
    AVFrame *VAR_6 = VAR_4->sub2video.frame;
    int VAR_7;
    int VAR_8;

    FUNC_0(VAR_6->data[0]);
    VAR_4->sub2video.last_pts = VAR_6->pts = VAR_5;
    for (VAR_7 = 0; VAR_7 < VAR_4->nb_filters; VAR_7++) {
        VAR_8 = FUNC_1(VAR_4->filters[VAR_7]->filter, VAR_6,
                                           VAR_1 |
                                           VAR_2);
        if (VAR_8 != VAR_0 && VAR_8 < 0)
            FUNC_3(((void*)0), VAR_3, "Error while add the frame to buffer source(%s).\n",
                   FUNC_2(VAR_8));
    }
}
