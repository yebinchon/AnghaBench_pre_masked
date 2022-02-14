
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si470x_device {unsigned short* registers; TYPE_1__* videodev; } ;
struct TYPE_2__ {int dev; } ;


 size_t VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 unsigned long VAR_5 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (struct si470x_device*,size_t) ;
 int FUNC_3 (struct si470x_device*,size_t) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(struct si470x_device *VAR_7, unsigned short VAR_8)
{
 int VAR_9;
 unsigned long VAR_10;
 bool VAR_11 = 0;


 VAR_7->registers[VAR_0] &= ~VAR_1;
 VAR_7->registers[VAR_0] |= VAR_2 | VAR_8;
 VAR_9 = FUNC_3(VAR_7, VAR_0);
 if (VAR_9 < 0)
  goto done;


 VAR_10 = VAR_5 + FUNC_1(VAR_6);
 do {
  VAR_9 = FUNC_2(VAR_7, VAR_3);
  if (VAR_9 < 0)
   goto stop;
  VAR_11 = FUNC_4(VAR_5, VAR_10);
 } while (((VAR_7->registers[VAR_3] & VAR_4) == 0) &&
  (!VAR_11));
 if ((VAR_7->registers[VAR_3] & VAR_4) == 0)
  FUNC_0(&VAR_7->videodev->dev, "tune does not complete\n");
 if (VAR_11)
  FUNC_0(&VAR_7->videodev->dev,
   "tune timed out after %u ms\n", VAR_6);

stop:

 VAR_7->registers[VAR_0] &= ~VAR_2;
 VAR_9 = FUNC_3(VAR_7, VAR_0);

done:
 return VAR_9;
}
