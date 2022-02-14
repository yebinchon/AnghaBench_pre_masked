
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {int variant; } ;
struct ni_gpct {int counter_index; struct ni_gpct_device* counter_dev; } ;


 unsigned int const FUNC_0 (int ) ;
 unsigned int const FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_4 (struct ni_gpct const*,int ) ;

__attribute__((used)) static unsigned FUNC_5(const struct ni_gpct *VAR_4)
{
 struct ni_gpct_device *VAR_5 = VAR_4->counter_dev;
 const unsigned VAR_6 = FUNC_4(VAR_4,
         FUNC_2
         (VAR_4->
          counter_index));
 unsigned VAR_7 = 0;

 if (FUNC_4(VAR_4,
     FUNC_3
     (VAR_4->counter_index)) &
     VAR_0)
  VAR_7 |= VAR_1;
 if (VAR_6 & FUNC_0(VAR_5->variant))
  VAR_7 |= VAR_2;
 if (VAR_6 & FUNC_1(VAR_5->variant))
  VAR_7 |= VAR_3;
 return VAR_7;
}
