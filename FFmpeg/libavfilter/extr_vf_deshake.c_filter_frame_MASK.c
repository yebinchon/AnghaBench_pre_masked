
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_12__ ;
typedef struct TYPE_29__ TYPE_11__ ;
typedef struct TYPE_28__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_36__ {float x; float y; } ;
struct TYPE_31__ {int member_0; } ;
struct TYPE_37__ {float angle; float zoom; TYPE_6__ vec; int member_1; TYPE_1__ member_0; } ;
typedef TYPE_7__ Transform ;
struct TYPE_39__ {int log2_chroma_h; int log2_chroma_w; } ;
struct TYPE_34__ {double x; double y; } ;
struct TYPE_35__ {double angle; double zoom; TYPE_4__ vec; } ;
struct TYPE_32__ {float x; float y; } ;
struct TYPE_33__ {float angle; float zoom; TYPE_2__ vec; } ;
struct TYPE_38__ {double refcount; scalar_t__ cx; scalar_t__ cy; int cw; scalar_t__ ch; int (* transform ) (TYPE_12__*,int const,int const,int const,int const,float*,float*,int ,int ,TYPE_10__*,TYPE_10__*) ;TYPE_10__* ref; int edge; TYPE_5__ last; scalar_t__ fp; TYPE_3__ avg; int sad; } ;
struct TYPE_30__ {TYPE_11__** outputs; TYPE_8__* priv; } ;
struct TYPE_29__ {unsigned int w; unsigned int h; TYPE_12__* dst; int format; } ;
struct TYPE_28__ {int* linesize; int ** data; } ;
typedef TYPE_8__ DeshakeContext ;
typedef TYPE_9__ AVPixFmtDescriptor ;
typedef TYPE_10__ AVFrame ;
typedef TYPE_11__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_2 (scalar_t__,unsigned int) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_10__*,TYPE_10__*) ;
 int FUNC_4 (TYPE_10__**) ;
 TYPE_9__* FUNC_5 (int ) ;
 int FUNC_6 (int,int,int,TYPE_8__*) ;
 int FUNC_7 (TYPE_11__*,TYPE_10__*) ;
 int FUNC_8 (int const,int const,double,float,float,float*) ;
 TYPE_10__* FUNC_9 (TYPE_11__*,unsigned int,unsigned int) ;
 int FUNC_10 (TYPE_8__*,int *,int *,unsigned int,unsigned int,int,TYPE_7__*) ;
 int FUNC_11 (char*,int,int ,scalar_t__) ;
 int FUNC_12 (char*,int,char*,int,float,int,int,float,int,int,float,int,float,float,float) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (TYPE_12__*,int const,int const,int const,int const,float*,float*,int ,int ,TYPE_10__*,TYPE_10__*) ;

