
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ioc4_soft {TYPE_1__* is_intr_type; } ;
struct ioc4_intr_info {void* sd_info; int * sd_intr; int sd_bits; } ;
typedef int ioc4_intr_func_f ;
struct TYPE_2__ {struct ioc4_intr_info* is_intr_info; int is_num_intrs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void
FUNC_3(struct ioc4_soft *VAR_3, int VAR_4,
    uint32_t VAR_5, ioc4_intr_func_f * VAR_6, void *VAR_7)
{
 int VAR_8;
 struct ioc4_intr_info *VAR_9;

 FUNC_0(!((VAR_4 == VAR_1)
        || (VAR_4 == VAR_0)));

 VAR_8 = FUNC_1(&VAR_3-> is_intr_type[VAR_4].is_num_intrs) - 1;
 FUNC_0(!(VAR_8 < VAR_2 || (FUNC_2("i %d\n", VAR_8), 0)));


 VAR_9 = &VAR_3->is_intr_type[VAR_4].is_intr_info[VAR_8];
 VAR_9->sd_bits = VAR_5;
 VAR_9->sd_intr = VAR_6;
 VAR_9->sd_info = VAR_7;
}
