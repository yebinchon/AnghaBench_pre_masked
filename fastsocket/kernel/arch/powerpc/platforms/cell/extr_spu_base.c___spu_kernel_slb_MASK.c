
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct spu_slb {int vsid; unsigned long esid; } ;
struct TYPE_2__ {int sllp; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (unsigned long,int ) ;
 size_t VAR_6 ;
 TYPE_1__* VAR_7 ;
 size_t VAR_8 ;

__attribute__((used)) static void FUNC_2(void *VAR_9, struct spu_slb *VAR_10)
{
 unsigned long VAR_11 = (unsigned long)VAR_9;
 u64 VAR_12;

 if (FUNC_0(VAR_11) == VAR_1)
  VAR_12 = VAR_7[VAR_6].sllp;
 else
  VAR_12 = VAR_7[VAR_8].sllp;

 VAR_10->vsid = (FUNC_1(VAR_11, VAR_2) << VAR_5) |
  VAR_4 | VAR_12;
 VAR_10->esid = (VAR_11 & VAR_0) | VAR_3;
}
