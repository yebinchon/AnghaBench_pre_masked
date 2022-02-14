
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; int * bus; } ;
struct maple_device {int port; int unit; int maple_wait; TYPE_1__ dev; int mq; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct maple_device*) ;
 struct maple_device* FUNC_2 (int,int ) ;
 int FUNC_3 (struct maple_device*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct maple_device *FUNC_4(int VAR_3, int VAR_4)
{
 struct maple_device *VAR_5;




 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->port = VAR_3;
 VAR_5->unit = VAR_4;

 VAR_5->mq = FUNC_3(VAR_5);

 if (!VAR_5->mq) {
  FUNC_1(VAR_5);
  return ((void*)0);
 }
 VAR_5->dev.bus = &VAR_2;
 VAR_5->dev.parent = &VAR_1;
 FUNC_0(&VAR_5->maple_wait);
 return VAR_5;
}
