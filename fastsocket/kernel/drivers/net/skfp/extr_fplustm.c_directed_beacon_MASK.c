
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ rbc_ram_start; } ;
struct TYPE_9__ {TYPE_3__ fifo; } ;
struct TYPE_10__ {TYPE_4__ fp; } ;
struct TYPE_7__ {TYPE_1__* m; } ;
struct s_smc {TYPE_5__ hw; TYPE_2__ mib; } ;
struct TYPE_6__ {int fddiMACUpstreamNbr; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_6 ;
 scalar_t__* VAR_7 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (struct s_smc*,int ) ;

__attribute__((used)) static void FUNC_8(struct s_smc *VAR_8)
{
 FUNC_3(VAR_6,VAR_7[2]) ;






 * (char *) VAR_7 = (char) ((long)VAR_1<<24L) ;
 VAR_7[1] = 0 ;
 FUNC_5((char *)VAR_7+1,(char *) &VAR_8->mib.m[VAR_5].fddiMACUpstreamNbr,6) ;

 FUNC_0() ;

 FUNC_2(VAR_8->hw.fp.fifo.rbc_ram_start+VAR_0+4) ;
 FUNC_7(VAR_8,FUNC_4(VAR_7[0])) ;
 FUNC_6(FUNC_1(VAR_2),VAR_3) ;
 FUNC_7(VAR_8,FUNC_4(VAR_7[1])) ;

 FUNC_6(FUNC_1(VAR_4),VAR_8->hw.fp.fifo.rbc_ram_start + VAR_0) ;
}
