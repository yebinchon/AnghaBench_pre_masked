
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct blkfront_info {unsigned long shadow_free; TYPE_2__* shadow; } ;
struct TYPE_3__ {unsigned long id; } ;
struct TYPE_4__ {TYPE_1__ req; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct blkfront_info *VAR_1)
{
 unsigned long VAR_2 = VAR_1->shadow_free;
 FUNC_0(VAR_2 >= VAR_0);
 VAR_1->shadow_free = VAR_1->shadow[VAR_2].req.id;
 VAR_1->shadow[VAR_2].req.id = 0x0fffffee;
 return VAR_2;
}
