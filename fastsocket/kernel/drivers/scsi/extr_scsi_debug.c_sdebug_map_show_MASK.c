
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,char*,int ) ;
 int FUNC_2 () ;
 int VAR_3 ;

__attribute__((used)) static ssize_t FUNC_3(struct device_driver *VAR_4, char *VAR_5)
{
 ssize_t VAR_6;

 if (!FUNC_2())
  return FUNC_1(VAR_5, VAR_0, "0-%u\n",
     VAR_3);

 VAR_6 = FUNC_0(VAR_5, VAR_0, VAR_2, VAR_1);

 VAR_5[VAR_6++] = '\n';
 VAR_5[VAR_6++] = 0;

 return VAR_6;
}
