
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hv_util_service {int recv_buffer; } ;
struct TYPE_2__ {int active; } ;


 int FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

int
FUNC_1(struct hv_util_service *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(&VAR_2, VAR_3, VAR_1);
 if (VAR_6)
  return VAR_6;
 VAR_0 = VAR_5->recv_buffer;







 VAR_4.active = 1;
 return 0;
}
