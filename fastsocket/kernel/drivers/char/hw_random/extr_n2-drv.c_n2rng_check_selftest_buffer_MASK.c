
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct n2rng {TYPE_1__* op; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *,char*,unsigned long) ;
 int FUNC_2 (int *,char*,unsigned long) ;
 int FUNC_3 (struct n2rng*) ;
 scalar_t__ FUNC_4 (struct n2rng*,int ) ;

__attribute__((used)) static int FUNC_5(struct n2rng *VAR_5, unsigned long VAR_6)
{
 u64 VAR_7 = VAR_4;
 int VAR_8, VAR_9, VAR_10;

 VAR_9 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_9 += FUNC_4(VAR_5, VAR_7);
  if (VAR_9 >= VAR_2)
   break;
  VAR_7 = FUNC_0(VAR_3, VAR_7, 1);
 }

 VAR_8 = 0;
 if (VAR_10 >= VAR_1) {
  VAR_8 = -VAR_0;
  FUNC_1(&VAR_5->op->dev, "Selftest failed on unit %lu\n", VAR_6);
  FUNC_3(VAR_5);
 } else
  FUNC_2(&VAR_5->op->dev, "Selftest passed on unit %lu\n", VAR_6);

 return VAR_8;
}
