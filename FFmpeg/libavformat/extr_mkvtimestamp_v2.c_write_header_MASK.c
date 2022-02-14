
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * streams; int pb; } ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int ,char const*,int ) ;
 int FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_0)
{
    static const char *VAR_1 = "# timecode format v2\n";
    FUNC_0(VAR_0->pb, VAR_1, FUNC_2(VAR_1));
    FUNC_1(VAR_0->streams[0], 64, 1, 1000);
    return 0;
}
