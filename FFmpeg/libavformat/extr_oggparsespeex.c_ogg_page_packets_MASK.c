
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ogg_stream {int nsegs; int* segments; } ;



__attribute__((used)) static int FUNC_0(struct ogg_stream *VAR_0)
{
    int VAR_1;
    int VAR_2 = 0;
    for (VAR_1 = 0; VAR_1 < VAR_0->nsegs; VAR_1++)
        if (VAR_0->segments[VAR_1] < 255)
            VAR_2++;
    return VAR_2;
}
