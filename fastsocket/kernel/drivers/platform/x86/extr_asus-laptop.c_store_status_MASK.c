
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int acpi_handle ;


 int FUNC_0 (char const*,size_t,int*) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static ssize_t FUNC_2(const char *VAR_0, size_t VAR_1,
       acpi_handle VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 int VAR_6 = 0;

 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_5);
 if (VAR_4 > 0)
  VAR_6 = VAR_5 ? 1 : 0;

 FUNC_1(VAR_2, VAR_6, VAR_3);

 return VAR_4;
}
