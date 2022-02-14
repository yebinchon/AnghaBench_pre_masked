
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; int * class; } ;
struct memstick_host {TYPE_1__ dev; int media_checker; int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 struct memstick_host* FUNC_2 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

struct memstick_host *FUNC_4(unsigned int VAR_3,
       struct device *VAR_4)
{
 struct memstick_host *VAR_5;

 VAR_5 = FUNC_2(sizeof(struct memstick_host) + VAR_3, VAR_0);
 if (VAR_5) {
  FUNC_3(&VAR_5->lock);
  FUNC_0(&VAR_5->media_checker, VAR_1);
  VAR_5->dev.class = &VAR_2;
  VAR_5->dev.parent = VAR_4;
  FUNC_1(&VAR_5->dev);
 }
 return VAR_5;
}
