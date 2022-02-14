
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct virtio_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* desc; } ;
struct TYPE_3__ {int status; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ,unsigned long) ;
 void* VAR_2 ;
 unsigned long VAR_3 ;
 TYPE_2__* FUNC_1 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_2(struct virtio_device *VAR_4, u8 VAR_5)
{
 unsigned long VAR_6 = (void *)FUNC_1(VAR_4)->desc - VAR_2;


 FUNC_1(VAR_4)->desc->status = VAR_5;
 FUNC_0(VAR_0, (VAR_3 << VAR_1) + VAR_6);
}
