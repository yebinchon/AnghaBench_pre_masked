
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w9968cf_device {int dummy; } ;
struct ovcamchip_control {int id; int value; } ;


 int VAR_0 ;
 int FUNC_0 (struct w9968cf_device*,int ,struct ovcamchip_control*) ;

__attribute__((used)) static int
FUNC_1(struct w9968cf_device* VAR_1, int VAR_2, int* VAR_3)
{
 struct ovcamchip_control VAR_4;
 int VAR_5;

 VAR_4.id = VAR_2;

 VAR_5 = FUNC_0(VAR_1, VAR_0, &VAR_4);
 if (!VAR_5)
  *VAR_3 = VAR_4.value;

 return VAR_5;
}
