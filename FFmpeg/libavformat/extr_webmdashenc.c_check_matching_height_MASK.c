
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__** streams; } ;
struct TYPE_9__ {int nb_streams; size_t* streams; } ;
struct TYPE_8__ {TYPE_1__* codecpar; } ;
struct TYPE_7__ {int height; } ;
typedef TYPE_3__ AdaptationSet ;
typedef TYPE_4__ AVFormatContext ;



__attribute__((used)) static int FUNC_0(AVFormatContext *VAR_0, AdaptationSet *VAR_1) {
    int VAR_2, VAR_3;
    if (VAR_1->nb_streams < 2) return 1;
    VAR_2 = VAR_0->streams[VAR_1->streams[0]]->codecpar->height;
    for (VAR_3 = 1; VAR_3 < VAR_1->nb_streams; VAR_3++)
        if (VAR_2 != VAR_0->streams[VAR_1->streams[VAR_3]]->codecpar->height)
          return 0;
    return 1;
}
