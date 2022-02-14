
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int height; } ;
struct TYPE_4__ {unsigned int height; } ;
struct TYPE_6__ {TYPE_2__ pix; TYPE_1__ pix_mp; } ;
struct v4l2_format {TYPE_3__ fmt; int type; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct v4l2_format *VAR_0)
{
    return FUNC_0(VAR_0->type) ? VAR_0->fmt.pix_mp.height : VAR_0->fmt.pix.height;
}
