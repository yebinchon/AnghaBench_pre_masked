
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int video_codec_id; } ;
struct TYPE_4__ {TYPE_3__* fc; } ;
typedef TYPE_1__ MOVContext ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char,char,char,char) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(MOVContext *VAR_2, AVIOContext *VAR_3,
                                  int VAR_4, int VAR_5,
                                  int64_t VAR_6)
{
    int VAR_7 = FUNC_4(VAR_1, VAR_5);

    if (VAR_4 &&
         (VAR_4 != VAR_5 &&

          (VAR_4 != FUNC_0("AV1x") || VAR_5 != FUNC_0("AVup")) &&

          VAR_4 != FUNC_0("apcn") && VAR_4 != FUNC_0("apch") &&

          VAR_4 != FUNC_0("dvpp") && VAR_4 != FUNC_0("dvcp") &&
          (VAR_2->fc->video_codec_id ? VAR_7 != VAR_2->fc->video_codec_id
                                 : VAR_4 != FUNC_1('j','p','e','g')))) {




        FUNC_2(VAR_2->fc, VAR_0, "multiple fourcc not supported\n");
        FUNC_3(VAR_3, VAR_6);
        return 1;
    }

    return 0;
}
