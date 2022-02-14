
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct net_device*,char*) ;
 struct net_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, char *VAR_1,
    ssize_t(*VAR_2) (struct net_device *, char *))
{
 ssize_t VAR_3;


 FUNC_0();
 VAR_3 = (*VAR_2) (FUNC_3(VAR_0), VAR_1);
 FUNC_1();
 return VAR_3;
}
