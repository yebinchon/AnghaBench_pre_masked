
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {scalar_t__ all_image_info_addr; } ;
typedef TYPE_1__ task_dyld_info_data_t ;
struct dyld_all_image_infos {scalar_t__ sharedCacheSlide; scalar_t__ dyldImageLoadAddress; } ;
typedef int mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ,int ,void*,int *) ;

void FUNC_5(void)
{
 task_dyld_info_data_t VAR_3;
 mach_msg_type_number_t VAR_4 = VAR_2;
 kern_return_t VAR_5;
 struct dyld_all_image_infos *VAR_6;

 VAR_5 = FUNC_4(FUNC_2(), VAR_1,
      (void *)&VAR_3, &VAR_4);
 if (VAR_5 != VAR_0)
  FUNC_0(1, "task_info: %s", FUNC_1(VAR_5));

 VAR_6 = (struct dyld_all_image_infos *)(uintptr_t)VAR_3.all_image_info_addr;

 FUNC_3("      dyld load address = 0x%016llx\n", (uint64_t)(uintptr_t)VAR_6->dyldImageLoadAddress);
 FUNC_3("     shared cache slide = 0x%016llx\n", (uint64_t)(uintptr_t)VAR_6->sharedCacheSlide);

}
