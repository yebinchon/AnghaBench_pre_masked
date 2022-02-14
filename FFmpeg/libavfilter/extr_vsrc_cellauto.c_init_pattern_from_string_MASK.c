
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {char* pattern; int w; double h; int* buf; } ;
typedef TYPE_1__ CellAutoContext ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 double VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,char*,int,...) ;
 int* FUNC_3 (int,double) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_5)
{
    CellAutoContext *VAR_6 = VAR_5->priv;
    char *VAR_7;
    int VAR_8, VAR_9 = 0;

    VAR_9 = FUNC_4(VAR_6->pattern);
    FUNC_2(VAR_5, VAR_0, "w:%d\n", VAR_9);

    if (VAR_6->w) {
        if (VAR_9 > VAR_6->w) {
            FUNC_2(VAR_5, VAR_1,
                   "The specified width is %d which cannot contain the provided string width of %d\n",
                   VAR_6->w, VAR_9);
            return FUNC_0(VAR_2);
        }
    } else {

        VAR_6->w = VAR_9;
        VAR_6->h = (double)VAR_6->w * VAR_4;
    }

    VAR_6->buf = FUNC_3(sizeof(uint8_t) * VAR_6->w, VAR_6->h);
    if (!VAR_6->buf)
        return FUNC_0(VAR_3);


    VAR_7 = VAR_6->pattern;
    for (VAR_8 = (VAR_6->w - VAR_9)/2;; VAR_8++) {
        FUNC_2(VAR_5, VAR_0, "%d %c\n", VAR_8, *VAR_7 == '\n' ? 'N' : *VAR_7);
        if (*VAR_7 == '\n' || !*VAR_7)
            break;
        else
            VAR_6->buf[VAR_8] = !!FUNC_1(*(VAR_7++));
    }

    return 0;
}
