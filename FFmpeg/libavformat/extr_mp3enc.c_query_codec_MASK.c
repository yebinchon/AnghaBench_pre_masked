
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_3__ {scalar_t__ id; } ;
typedef TYPE_1__ CodecMime ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char,char,char,char) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(enum AVCodecID VAR_2, int VAR_3)
{
    const CodecMime *VAR_4= VAR_1;
    while(VAR_4->id != VAR_0) {
        if(VAR_2 == VAR_4->id)
            return FUNC_0('A', 'P', 'I', 'C');
        VAR_4++;
    }
    return -1;
}
