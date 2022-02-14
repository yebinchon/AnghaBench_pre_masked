
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aoedev {int rttavg; int rttdev; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static long
FUNC_0(struct aoedev *VAR_2)
{
 long VAR_3;

 VAR_3 = 2 * VAR_2->rttavg >> VAR_1;
 VAR_3 += 8 * VAR_2->rttdev >> VAR_0;
 if (VAR_3 == 0)
  VAR_3 = 1;

 return VAR_3;
}
