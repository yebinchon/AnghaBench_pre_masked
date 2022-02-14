
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dc1394_data {int d; int camera; } ;
struct TYPE_3__ {struct dc1394_data* priv_data; } ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext * VAR_1)
{
    struct dc1394_data *VAR_2 = VAR_1->priv_data;

    FUNC_3(VAR_2->camera, VAR_0);
    FUNC_1(VAR_2->camera);
    FUNC_0(VAR_2->camera);
    FUNC_2(VAR_2->d);

    return 0;
}
