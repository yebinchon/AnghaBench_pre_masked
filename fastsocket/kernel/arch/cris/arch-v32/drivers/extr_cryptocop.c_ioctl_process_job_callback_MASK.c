
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioctl_job_cb_ctx {int processed; } ;
struct cryptocop_operation {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,struct cryptocop_operation*,void*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct cryptocop_operation *VAR_1, void*VAR_2)
{
 struct ioctl_job_cb_ctx *VAR_3 = (struct ioctl_job_cb_ctx *)VAR_2;

 FUNC_0(FUNC_1("ioctl_process_job_callback: op=0x%p, cb_data=0x%p\n", VAR_1, VAR_2));

 VAR_3->processed = 1;
 FUNC_2(&VAR_0);
}
