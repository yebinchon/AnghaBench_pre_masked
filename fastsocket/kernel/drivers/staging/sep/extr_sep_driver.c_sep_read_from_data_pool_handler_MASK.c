
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_driver_write_t {int num_bytes; int datapool_address; int app_address; } ;
struct sep_device {void* shared_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,void*,unsigned long) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (unsigned long,int *) ;

__attribute__((used)) static int FUNC_3(struct sep_device *VAR_3, unsigned long VAR_4)
{
 int VAR_5;

 unsigned long VAR_6;

 unsigned long VAR_7;
 void *VAR_8;
 unsigned long VAR_9;
 void *VAR_10;

 FUNC_1("SEP Driver:--------> sep_read_from_data_pool_handler start\n");


 VAR_5 = FUNC_2(VAR_6, &(((struct sep_driver_write_t *) VAR_4)->app_address));
 if (VAR_5)
  goto end_function;


 VAR_5 = FUNC_2(VAR_7, &(((struct sep_driver_write_t *) VAR_4)->datapool_address));
 if (VAR_5)
  goto end_function;
 VAR_8 = (void *)VAR_7;


 VAR_5 = FUNC_2(VAR_9, &(((struct sep_driver_write_t *) VAR_4)->num_bytes));
 if (VAR_5)
  goto end_function;


 VAR_10 = VAR_3->shared_addr + VAR_1;




 if (VAR_8 < VAR_10 || VAR_8 > VAR_10 + VAR_2) {
  VAR_5 = -VAR_0;
  goto end_function;
 }


 VAR_5 = FUNC_0((void *) VAR_6, VAR_8, VAR_9);
end_function:
 FUNC_1("SEP Driver:<-------- sep_read_from_data_pool_handler end\n");
 return VAR_5;
}
