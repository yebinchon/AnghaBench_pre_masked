
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int recv_bulk_pipe; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (struct us_data*,int ,void*,unsigned int,int,int *) ;

__attribute__((used)) static int FUNC_2(struct us_data *VAR_1,
      void* VAR_2,
      unsigned int VAR_3,
      int VAR_4)
{
 if (VAR_3 == 0)
  return VAR_0;

 FUNC_0("usbat_bulk_read: len = %d\n", VAR_3);
 return FUNC_1(VAR_1, VAR_1->recv_bulk_pipe, VAR_2, VAR_3, VAR_4, ((void*)0));
}
