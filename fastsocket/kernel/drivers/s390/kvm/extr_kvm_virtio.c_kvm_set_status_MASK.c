
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct virtio_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* desc; } ;
struct TYPE_3__ {scalar_t__ status; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned long) ;
 TYPE_2__* FUNC_2 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_3(struct virtio_device *VAR_1, u8 VAR_2)
{
 FUNC_0(!VAR_2);
 FUNC_2(VAR_1)->desc->status = VAR_2;
 FUNC_1(VAR_0,
         (unsigned long) FUNC_2(VAR_1)->desc);
}
