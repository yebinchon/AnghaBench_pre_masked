
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_12__ {int pb; } ;
struct TYPE_11__ {TYPE_1__* codecpar; } ;
struct TYPE_10__ {scalar_t__ codec_id; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_3(AVFormatContext *VAR_2, AVStream *VAR_3)
{
    int64_t VAR_4 = FUNC_2(VAR_2, VAR_3, VAR_1);
    FUNC_0(VAR_2->pb, VAR_4);

    if (VAR_3->codecpar->codec_id == VAR_0) {
        FUNC_1(VAR_2, VAR_3);
    }
}
