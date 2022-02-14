
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct restore_data_record {scalar_t__ magic; int cr3; int jump_address; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(void *VAR_4)
{
 struct restore_data_record *VAR_5 = VAR_4;

 VAR_3 = VAR_5->jump_address;
 VAR_2 = VAR_5->cr3;
 return (VAR_5->magic == VAR_1) ? 0 : -VAR_0;
}
