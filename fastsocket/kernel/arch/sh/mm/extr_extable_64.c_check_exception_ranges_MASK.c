
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exception_table_entry {int dummy; } ;


 struct exception_table_entry const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static const struct exception_table_entry *FUNC_0(unsigned long VAR_3)
{
 if ((VAR_3 >= (unsigned long)&VAR_1) &&
     (VAR_3 <= (unsigned long)&VAR_2))
  return &VAR_0;

 return ((void*)0);
}
