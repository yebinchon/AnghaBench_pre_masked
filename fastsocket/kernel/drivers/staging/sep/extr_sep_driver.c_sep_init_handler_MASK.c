
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_driver_init_t {unsigned long message_size_in_words; scalar_t__ message_addr; } ;
struct sep_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_0 (struct sep_driver_init_t*,void*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (unsigned long,unsigned long*) ;
 unsigned long FUNC_4 (struct sep_device*,int) ;
 int FUNC_5 (struct sep_device*) ;
 int FUNC_6 (struct sep_device*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct sep_device *VAR_6, unsigned long VAR_7)
{
 unsigned long VAR_8;
 unsigned long *VAR_9;
 struct sep_driver_init_t VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13;

 FUNC_1("SEP Driver:--------> sep_init_handler start\n");
 VAR_12 = 0;

 VAR_12 = FUNC_0(&VAR_10, (void *) VAR_7, sizeof(struct sep_driver_init_t));

 FUNC_1("SEP Driver:--------> sep_init_handler - finished copy_from_user \n");

 if (VAR_12)
  goto end_function;




 FUNC_1("SEP Driver:--------> sep_init_handler - finished sep_configure_dma_burst \n");

 VAR_9 = (unsigned long *) VAR_10.message_addr;


 FUNC_6(VAR_6, VAR_4, VAR_0);

 for (VAR_11 = 0; VAR_11 < VAR_10.message_size_in_words; VAR_11++, VAR_9++) {
  FUNC_3(VAR_8, VAR_9);

  FUNC_6(VAR_6, VAR_5, VAR_8);
  FUNC_2("SEP Driver:message_word is %lu\n", VAR_8);

  FUNC_5(VAR_6);
 }
 FUNC_1("SEP Driver:--------> sep_init_handler - finished getting messages from user space\n");

 FUNC_6(VAR_6, VAR_1, 0x1);

 do
  VAR_13 = FUNC_4(VAR_6, VAR_3);
 while (!(VAR_13 & 0xFFFFFFFD));

 FUNC_1("SEP Driver:--------> sep_init_handler - finished waiting for reg_val & 0xFFFFFFFD \n");


 if (VAR_13 == 0x1) {
  FUNC_2("SEP Driver:init failed\n");

  VAR_12 = FUNC_4(VAR_6, 0x8060);
  FUNC_2("SEP Driver:sw monitor is %lu\n", VAR_12);


  VAR_12 = FUNC_4(VAR_6, VAR_2);
  FUNC_2("SEP Driver:error is %lu\n", VAR_12);
 }
end_function:
 FUNC_1("SEP Driver:<-------- sep_init_handler end\n");
 return VAR_12;

}
