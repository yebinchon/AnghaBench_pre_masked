
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mbox_t ;
typedef int mbox64_t ;
struct TYPE_8__ {int una_mbox64_dma; int mbox_dma; int flag; TYPE_1__* host; TYPE_3__* una_mbox64; int * mbox; int * mbox64; int dev; } ;
typedef TYPE_2__ adapter_t ;
struct TYPE_9__ {int mbox; } ;
struct TYPE_7__ {scalar_t__ io_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int,scalar_t__) ;
 TYPE_3__* FUNC_3 (int ,int,int*) ;

__attribute__((used)) static int
FUNC_4(adapter_t *VAR_7)
{
 unsigned long VAR_8;

 VAR_7->una_mbox64 = FUNC_3(VAR_7->dev,
   sizeof(mbox64_t), &VAR_7->una_mbox64_dma);

 if( !VAR_7->una_mbox64 ) return -1;

 VAR_7->mbox = &VAR_7->una_mbox64->mbox;

 VAR_7->mbox = (mbox_t *)((((unsigned long) VAR_7->mbox) + 15) &
   (~0UL ^ 0xFUL));

 VAR_7->mbox64 = (mbox64_t *)(((unsigned long)VAR_7->mbox) - 8);

 VAR_8 = ((void *)VAR_7->mbox) - ((void *)&VAR_7->una_mbox64->mbox);

 VAR_7->mbox_dma = VAR_7->una_mbox64_dma + 8 + VAR_8;




 if( VAR_7->flag & VAR_0 ) {

  FUNC_2(VAR_7->mbox_dma & 0xFF,
    VAR_7->host->io_port + VAR_3);

  FUNC_2((VAR_7->mbox_dma >> 8) & 0xFF,
    VAR_7->host->io_port + VAR_4);

  FUNC_2((VAR_7->mbox_dma >> 16) & 0xFF,
    VAR_7->host->io_port + VAR_5);

  FUNC_2((VAR_7->mbox_dma >> 24) & 0xFF,
    VAR_7->host->io_port + VAR_6);

  FUNC_2(VAR_1,
    VAR_7->host->io_port + VAR_2);

  FUNC_0(VAR_7);

  FUNC_1(VAR_7);
 }

 return 0;
}
