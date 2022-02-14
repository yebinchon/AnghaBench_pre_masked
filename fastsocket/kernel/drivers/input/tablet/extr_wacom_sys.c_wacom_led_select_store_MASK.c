
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* select; } ;
struct wacom {int lock; TYPE_1__ led; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct wacom* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (char const*,int *,int ) ;
 int FUNC_4 (struct wacom*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0, int VAR_1,
          const char *VAR_2, size_t VAR_3)
{
 struct wacom *VAR_4 = FUNC_0(VAR_0);
 unsigned int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_2, ((void*)0), 0);

 FUNC_1(&VAR_4->lock);

 VAR_4->led.select[VAR_1] = VAR_5 & 0x3;
 VAR_6 = FUNC_4(VAR_4);

 FUNC_2(&VAR_4->lock);

 return VAR_6 < 0 ? VAR_6 : VAR_3;
}
