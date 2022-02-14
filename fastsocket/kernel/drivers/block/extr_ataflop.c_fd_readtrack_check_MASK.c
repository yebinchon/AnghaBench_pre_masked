
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int spt; } ;
struct TYPE_3__ {int dma_lo; int dma_md; int dma_hi; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 TYPE_2__* VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (int *,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10( unsigned long VAR_11 )
{
 unsigned long VAR_12, VAR_13, VAR_14;

 FUNC_7(VAR_12);

 if (!VAR_4) {






  FUNC_6(VAR_12);
  return;
 }



 VAR_13 = 0;
 do {
  VAR_14 = VAR_13;
  VAR_13 = VAR_7.dma_lo & 0xff;
  FUNC_3();
  VAR_13 |= (VAR_7.dma_md & 0xff) << 8;
  FUNC_3();
  if (FUNC_0( VAR_0 ))
   VAR_13 |= (VAR_10 & 0xffff) << 16;
  else
   VAR_13 |= (VAR_7.dma_hi & 0xff) << 16;
  FUNC_3();
 } while(VAR_13 != VAR_14);

 if (VAR_13 >= VAR_5 + VAR_6->spt*512) {



  FUNC_4( ((void*)0) );
  VAR_4 = 0;
  FUNC_6(VAR_12);
  FUNC_1(("fd_readtrack_check(): done\n"));
  FUNC_2( VAR_2, VAR_1 );
  FUNC_9(25);




  FUNC_5(0);
 }
 else {

  FUNC_6(VAR_12);
  FUNC_1(("fd_readtrack_check(): not yet finished\n"));
  FUNC_8(&VAR_9, VAR_8 + VAR_3/5/10);
 }
}
