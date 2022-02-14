
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_4__ {int csr; } ;
struct TYPE_3__ {int dma_len; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,char*,int,char*,unsigned char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_7 ;
 int FUNC_4 (struct Scsi_Host*) ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__* VAR_12 ;
 TYPE_1__* VAR_13 ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (char*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_8 (int,unsigned char*) ;

__attribute__((used)) static int FUNC_9( struct Scsi_Host *VAR_16,
     unsigned char *VAR_17, int *VAR_18,
     unsigned char **VAR_19)
{
    FUNC_4(VAR_16);
    register int VAR_20 = *VAR_18;
    register unsigned char VAR_21 = *VAR_17;
    unsigned long VAR_22;


    if(!VAR_15) {
  FUNC_7("scsi%d: transfer_dma without setup!\n", VAR_1);
  FUNC_0();
    }
    VAR_13->dma_len = VAR_20;

    FUNC_1("scsi%d: initializing DMA for %s, %d bytes %s %p\n",
        VAR_1, (VAR_21 & VAR_8) ? "reading" : "writing",
        VAR_20, (VAR_21 & VAR_8) ? "to" : "from", *VAR_19);


    FUNC_6(VAR_22);


    FUNC_8(VAR_20, *VAR_19);

    if (VAR_21 & VAR_8) {
     FUNC_3(VAR_11, 1);
     FUNC_2(VAR_7);
     FUNC_3(VAR_3, 0);
     FUNC_3(VAR_4, (FUNC_2(VAR_4) | VAR_5 | VAR_6));
     FUNC_3(VAR_9, 0);
    } else {
     FUNC_3(VAR_11, 0);
     FUNC_2(VAR_7);
     FUNC_3(VAR_3, VAR_2);
     FUNC_3(VAR_4, (FUNC_2(VAR_4) | VAR_5 | VAR_6));
     FUNC_3(VAR_10, 0);
    }





    FUNC_5(VAR_22);

    VAR_14 = 1;
    return 0;
}
