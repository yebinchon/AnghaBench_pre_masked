
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int eof_reached; } ;
struct TYPE_9__ {int size; } ;
struct TYPE_8__ {unsigned int nb_chapter_tracks; int * chapter_tracks; } ;
typedef TYPE_1__ MOVContext ;
typedef TYPE_2__ MOVAtom ;
typedef TYPE_3__ AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (unsigned int,int) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(MOVContext *VAR_1, AVIOContext *VAR_2, MOVAtom VAR_3)
{
    unsigned VAR_4, VAR_5;
    void *VAR_6;

    VAR_5 = VAR_3.size / 4;
    if (!(VAR_6 = FUNC_2(VAR_5, sizeof(int))))
        return FUNC_0(VAR_0);

    FUNC_1(VAR_1->chapter_tracks);
    VAR_1->chapter_tracks = VAR_6;
    VAR_1->nb_chapter_tracks = VAR_5;

    for (VAR_4 = 0; VAR_4 < VAR_5 && !VAR_2->eof_reached; VAR_4++)
        VAR_1->chapter_tracks[VAR_4] = FUNC_3(VAR_2);

    return 0;
}
