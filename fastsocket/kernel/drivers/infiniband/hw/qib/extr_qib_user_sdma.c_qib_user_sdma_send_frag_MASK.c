
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u16 ;
struct qib_user_sdma_pkt {int naddr; TYPE_1__* addr; } ;
struct qib_pportdata {TYPE_2__* sdma_descq; } ;
typedef int __le64 ;
struct TYPE_4__ {int * qw; } ;
struct TYPE_3__ {scalar_t__ length; scalar_t__ offset; scalar_t__ addr; } ;


 int FUNC_0 (struct qib_pportdata*,int const,int const,unsigned int) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct qib_pportdata *VAR_0,
        struct qib_user_sdma_pkt *VAR_1, int VAR_2,
        unsigned VAR_3, u16 VAR_4)
{
 const u64 VAR_5 = (u64) VAR_1->addr[VAR_2].addr +
  (u64) VAR_1->addr[VAR_2].offset;
 const u64 VAR_6 = (u64) VAR_1->addr[VAR_2].length / 4;
 __le64 *VAR_7;
 __le64 VAR_8;

 VAR_7 = &VAR_0->sdma_descq[VAR_4].qw[0];

 VAR_8 = FUNC_0(VAR_0, VAR_5, VAR_6, VAR_3);
 if (VAR_2 == 0)
  VAR_8 = FUNC_2(VAR_8);
 if (VAR_2 == VAR_1->naddr - 1)
  VAR_8 = FUNC_3(VAR_8);

 VAR_7[0] = VAR_8;
 VAR_7[1] = FUNC_1(VAR_5);
}
