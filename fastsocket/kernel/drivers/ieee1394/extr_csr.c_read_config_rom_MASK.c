
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_2__ {int rom; } ;
struct hpsb_host {TYPE_1__ csr; } ;
typedef int quadlet_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int *,size_t) ;

__attribute__((used)) static int FUNC_1(struct hpsb_host *VAR_4, int VAR_5, quadlet_t *VAR_6,
      u64 VAR_7, size_t VAR_8, u16 VAR_9)
{
 u32 VAR_10 = VAR_7 - VAR_0;

 if (FUNC_0(VAR_4->csr.rom, VAR_10, VAR_6, VAR_8) == VAR_1)
  return VAR_3;
 else
  return VAR_2;
}
