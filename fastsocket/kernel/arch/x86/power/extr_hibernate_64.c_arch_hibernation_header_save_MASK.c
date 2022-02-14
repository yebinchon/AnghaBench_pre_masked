
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct restore_data_record {int magic; int cr3; int jump_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(void *VAR_4, unsigned int VAR_5)
{
 struct restore_data_record *VAR_6 = VAR_4;

 if (VAR_5 < sizeof(struct restore_data_record))
  return -VAR_0;
 VAR_6->jump_address = VAR_3;
 VAR_6->cr3 = VAR_2;
 VAR_6->magic = VAR_1;
 return 0;
}
