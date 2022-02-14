
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ogg_stream {int bufpos; int pstart; int * buf; scalar_t__ bufsize; } ;
struct ogg {struct ogg_stream* streams; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static int FUNC_4(struct ogg *VAR_2, int VAR_3)
{
    struct ogg_stream *VAR_4 = VAR_2->streams + VAR_3;
    uint8_t *VAR_5 = FUNC_2(VAR_4->bufsize + VAR_0);
    int VAR_6 = VAR_4->bufpos - VAR_4->pstart;

    if (!VAR_5)
        return FUNC_0(VAR_1);

    if (VAR_4->buf) {
        FUNC_3(VAR_5, VAR_4->buf + VAR_4->pstart, VAR_6);
        FUNC_1(VAR_4->buf);
    }

    VAR_4->buf = VAR_5;
    VAR_4->bufpos = VAR_6;
    VAR_4->pstart = 0;

    return 0;
}
