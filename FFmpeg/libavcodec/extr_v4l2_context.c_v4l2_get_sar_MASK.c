
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int denominator; int numerator; } ;
struct v4l2_cropcap {TYPE_1__ pixelaspect; int type; } ;
struct AVRational {int member_1; int den; int num; int member_0; } ;
typedef int cropcap ;
struct TYPE_7__ {int type; } ;
typedef TYPE_2__ V4L2Context ;
struct TYPE_8__ {int fd; } ;
typedef struct AVRational AVRational ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,struct v4l2_cropcap*) ;
 int FUNC_2 (struct v4l2_cropcap*,int ,int) ;

__attribute__((used)) static AVRational FUNC_3(V4L2Context *VAR_1)
{
    struct AVRational VAR_2 = { 0, 1 };
    struct v4l2_cropcap VAR_3;
    int VAR_4;

    FUNC_2(&VAR_3, 0, sizeof(VAR_3));
    VAR_3.type = VAR_1->type;

    VAR_4 = FUNC_1(FUNC_0(VAR_1)->fd, VAR_0, &VAR_3);
    if (VAR_4)
        return VAR_2;

    VAR_2.num = VAR_3.pixelaspect.numerator;
    VAR_2.den = VAR_3.pixelaspect.denominator;
    return VAR_2;
}
