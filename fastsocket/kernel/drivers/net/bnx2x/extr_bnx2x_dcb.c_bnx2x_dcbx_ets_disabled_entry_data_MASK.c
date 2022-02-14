
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cos_help_data {int num_of_cos; TYPE_1__* data; } ;
struct bnx2x {int dummy; } ;
struct TYPE_2__ {int cos_bw; int pri_join_mask; int pausable; } ;


 int FUNC_0 (struct bnx2x*,int ) ;

__attribute__((used)) static void FUNC_1(struct bnx2x *VAR_0,
            struct cos_help_data *VAR_1,
            u32 VAR_2)
{

 VAR_1->data[0].pausable =
  FUNC_0(VAR_0, VAR_2);
 VAR_1->data[0].pri_join_mask = VAR_2;
 VAR_1->data[0].cos_bw = 100;
 VAR_1->num_of_cos = 1;
}