__attribute__((used)) static int FUNC_15(AVFilterLink *VAR_3, AVFrame *VAR_4)
{
    DeshakeContext *VAR_5 = VAR_3->dst->priv;
    AVFilterLink *VAR_6 = VAR_3->dst->outputs[0];
    AVFrame *VAR_7;
    Transform VAR_8 = {0,0}, VAR_9 = {0,0};
    float VAR_10[9], VAR_11[9];
    float VAR_12 = 2.0 / VAR_5->refcount;
    char VAR_13[256];
    int VAR_14 = 0;
    const AVPixFmtDescriptor *VAR_15 = FUNC_5(VAR_3->format);
    const int VAR_16 = FUNC_1(VAR_3->w, VAR_15->log2_chroma_w);
    const int VAR_17 = FUNC_1(VAR_3->h, VAR_15->log2_chroma_h);
    int VAR_18;
    float VAR_19;

    VAR_7 = FUNC_9(VAR_6, VAR_6->w, VAR_6->h);
    if (!VAR_7) {
        FUNC_4(&VAR_4);
        return FUNC_0(VAR_1);
    }
    FUNC_3(VAR_7, VAR_4);

    VAR_18 = !((intptr_t)VAR_4->data[0] & 15 | VAR_4->linesize[0] & 15);
    VAR_5->sad = FUNC_6(4, 4, VAR_18, VAR_5);
    if (!VAR_5->sad)
        return FUNC_0(VAR_0);

    if (VAR_5->cx < 0 || VAR_5->cy < 0 || VAR_5->cw < 0 || VAR_5->ch < 0) {

        FUNC_10(VAR_5, (VAR_5->ref == ((void*)0)) ? VAR_4->data[0] : VAR_5->ref->data[0], VAR_4->data[0], VAR_3->w, VAR_3->h, VAR_4->linesize[0], &VAR_8);
    } else {
        uint8_t *VAR_20 = (VAR_5->ref == ((void*)0)) ? VAR_4->data[0] : VAR_5->ref->data[0];
        uint8_t *VAR_21 = VAR_4->data[0];

        VAR_5->cx = FUNC_2(VAR_5->cx, VAR_3->w);
        VAR_5->cy = FUNC_2(VAR_5->cy, VAR_3->h);

        if ((unsigned)VAR_5->cx + (unsigned)VAR_5->cw > VAR_3->w) VAR_5->cw = VAR_3->w - VAR_5->cx;
        if ((unsigned)VAR_5->cy + (unsigned)VAR_5->ch > VAR_3->h) VAR_5->ch = VAR_3->h - VAR_5->cy;


        VAR_5->cw &= ~15;

        VAR_20 += VAR_5->cy * VAR_4->linesize[0] + VAR_5->cx;
        VAR_21 += VAR_5->cy * VAR_4->linesize[0] + VAR_5->cx;

        FUNC_10(VAR_5, VAR_20, VAR_21, VAR_5->cw, VAR_5->ch, VAR_4->linesize[0], &VAR_8);
    }



    VAR_9.vec.x = VAR_8.vec.x;
    VAR_9.vec.y = VAR_8.vec.y;
    VAR_9.angle = VAR_8.angle;
    VAR_9.zoom = VAR_8.zoom;


    VAR_5->avg.vec.x = VAR_12 * VAR_8.vec.x + (1.0 - VAR_12) * VAR_5->avg.vec.x;
    VAR_5->avg.vec.y = VAR_12 * VAR_8.vec.y + (1.0 - VAR_12) * VAR_5->avg.vec.y;
    VAR_5->avg.angle = VAR_12 * VAR_8.angle + (1.0 - VAR_12) * VAR_5->avg.angle;
    VAR_5->avg.zoom = VAR_12 * VAR_8.zoom + (1.0 - VAR_12) * VAR_5->avg.zoom;



    VAR_8.vec.x -= VAR_5->avg.vec.x;
    VAR_8.vec.y -= VAR_5->avg.vec.y;
    VAR_8.angle -= VAR_5->avg.angle;
    VAR_8.zoom -= VAR_5->avg.zoom;


    VAR_8.vec.x *= -1;
    VAR_8.vec.y *= -1;
    VAR_8.angle *= -1;


    if (VAR_5->fp) {
        FUNC_12(VAR_13, 256, "%f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f\n", VAR_9.vec.x, VAR_5->avg.vec.x, VAR_8.vec.x, VAR_9.vec.y, VAR_5->avg.vec.y, VAR_8.vec.y, VAR_9.angle, VAR_5->avg.angle, VAR_8.angle, VAR_9.zoom, VAR_5->avg.zoom, VAR_8.zoom);
        FUNC_11(VAR_13, sizeof(char), FUNC_13(VAR_13), VAR_5->fp);
    }



    VAR_8.vec.x += VAR_5->last.vec.x;
    VAR_8.vec.y += VAR_5->last.vec.y;
    VAR_8.angle += VAR_5->last.angle;
    VAR_8.zoom += VAR_5->last.zoom;


    VAR_8.vec.x *= 0.9;
    VAR_8.vec.y *= 0.9;
    VAR_8.angle *= 0.9;


    VAR_5->last.vec.x = VAR_8.vec.x;
    VAR_5->last.vec.y = VAR_8.vec.y;
    VAR_5->last.angle = VAR_8.angle;
    VAR_5->last.zoom = VAR_8.zoom;

    VAR_19 = 1.0 + VAR_8.zoom / 100.0;


    FUNC_8(VAR_8.vec.x, VAR_8.vec.y, VAR_8.angle, VAR_19, VAR_19, VAR_10);

    FUNC_8(VAR_8.vec.x / (VAR_3->w / VAR_16), VAR_8.vec.y / (VAR_3->h / VAR_17), VAR_8.angle, VAR_19, VAR_19, VAR_11);

    VAR_14 = VAR_5->transform(VAR_3->dst, VAR_3->w, VAR_3->h, VAR_16, VAR_17,
                             VAR_10, VAR_11, VAR_2, VAR_5->edge, VAR_4, VAR_7);


    FUNC_4(&VAR_5->ref);

    if (VAR_14 < 0)
        goto fail;



    VAR_5->ref = VAR_4;

    return FUNC_7(VAR_6, VAR_7);
fail:
    FUNC_4(&VAR_7);
    return VAR_14;
}
