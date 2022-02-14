
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct comedi_device {struct device* hw_dev; } ;


 int FUNC_0 (int ) ;
 struct device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static inline void FUNC_3(struct comedi_device *VAR_0,
         struct device *VAR_1)
{
 if (VAR_0->hw_dev)
  FUNC_2(VAR_0->hw_dev);

 VAR_0->hw_dev = VAR_1;
 if (VAR_0->hw_dev) {
  VAR_0->hw_dev = FUNC_1(VAR_0->hw_dev);
  FUNC_0(VAR_0->hw_dev == ((void*)0));
 }
}
