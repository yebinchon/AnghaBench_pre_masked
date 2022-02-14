
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sa_state_record {int save_digest; } ;
struct pd_uinfo {scalar_t__ dest_va; scalar_t__ sr_va; } ;
struct TYPE_3__ {scalar_t__ hash_alg; } ;
struct TYPE_4__ {TYPE_1__ bf; } ;
struct dynamic_sa_ctl {TYPE_2__ sa_command_0; } ;
struct crypto4xx_ctx {scalar_t__ sa_in; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,int ) ;

__attribute__((used)) static u32 FUNC_1(struct pd_uinfo *VAR_2,
     struct crypto4xx_ctx *VAR_3)
{
 struct dynamic_sa_ctl *VAR_4 = (struct dynamic_sa_ctl *) VAR_3->sa_in;
 struct sa_state_record *VAR_5 =
    (struct sa_state_record *) VAR_2->sr_va;

 if (VAR_4->sa_command_0.bf.hash_alg == VAR_0) {
  FUNC_0((void *) VAR_2->dest_va, VAR_5->save_digest,
         VAR_1);
 }

 return 0;
}
