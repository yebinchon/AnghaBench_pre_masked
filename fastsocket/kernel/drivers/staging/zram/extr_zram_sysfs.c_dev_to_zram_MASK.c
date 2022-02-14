
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zram {int disk; } ;
struct device {int dummy; } ;


 struct zram* VAR_0 ;
 struct device* FUNC_0 (int ) ;
 int VAR_1 ;

__attribute__((used)) static struct zram *FUNC_1(struct device *VAR_2)
{
 int VAR_3;
 struct zram *VAR_4 = ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = &VAR_0[VAR_3];
  if (FUNC_0(VAR_4->disk) == VAR_2)
   break;
 }

 return VAR_4;
}
