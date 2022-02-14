
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amd64_pvt {scalar_t__ ext_model; TYPE_1__* csels; } ;
struct TYPE_4__ {int x86; } ;
struct TYPE_3__ {int b_cnt; int m_cnt; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct amd64_pvt *VAR_2)
{
 if (VAR_1.x86 == 0xf && VAR_2->ext_model < VAR_0) {
  VAR_2->csels[0].b_cnt = VAR_2->csels[1].b_cnt = 8;
  VAR_2->csels[0].m_cnt = VAR_2->csels[1].m_cnt = 8;
 } else {
  VAR_2->csels[0].b_cnt = VAR_2->csels[1].b_cnt = 8;
  VAR_2->csels[0].m_cnt = VAR_2->csels[1].m_cnt = 4;
 }
}
