
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ id; } ;
struct TYPE_4__ {int essence_codec_ul; int essence_container_ul; } ;
typedef TYPE_1__ MXFDescriptor ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(MXFDescriptor *VAR_3)
{
    return FUNC_0(VAR_1,
                            &VAR_3->essence_container_ul)->id != VAR_0 ||
           FUNC_0(VAR_2,
                            &VAR_3->essence_codec_ul)->id != VAR_0;
}
