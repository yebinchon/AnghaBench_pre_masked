
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pf_vf_bulletin_content {int length; int crc; int version; } ;
struct bnx2x {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {scalar_t__ mapping; } ;


 struct pf_vf_bulletin_content* FUNC_0 (struct bnx2x*,int) ;
 TYPE_1__* FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct bnx2x*,int,scalar_t__,scalar_t__,int ,int ,int) ;
 int FUNC_5 (struct bnx2x*,struct pf_vf_bulletin_content*) ;
 scalar_t__ FUNC_6 (struct bnx2x*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_7(struct bnx2x *VAR_6, int VAR_7)
{
 struct pf_vf_bulletin_content *VAR_8 = FUNC_0(VAR_6, VAR_7);
 dma_addr_t VAR_9 = FUNC_1(VAR_6)->mapping +
  VAR_7 * VAR_0;
 dma_addr_t VAR_10 = FUNC_6(VAR_6, VAR_7, VAR_4);
 int VAR_11;


 if (FUNC_6(VAR_6, VAR_7, VAR_5) != VAR_2 &&
     FUNC_6(VAR_6, VAR_7, VAR_5) != VAR_1)
  return 0;


 VAR_8->version++;
 VAR_8->length = VAR_0;
 VAR_8->crc = FUNC_5(VAR_6, VAR_8);


 VAR_11 = FUNC_4(VAR_6, 0, VAR_9,
      FUNC_6(VAR_6, VAR_7, VAR_3), FUNC_2(VAR_10),
      FUNC_3(VAR_10), VAR_8->length / 4);
 return VAR_11;
}
