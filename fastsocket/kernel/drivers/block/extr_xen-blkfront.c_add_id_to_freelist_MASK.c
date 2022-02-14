
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct blkfront_info {unsigned long shadow_free; TYPE_2__* shadow; } ;
struct TYPE_3__ {unsigned long id; } ;
struct TYPE_4__ {scalar_t__ request; TYPE_1__ req; } ;



__attribute__((used)) static void FUNC_0(struct blkfront_info *VAR_0,
          unsigned long VAR_1)
{
 VAR_0->shadow[VAR_1].req.id = VAR_0->shadow_free;
 VAR_0->shadow[VAR_1].request = 0;
 VAR_0->shadow_free = VAR_1;
}
