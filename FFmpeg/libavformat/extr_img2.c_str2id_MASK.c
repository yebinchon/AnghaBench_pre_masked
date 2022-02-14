
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_3__ {int id; int str; } ;
typedef TYPE_1__ IdStrMap ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static enum AVCodecID FUNC_2(const IdStrMap *VAR_1, const char *VAR_2)
{
    VAR_2 = FUNC_1(VAR_2, '.');
    if (!VAR_2)
        return VAR_0;
    VAR_2++;

    while (VAR_1->id) {
        if (!FUNC_0(VAR_2, VAR_1->str))
            return VAR_1->id;

        VAR_1++;
    }
    return VAR_0;
}
