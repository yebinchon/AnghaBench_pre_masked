
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int f; } ;
struct TYPE_5__ {TYPE_1__ tf; } ;
typedef TYPE_2__ VP9Frame ;
typedef int VASurfaceID ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static VASurfaceID FUNC_1(const VP9Frame *VAR_1)
{
    if (VAR_1)
        return FUNC_0(VAR_1->tf.f);
    else
        return VAR_0;
}
