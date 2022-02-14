
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_encoder_cmd {int flags; int cmd; } ;
typedef int V4L2Context ;
struct TYPE_2__ {int fd; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ,struct v4l2_encoder_cmd*) ;

__attribute__((used)) static int FUNC_4(V4L2Context *VAR_5)
{
    struct v4l2_encoder_cmd VAR_6 = {
        .cmd = VAR_1,
        .flags = 0,
    };
    int VAR_7;

    VAR_7 = FUNC_3(FUNC_1(VAR_5)->fd, VAR_2, &VAR_6);
    if (VAR_7) {

        if (VAR_4 == VAR_0)
            return FUNC_2(VAR_5, VAR_3);
        else
            return FUNC_0(VAR_4);
    }

    return 0;
}
