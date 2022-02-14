
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct TYPE_4__ {int state; int node_ids; int split_timeout_hi; int split_timeout_lo; int cycle_time; int bus_time; int bus_manager_id; int bandwidth_available; int channels_available_hi; int channels_available_lo; int broadcast_channel; } ;
struct hpsb_host {TYPE_2__ csr; TYPE_1__* driver; } ;
typedef int quadlet_t ;
struct TYPE_3__ {int (* devctl ) (struct hpsb_host*,int ,int ) ;int (* hw_csr_reg ) (struct hpsb_host*,int,int ,int ) ;} ;
 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (struct hpsb_host*,int ,int ) ;
 int FUNC_2 (struct hpsb_host*,int ,int ) ;
 int FUNC_3 (struct hpsb_host*,int,int ,int ) ;
 int FUNC_4 (struct hpsb_host*,int,int ,int ) ;
 int FUNC_5 (struct hpsb_host*,int,int ,int ) ;
 int FUNC_6 (struct hpsb_host*,int,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct hpsb_host *VAR_6, int VAR_7, quadlet_t *VAR_8,
                     u64 VAR_9, size_t VAR_10, u16 VAR_11)
{
        int VAR_12 = VAR_9 - VAR_0;
        int VAR_13;
        quadlet_t VAR_14;

        if ((VAR_12 | VAR_10) & 0x3)
                return VAR_4;

        VAR_10 /= 4;

        switch (VAR_12) {
        case 129:
                *(VAR_8++) = FUNC_0(VAR_6->csr.state);
                VAR_5;
        case 128:
                *(VAR_8++) = FUNC_0(VAR_6->csr.state);
                VAR_5;
        case 133:
                *(VAR_8++) = FUNC_0(VAR_6->csr.node_ids);
                VAR_5;

        case 132:
                return VAR_4;



        case 131:
                *(VAR_8++) = FUNC_0(VAR_6->csr.split_timeout_hi);
                VAR_5;
        case 130:
                *(VAR_8++) = FUNC_0(VAR_6->csr.split_timeout_lo);
                VAR_5;


                return VAR_2;

        case 134:
                VAR_13 = VAR_6->csr.cycle_time;
                VAR_6->csr.cycle_time =
                        VAR_6->driver->devctl(VAR_6, VAR_1, 0);

                if (VAR_13 > VAR_6->csr.cycle_time) {

                        VAR_6->csr.bus_time += 1 << 7;
                }
                *(VAR_8++) = FUNC_0(VAR_6->csr.cycle_time);
                VAR_5;
        case 137:
                VAR_13 = VAR_6->csr.cycle_time;
                VAR_6->csr.cycle_time =
                        VAR_6->driver->devctl(VAR_6, VAR_1, 0);

                if (VAR_13 > VAR_6->csr.cycle_time) {

                        VAR_6->csr.bus_time += (1 << 7);
                }
                *(VAR_8++) = FUNC_0(VAR_6->csr.bus_time
                                       | (VAR_6->csr.cycle_time >> 25));
                VAR_5;


                return VAR_2;

        case 139:

                return VAR_2;

        case 138:
                if (VAR_6->driver->hw_csr_reg)
                        VAR_14 = VAR_6->driver->hw_csr_reg(VAR_6, 0, 0, 0);
                else
                        VAR_14 = VAR_6->csr.bus_manager_id;

                *(VAR_8++) = FUNC_0(VAR_14);
                VAR_5;
        case 141:
                if (VAR_6->driver->hw_csr_reg)
                        VAR_14 = VAR_6->driver->hw_csr_reg(VAR_6, 1, 0, 0);
                else
                        VAR_14 = VAR_6->csr.bandwidth_available;

                *(VAR_8++) = FUNC_0(VAR_14);
                VAR_5;
        case 136:
                if (VAR_6->driver->hw_csr_reg)
                        VAR_14 = VAR_6->driver->hw_csr_reg(VAR_6, 2, 0, 0);
                else
                        VAR_14 = VAR_6->csr.channels_available_hi;

                *(VAR_8++) = FUNC_0(VAR_14);
                VAR_5;
        case 135:
                if (VAR_6->driver->hw_csr_reg)
                        VAR_14 = VAR_6->driver->hw_csr_reg(VAR_6, 3, 0, 0);
                else
                        VAR_14 = VAR_6->csr.channels_available_lo;

                *(VAR_8++) = FUNC_0(VAR_14);
                VAR_5;

 case 140:
  *(VAR_8++) = FUNC_0(VAR_6->csr.broadcast_channel);
  VAR_5;


        default:
                return VAR_2;
        }

        return VAR_3;
}
