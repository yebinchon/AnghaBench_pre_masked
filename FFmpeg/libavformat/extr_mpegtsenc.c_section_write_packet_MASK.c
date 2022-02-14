
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int pb; } ;
struct TYPE_5__ {TYPE_2__* opaque; } ;
typedef TYPE_1__ MpegTSSection ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(MpegTSSection *VAR_1, const uint8_t *VAR_2)
{
    AVFormatContext *VAR_3 = VAR_1->opaque;
    FUNC_1(VAR_3);
    FUNC_0(VAR_3->pb, VAR_2, VAR_0);
}
