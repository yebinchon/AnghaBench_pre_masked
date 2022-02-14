
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int function; } ;
struct rt2x00_dev {int txdone_work; TYPE_1__ txstatus_timer; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct rt2x00_dev*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct rt2x00_dev *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  return VAR_3;




 VAR_2->txstatus_timer.function = VAR_0;




 FUNC_0(&VAR_2->txdone_work, VAR_1);

 return 0;
}
