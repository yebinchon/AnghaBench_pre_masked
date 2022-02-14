
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sclp_req {int dummy; } ;
struct sccb_header {int* control_mask; scalar_t__ function_code; int length; } ;
struct TYPE_3__ {struct sccb_header* sccb; int callback; scalar_t__ start_count; int status; int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sccb_header*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_2(void)
{
 struct sccb_header *VAR_6;

 VAR_6 = (struct sccb_header *) VAR_5;
 FUNC_0(VAR_6);
 FUNC_1(&VAR_4, 0, sizeof(struct sclp_req));
 VAR_4.command = VAR_1;
 VAR_4.status = VAR_2;
 VAR_4.start_count = 0;
 VAR_4.callback = VAR_3;
 VAR_4.sccb = VAR_6;
 VAR_6->length = VAR_0;
 VAR_6->function_code = 0;
 VAR_6->control_mask[2] = 0x80;
}
