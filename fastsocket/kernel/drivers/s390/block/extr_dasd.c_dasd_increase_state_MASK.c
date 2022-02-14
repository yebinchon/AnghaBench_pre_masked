
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {scalar_t__ state; scalar_t__ target; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (struct dasd_device*) ;

__attribute__((used)) static int FUNC_4(struct dasd_device *VAR_7)
{
 int VAR_8;

 VAR_8 = 0;
 if (VAR_7->state == VAR_2 &&
     VAR_7->target >= VAR_1)
  VAR_8 = FUNC_2(VAR_7);

 if (!VAR_8 &&
     VAR_7->state == VAR_1 &&
     VAR_7->target >= VAR_0)
  VAR_8 = FUNC_1(VAR_7);

 if (!VAR_8 &&
     VAR_7->state == VAR_0 &&
     VAR_7->target >= VAR_4)
  VAR_8 = FUNC_0(VAR_7);

 if (!VAR_8 &&
     VAR_7->state == VAR_5 &&
     VAR_7->target > VAR_5)
  VAR_8 = -VAR_6;

 if (!VAR_8 &&
     VAR_7->state == VAR_4 &&
     VAR_7->target >= VAR_3)
  VAR_8 = FUNC_3(VAR_7);

 return VAR_8;
}
