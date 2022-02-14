
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int file; } ;
struct TYPE_6__ {int nb_segments; TYPE_2__** segments; } ;
typedef TYPE_1__ OutputStream ;
typedef int AVFormatContext ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__**,TYPE_2__**,int) ;

__attribute__((used)) static inline void FUNC_3(AVFormatContext *VAR_0, OutputStream *VAR_1, int VAR_2)
{
    for (int VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
        FUNC_1(VAR_0, VAR_1->segments[VAR_3]->file);


        FUNC_0(VAR_1->segments[VAR_3]);
    }

    VAR_1->nb_segments -= VAR_2;
    FUNC_2(VAR_1->segments, VAR_1->segments + VAR_2, VAR_1->nb_segments * sizeof(*VAR_1->segments));
}
