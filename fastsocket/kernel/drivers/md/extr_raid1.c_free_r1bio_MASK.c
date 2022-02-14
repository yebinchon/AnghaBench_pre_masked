
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r1conf {int r1bio_pool; } ;
struct r1bio {TYPE_1__* mddev; } ;
struct TYPE_2__ {struct r1conf* private; } ;


 int FUNC_0 (struct r1bio*,int ) ;
 int FUNC_1 (struct r1conf*,struct r1bio*) ;

__attribute__((used)) static void FUNC_2(struct r1bio *VAR_0)
{
 struct r1conf *VAR_1 = VAR_0->mddev->private;

 FUNC_1(VAR_1, VAR_0);
 FUNC_0(VAR_0, VAR_1->r1bio_pool);
}
