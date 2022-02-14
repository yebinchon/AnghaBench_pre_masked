
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r1conf {TYPE_2__* mirrors; } ;
struct r1bio {scalar_t__ sectors; scalar_t__ sector; TYPE_1__* mddev; } ;
struct TYPE_4__ {scalar_t__ head_position; } ;
struct TYPE_3__ {struct r1conf* private; } ;



__attribute__((used)) static inline void FUNC_0(int VAR_0, struct r1bio *VAR_1)
{
 struct r1conf *VAR_2 = VAR_1->mddev->private;

 VAR_2->mirrors[VAR_0].head_position =
  VAR_1->sector + (VAR_1->sectors);
}
