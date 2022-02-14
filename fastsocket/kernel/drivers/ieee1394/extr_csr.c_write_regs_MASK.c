
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct TYPE_4__ {int node_ids; int split_timeout_hi; int split_timeout_lo; int cycle_time; int bus_time; int broadcast_channel; } ;
struct hpsb_host {int node_id; TYPE_2__ csr; TYPE_1__* driver; } ;
typedef int quadlet_t ;
struct TYPE_3__ {int (* devctl ) (struct hpsb_host*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct hpsb_host*,int ,int) ;
 int FUNC_4 (struct hpsb_host*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct hpsb_host *VAR_9, int VAR_10, int VAR_11,
        quadlet_t *VAR_12, u64 VAR_13, size_t VAR_14, u16 VAR_15)
{
        int VAR_16 = VAR_13 - VAR_1;

        if ((VAR_16 | VAR_14) & 0x3)
                return VAR_5;

        VAR_14 /= 4;

        switch (VAR_16) {
        case 129:

                FUNC_2("doh, someone wants to mess with state clear\n");
                VAR_8;
        case 128:
                FUNC_2("doh, someone wants to mess with state set\n");
                VAR_8;

        case 133:
                VAR_9->csr.node_ids &= VAR_2 << 16;
                VAR_9->csr.node_ids |= FUNC_0(*(VAR_12++)) & (VAR_0 << 16);
                VAR_9->node_id = VAR_9->csr.node_ids >> 16;
                VAR_9->driver->devctl(VAR_9, VAR_6, VAR_9->node_id >> 6);
                VAR_8;

        case 132:

                VAR_8;


                return VAR_3;

        case 131:
                VAR_9->csr.split_timeout_hi =
                        FUNC_0(*(VAR_12++)) & 0x00000007;
  FUNC_1(&VAR_9->csr);
                VAR_8;
        case 130:
                VAR_9->csr.split_timeout_lo =
                        FUNC_0(*(VAR_12++)) & 0xfff80000;
  FUNC_1(&VAR_9->csr);
                VAR_8;


                return VAR_3;

        case 134:

                VAR_9->csr.cycle_time = FUNC_0(*VAR_12);
                VAR_9->driver->devctl(VAR_9, VAR_7,
                                       FUNC_0(*(VAR_12++)));
                VAR_8;
        case 137:
                VAR_9->csr.bus_time = FUNC_0(*(VAR_12++)) & 0xffffff80;
                VAR_8;


                return VAR_3;

        case 139:

                return VAR_3;

        case 138:
        case 141:
        case 136:
        case 135:

                return VAR_5;

 case 140:

  VAR_9->csr.broadcast_channel = (VAR_9->csr.broadcast_channel & ~0x40000000)
                        | (FUNC_0(*VAR_12) & 0x40000000);
  VAR_8;


        default:
                return VAR_3;
        }

        return VAR_4;
}
