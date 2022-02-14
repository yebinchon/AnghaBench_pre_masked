
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int complete; } ;
struct ahash_request {TYPE_1__ base; } ;
struct TYPE_4__ {int (* final ) (struct ahash_request*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahash_request*,int) ;
 TYPE_2__* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_2, int VAR_3)
{
 if (VAR_3)
  goto out;

 VAR_2->base.complete = VAR_1;
 VAR_2->base.flags &= ~VAR_0;
 VAR_3 = FUNC_1(VAR_2)->final(VAR_2);

out:
 FUNC_0(VAR_2, VAR_3);
 return VAR_3;
}
