
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftp_parselist_data {int file_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ftp_parselist_data*) ;

void FUNC_2(struct ftp_parselist_data **VAR_0)
{
  struct ftp_parselist_data *VAR_1 = *VAR_0;
  if(VAR_1)
    FUNC_0(VAR_1->file_data);
  FUNC_1(VAR_1);
  *VAR_0 = ((void*)0);
}
