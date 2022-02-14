
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* codecpar; } ;
struct TYPE_4__ {int block_align; } ;
typedef int PayloadContext ;
typedef TYPE_2__ AVStream ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *,int ,char*,int) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_2,
                           AVStream *VAR_3, PayloadContext *VAR_4,
                           const char *VAR_5, const char *VAR_6)
{
    if (!FUNC_3(VAR_5, "mode")) {
        int VAR_7 = FUNC_1(VAR_6);
        switch (VAR_7) {
        case 20:
            VAR_3->codecpar->block_align = 38;
            break;
        case 30:
            VAR_3->codecpar->block_align = 50;
            break;
        default:
            FUNC_2(VAR_2, VAR_0, "Unsupported iLBC mode %d\n", VAR_7);
            return FUNC_0(VAR_1);
        }
    }
    return 0;
}
