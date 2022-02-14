
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_7__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_9__ {TYPE_2__ pix; TYPE_1__ pix_mp; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct TYPE_10__ {int name; int type; struct v4l2_format format; } ;
typedef TYPE_4__ V4L2Context ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct v4l2_format*) ;
 int FUNC_4 (struct v4l2_format*) ;

__attribute__((used)) static inline unsigned int FUNC_5(V4L2Context *VAR_1, struct v4l2_format *VAR_2)
{
    struct v4l2_format *VAR_3 = &VAR_1->format;
    int VAR_4 = FUNC_0(VAR_1->type) ?
        VAR_3->fmt.pix_mp.width != VAR_2->fmt.pix_mp.width ||
        VAR_3->fmt.pix_mp.height != VAR_2->fmt.pix_mp.height
        :
        VAR_3->fmt.pix.width != VAR_2->fmt.pix.width ||
        VAR_3->fmt.pix.height != VAR_2->fmt.pix.height;

    if (VAR_4)
        FUNC_1(FUNC_2(VAR_1), VAR_0, "%s changed (%dx%d) -> (%dx%d)\n",
            VAR_1->name,
            FUNC_4(VAR_3), FUNC_3(VAR_3),
            FUNC_4(VAR_2), FUNC_3(VAR_2));

    return VAR_4;
}
