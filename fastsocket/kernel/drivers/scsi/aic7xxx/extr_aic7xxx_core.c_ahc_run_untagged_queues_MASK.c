
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {int * untagged_queues; } ;


 int FUNC_0 (struct ahc_softc*,int *) ;

__attribute__((used)) static void
FUNC_1(struct ahc_softc *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 16; VAR_1++)
  FUNC_0(VAR_0, &VAR_0->untagged_queues[VAR_1]);
}
