
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int flags; int flags2; int extradata_size; int const* extradata; } ;
struct TYPE_8__ {TYPE_1__* parser; } ;
struct TYPE_7__ {int (* split ) (TYPE_3__*,int const*,int) ;} ;
typedef TYPE_2__ AVCodecParserContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (TYPE_3__*,int const*,int) ;

int FUNC_4(AVCodecParserContext *VAR_4, AVCodecContext *VAR_5,
                     uint8_t **VAR_6, int *VAR_7,
                     const uint8_t *VAR_8, int VAR_9, int VAR_10)
{
    if (VAR_4 && VAR_4->parser->split) {
        if (VAR_5->flags & VAR_1 ||
            VAR_5->flags2 & VAR_0) {
            int VAR_11 = VAR_4->parser->split(VAR_5, VAR_8, VAR_9);
            VAR_8 += VAR_11;
            VAR_9 -= VAR_11;
        }
    }


    *VAR_6 = (uint8_t *) VAR_8;
    *VAR_7 = VAR_9;
    if (VAR_5->extradata) {
        if (VAR_10 && (VAR_5->flags2 & VAR_0)) {
            int VAR_12 = VAR_9 + VAR_5->extradata_size;

            *VAR_7 = VAR_12;
            *VAR_6 = FUNC_1(VAR_12 + VAR_2);
            if (!*VAR_6)
                return FUNC_0(VAR_3);

            FUNC_2(*VAR_6, VAR_5->extradata, VAR_5->extradata_size);
            FUNC_2(*VAR_6 + VAR_5->extradata_size, VAR_8,
                   VAR_9 + VAR_2);
            return 1;
        }
    }

    return 0;
}
