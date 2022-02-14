
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si470x_device {int* registers; TYPE_1__* videodev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,...) ;
 unsigned long VAR_8 ;
 unsigned long FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (struct si470x_device*,size_t) ;
 int FUNC_3 (struct si470x_device*,size_t) ;
 int FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct si470x_device *VAR_10,
  unsigned int VAR_11, unsigned int VAR_12)
{
 int VAR_13 = 0;
 unsigned long VAR_14;
 bool VAR_15 = 0;


 VAR_10->registers[VAR_1] |= VAR_2;
 if (VAR_11 == 1)
  VAR_10->registers[VAR_1] &= ~VAR_4;
 else
  VAR_10->registers[VAR_1] |= VAR_4;
 if (VAR_12 == 1)
  VAR_10->registers[VAR_1] |= VAR_3;
 else
  VAR_10->registers[VAR_1] &= ~VAR_3;
 VAR_13 = FUNC_3(VAR_10, VAR_1);
 if (VAR_13 < 0)
  goto done;


 VAR_14 = VAR_8 + FUNC_1(VAR_9);
 do {
  VAR_13 = FUNC_2(VAR_10, VAR_5);
  if (VAR_13 < 0)
   goto stop;
  VAR_15 = FUNC_4(VAR_8, VAR_14);
 } while (((VAR_10->registers[VAR_5] & VAR_7) == 0) &&
  (!VAR_15));
 if ((VAR_10->registers[VAR_5] & VAR_7) == 0)
  FUNC_0(&VAR_10->videodev->dev, "seek does not complete\n");
 if (VAR_10->registers[VAR_5] & VAR_6)
  FUNC_0(&VAR_10->videodev->dev,
   "seek failed / band limit reached\n");
 if (VAR_15)
  FUNC_0(&VAR_10->videodev->dev,
   "seek timed out after %u ms\n", VAR_9);

stop:

 VAR_10->registers[VAR_1] &= ~VAR_2;
 VAR_13 = FUNC_3(VAR_10, VAR_1);

done:

 if ((VAR_13 == 0) && VAR_15)
  VAR_13 = -VAR_0;

 return VAR_13;
}
