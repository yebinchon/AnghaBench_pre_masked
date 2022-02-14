
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uea_softc {int cmv_ack; int sync_q; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct uea_softc *VAR_0)
{
 FUNC_0(VAR_0->cmv_ack);
 VAR_0->cmv_ack = 1;
 FUNC_1(&VAR_0->sync_q);
}
