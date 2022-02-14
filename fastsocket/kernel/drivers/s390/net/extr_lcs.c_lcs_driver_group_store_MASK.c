
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_driver {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int driver_id; } ;


 int FUNC_0 (int ,int ,int *,int,char const*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ssize_t
FUNC_1(struct device_driver *VAR_3, const char *VAR_4,
         size_t VAR_5)
{
 int VAR_6;
 VAR_6 = FUNC_0(VAR_2,
       VAR_1.driver_id,
       &VAR_0, 2, VAR_4);
 return VAR_6 ? VAR_6 : VAR_5;
}
