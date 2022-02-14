
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int Attributes; int Size; scalar_t__ Base; int AccessSpeed; } ;
typedef TYPE_1__ win_req_t ;
typedef scalar_t__ u_long ;
struct pcmcia_device {int * win; struct net_device* priv; } ;
struct net_device {scalar_t__ mem_start; scalar_t__ mem_end; } ;
struct TYPE_9__ {int flags; int * base; } ;
typedef TYPE_2__ pcnet_dev_t ;
struct TYPE_10__ {int CardOffset; scalar_t__ Page; } ;
typedef TYPE_3__ memreq_t ;
struct TYPE_11__ {int priv; int tx_start_page; int rx_start_page; int stop_page; int * block_output; int * block_input; int * get_8390_hdr; int * mem; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (struct pcmcia_device*,int,int) ;
 TYPE_6__ VAR_8 ;
 int * FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (int *) ;
 int VAR_9 ;
 int FUNC_7 (int *,TYPE_3__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct pcmcia_device**,TYPE_1__*,int **) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct pcmcia_device *VAR_13, int VAR_14,
         int VAR_15, int VAR_16)
{
    struct net_device *VAR_17 = VAR_13->priv;
    pcnet_dev_t *VAR_18 = FUNC_1(VAR_17);
    win_req_t VAR_19;
    memreq_t VAR_20;
    int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;

    VAR_22 = (VAR_15 - VAR_14) << 8;
    if (VAR_22 > 32 * 1024)
 VAR_22 = 32 * 1024;


    VAR_22 = FUNC_11(VAR_22);


    VAR_19.Attributes = VAR_4|VAR_6|VAR_5;
    VAR_19.Attributes |= VAR_7;
    VAR_19.Base = 0; VAR_19.Size = VAR_22;
    VAR_19.AccessSpeed = VAR_9;
    FUNC_0(VAR_1, FUNC_9(&VAR_13, &VAR_19, &VAR_13->win));

    VAR_20.CardOffset = (VAR_14 << 8) + VAR_16;
    VAR_23 = VAR_20.CardOffset % VAR_22;
    VAR_20.CardOffset -= VAR_23;
    VAR_20.Page = 0;
    FUNC_0(VAR_0, FUNC_7(VAR_13->win, &VAR_20));


    VAR_18->base = FUNC_5(VAR_19.Base, VAR_22);
    for (VAR_21 = 0; VAR_21 < (VAR_2<<8); VAR_21 += 2)
 FUNC_3((VAR_21>>1), VAR_18->base+VAR_23+VAR_21);
    FUNC_12(100);
    for (VAR_21 = 0; VAR_21 < (VAR_2<<8); VAR_21 += 2)
 if (FUNC_2(VAR_18->base+VAR_23+VAR_21) != (VAR_21>>1)) break;
    FUNC_10(VAR_17);
    if (VAR_21 != (VAR_2<<8)) {
 FUNC_6(VAR_18->base);
 FUNC_8(VAR_13->win);
 VAR_18->base = ((void*)0); VAR_13->win = ((void*)0);
 goto failed;
    }

    VAR_8.mem = VAR_18->base + VAR_23;
    VAR_8.priv = VAR_19.Size;
    VAR_17->mem_start = (u_long)VAR_8.mem;
    VAR_17->mem_end = VAR_17->mem_start + VAR_19.Size;

    VAR_8.tx_start_page = VAR_14;
    VAR_8.rx_start_page = VAR_14 + VAR_2;
    VAR_8.stop_page = VAR_14 + ((VAR_19.Size - VAR_23) >> 8);


    VAR_8.get_8390_hdr = &VAR_12;
    VAR_8.block_input = &VAR_10;
    VAR_8.block_output = &VAR_11;

    VAR_18->flags |= VAR_3;
    return 0;

cs_failed:
    FUNC_4(VAR_13, VAR_25, VAR_24);
failed:
    return 1;
}
