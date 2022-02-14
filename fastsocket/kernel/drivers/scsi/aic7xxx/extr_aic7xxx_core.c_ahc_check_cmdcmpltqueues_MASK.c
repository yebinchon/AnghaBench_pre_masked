
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct target_cmd {int dummy; } ;
struct ahc_softc {size_t qoutfifonext; scalar_t__* qoutfifo; int flags; size_t tqinfifonext; TYPE_1__* targetcmds; int tqinfifofnext; int shared_data_dmamap; int shared_data_dmat; } ;
struct TYPE_2__ {scalar_t__ cmd_valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct ahc_softc*,int ,int ,size_t,int,int ) ;
 size_t FUNC_1 (struct ahc_softc*,int ) ;

__attribute__((used)) static u_int
FUNC_2(struct ahc_softc *VAR_6)
{
 u_int VAR_7;

 VAR_7 = 0;
 FUNC_0(VAR_6, VAR_6->shared_data_dmat, VAR_6->shared_data_dmamap,
             VAR_6->qoutfifonext, 1,
   VAR_4);
 if (VAR_6->qoutfifo[VAR_6->qoutfifonext] != VAR_5)
  VAR_7 |= VAR_0;
 return (VAR_7);
}
