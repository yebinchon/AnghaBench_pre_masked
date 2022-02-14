
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_1__* objects; } ;
struct TYPE_4__ {int fd; } ;
typedef TYPE_2__ AVDRMFrameDescriptor ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, uint8_t *VAR_1)
{
    AVDRMFrameDescriptor *VAR_2 = (AVDRMFrameDescriptor*)VAR_1;

    FUNC_1(VAR_2->objects[0].fd);

    FUNC_0(VAR_2);
}
