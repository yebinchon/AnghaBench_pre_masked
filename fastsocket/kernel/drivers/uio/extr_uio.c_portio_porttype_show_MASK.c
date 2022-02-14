
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_port {size_t porttype; } ;
typedef int ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,char*,char const*) ;

__attribute__((used)) static ssize_t FUNC_1(struct uio_port *VAR_2, char *VAR_3)
{
 const char *VAR_4[] = {"none", "x86", "gpio", "other"};

 if ((VAR_2->porttype < 0) || (VAR_2->porttype > VAR_1))
  return -VAR_0;

 return FUNC_0(VAR_3, "port_%s\n", VAR_4[VAR_2->porttype]);
}
