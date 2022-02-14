
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dev_state {TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;


 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct dev_state*,unsigned int) ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct dev_state *VAR_7, unsigned int VAR_8,
      unsigned int VAR_9)
{
 int VAR_10 = 0;

 if (VAR_7->dev->state != VAR_4
  && VAR_7->dev->state != VAR_2
  && VAR_7->dev->state != VAR_3)
  return -VAR_0;
 if (VAR_6 == (VAR_5 & VAR_8))
  return 0;

 VAR_9 &= 0xff;
 switch (VAR_8 & VAR_1) {
 case 129:
  VAR_10 = FUNC_1(VAR_7->dev, VAR_9);
  if (VAR_10 >= 0)
   VAR_10 = FUNC_0(VAR_7, VAR_10);
  break;

 case 128:
  VAR_10 = FUNC_0(VAR_7, VAR_9);
  break;
 }
 return VAR_10;
}
