
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {char* file_buf; int file_bufsize; int w; int h; scalar_t__ buf_idx; int ** buf; int * filename; } ;
typedef TYPE_1__ LifeContext ;
typedef TYPE_2__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int *,char**,int*,int ,TYPE_2__*) ;
 int FUNC_4 (int **) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int ,char*,int,int,...) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_5)
{
    LifeContext *VAR_6 = VAR_5->priv;
    char *VAR_7;
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12 = 0, VAR_13, VAR_14 = 0;

    if ((VAR_8 = FUNC_3(VAR_6->filename, &VAR_6->file_buf, &VAR_6->file_bufsize,
                           0, VAR_5)) < 0)
        return VAR_8;
    FUNC_4(&VAR_6->filename);


    VAR_13 = 0;
    for (VAR_9 = 0; VAR_9 < VAR_6->file_bufsize; VAR_9++) {
        if (VAR_6->file_buf[VAR_9] == '\n') {
            VAR_12++; VAR_14 = FUNC_1(VAR_13, VAR_14); VAR_13 = 0;
        } else {
            VAR_13++;
        }
    }
    FUNC_6(VAR_5, VAR_1, "h:%d max_w:%d\n", VAR_12, VAR_14);

    if (VAR_6->w) {
        if (VAR_14 > VAR_6->w || VAR_12 > VAR_6->h) {
            FUNC_6(VAR_5, VAR_2,
                   "The specified size is %dx%d which cannot contain the provided file size of %dx%d\n",
                   VAR_6->w, VAR_6->h, VAR_14, VAR_12);
            return FUNC_0(VAR_3);
        }
    } else {

        VAR_6->w = VAR_14;
        VAR_6->h = VAR_12;
    }

    if (!(VAR_6->buf[0] = FUNC_2(VAR_6->h * VAR_6->w, sizeof(*VAR_6->buf[0]))) ||
        !(VAR_6->buf[1] = FUNC_2(VAR_6->h * VAR_6->w, sizeof(*VAR_6->buf[1])))) {
        FUNC_4(&VAR_6->buf[0]);
        FUNC_4(&VAR_6->buf[1]);
        return FUNC_0(VAR_4);
    }


    VAR_7 = VAR_6->file_buf;
    for (VAR_10 = 0, VAR_9 = (VAR_6->h - VAR_12)/2; VAR_10 < VAR_12; VAR_10++, VAR_9++) {
        for (VAR_11 = (VAR_6->w - VAR_14)/2;; VAR_11++) {
            FUNC_6(VAR_5, VAR_1, "%d:%d %c\n", VAR_9, VAR_11, *VAR_7 == '\n' ? 'N' : *VAR_7);
            if (*VAR_7 == '\n') {
                VAR_7++; break;
            } else
                VAR_6->buf[0][VAR_9*VAR_6->w + VAR_11] = FUNC_5(*(VAR_7++)) ? VAR_0 : 0;
        }
    }
    VAR_6->buf_idx = 0;

    return 0;
}
