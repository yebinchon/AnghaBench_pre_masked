
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_port_info {int dummy; } ;
struct ide_hw {int dummy; } ;
struct ide_host {int dummy; } ;


 int VAR_0 ;
 struct ide_host* FUNC_0 (struct ide_port_info const*,struct ide_hw**,unsigned int) ;
 int FUNC_1 (struct ide_host*) ;
 int FUNC_2 (struct ide_host*,struct ide_port_info const*,struct ide_hw**) ;

int FUNC_3(const struct ide_port_info *VAR_1, struct ide_hw **VAR_2,
   unsigned int VAR_3, struct ide_host **VAR_4)
{
 struct ide_host *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_5, VAR_1, VAR_2);
 if (VAR_6) {
  FUNC_1(VAR_5);
  return VAR_6;
 }

 if (VAR_4)
  *VAR_4 = VAR_5;

 return 0;
}
