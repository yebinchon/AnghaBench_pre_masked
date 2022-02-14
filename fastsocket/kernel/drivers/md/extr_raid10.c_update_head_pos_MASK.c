
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct r10conf {TYPE_2__* mirrors; } ;
struct r10bio {scalar_t__ sectors; TYPE_3__* devs; TYPE_1__* mddev; } ;
struct TYPE_6__ {size_t devnum; scalar_t__ addr; } ;
struct TYPE_5__ {scalar_t__ head_position; } ;
struct TYPE_4__ {struct r10conf* private; } ;



__attribute__((used)) static inline void FUNC_0(int VAR_0, struct r10bio *VAR_1)
{
 struct r10conf *VAR_2 = VAR_1->mddev->private;

 VAR_2->mirrors[VAR_1->devs[VAR_0].devnum].head_position =
  VAR_1->devs[VAR_0].addr + (VAR_1->sectors);
}
