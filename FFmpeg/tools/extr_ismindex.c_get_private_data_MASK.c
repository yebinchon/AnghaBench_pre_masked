
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct Track {int codec_private; scalar_t__ codec_private_size; } ;
struct TYPE_3__ {scalar_t__ extradata_size; int extradata; } ;
typedef TYPE_1__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct Track *VAR_1, AVCodecParameters *VAR_2)
{
    VAR_1->codec_private_size = 0;
    VAR_1->codec_private = FUNC_1(VAR_2->extradata_size);
    if (!VAR_1->codec_private)
        return FUNC_0(VAR_0);
    VAR_1->codec_private_size = VAR_2->extradata_size;
    FUNC_2(VAR_1->codec_private, VAR_2->extradata, VAR_2->extradata_size);
    return 0;
}
