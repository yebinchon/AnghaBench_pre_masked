
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {TYPE_1__* codecpar; } ;
struct TYPE_4__ {scalar_t__ codec_type; scalar_t__ codec_id; int codec_tag; } ;
typedef TYPE_2__ AVStream ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char,char,char,char) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_3(AVStream *VAR_11, uint32_t VAR_12)
{
    int VAR_13 = FUNC_2(VAR_6, VAR_12);

    if (VAR_13 <= 0 &&
        ((VAR_12 & 0xFFFF) == 'm' + ('s' << 8) ||
         (VAR_12 & 0xFFFF) == 'T' + ('S' << 8)))
        VAR_13 = FUNC_2(VAR_10, FUNC_1(VAR_12) & 0xFFFF);

    if (VAR_11->codecpar->codec_type != VAR_3 && VAR_13 > 0) {
        VAR_11->codecpar->codec_type = VAR_0;
    } else if (VAR_11->codecpar->codec_type != VAR_0 &&

               VAR_12 && VAR_12 != FUNC_0('m','p','4','s')) {
        VAR_13 = FUNC_2(VAR_9, VAR_12);
        if (VAR_13 <= 0)
            VAR_13 = FUNC_2(VAR_5, VAR_12);
        if (VAR_13 > 0)
            VAR_11->codecpar->codec_type = VAR_3;
        else if (VAR_11->codecpar->codec_type == VAR_1 ||
                    (VAR_11->codecpar->codec_type == VAR_2 &&
                    VAR_11->codecpar->codec_id == VAR_4)) {
            VAR_13 = FUNC_2(VAR_8, VAR_12);
            if (VAR_13 > 0)
                VAR_11->codecpar->codec_type = VAR_2;
            else
                VAR_13 = FUNC_2(VAR_7, VAR_12);
        }
    }

    VAR_11->codecpar->codec_tag = VAR_12;

    return VAR_13;
}
