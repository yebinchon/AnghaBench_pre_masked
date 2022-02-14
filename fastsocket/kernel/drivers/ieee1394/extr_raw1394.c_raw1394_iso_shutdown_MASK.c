
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {int iso_state; int * iso_handle; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct file_info *VAR_1)
{
 if (VAR_1->iso_handle)
  FUNC_0(VAR_1->iso_handle);

 VAR_1->iso_handle = ((void*)0);
 VAR_1->iso_state = VAR_0;
}
