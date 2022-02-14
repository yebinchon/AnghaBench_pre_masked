
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ no_addr; } ;
struct get_name_filldir {scalar_t__* name; TYPE_1__ inum; } ;
typedef int loff_t ;


 int FUNC_0 (scalar_t__*,char const*,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, const char *VAR_1, int VAR_2,
       loff_t VAR_3, u64 VAR_4, unsigned int VAR_5)
{
 struct get_name_filldir *VAR_6 = VAR_0;

 if (VAR_4 != VAR_6->inum.no_addr)
  return 0;

 FUNC_0(VAR_6->name, VAR_1, VAR_2);
 VAR_6->name[VAR_2] = 0;

 return 1;
}
