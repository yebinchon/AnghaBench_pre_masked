
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct n2rng {int test_data; int flags; int buffer; int work; TYPE_1__* op; } ;
struct hwrng {scalar_t__ priv; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct hwrng *VAR_3, u32 *VAR_4)
{
 struct n2rng *VAR_5 = (struct n2rng *) VAR_3->priv;
 unsigned long VAR_6 = FUNC_0(&VAR_5->test_data);
 int VAR_7;

 if (!(VAR_5->flags & VAR_1)) {
  VAR_7 = 0;
 } else if (VAR_5->flags & VAR_0) {
  VAR_5->flags &= ~VAR_0;
  *VAR_4 = VAR_5->buffer;
  VAR_7 = 4;
 } else {
  int VAR_8 = FUNC_2(VAR_6);
  if (!VAR_8) {
   VAR_5->buffer = VAR_5->test_data >> 32;
   *VAR_4 = VAR_5->test_data & 0xffffffff;
   VAR_7 = 4;
  } else {
   FUNC_1(&VAR_5->op->dev, "RNG error, restesting\n");
   VAR_5->flags &= ~VAR_1;
   if (!(VAR_5->flags & VAR_2))
    FUNC_3(&VAR_5->work, 0);
   VAR_7 = 0;
  }
 }

 return VAR_7;
}
