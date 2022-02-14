
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int reg_slc0_len; } ;
struct TYPE_8__ {TYPE_2__ pkt_len; } ;
struct TYPE_5__ {int val; } ;
struct TYPE_7__ {TYPE_1__ slc0_len_conf; } ;


 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (int ,int) ;
 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_2(uint32_t VAR_5)
{
    VAR_1.slc0_len_conf.val = FUNC_1(VAR_2, VAR_5) | FUNC_1(VAR_3, 1);
    FUNC_0(VAR_4, "send_length_write: %d, last_len: %08X", VAR_5, VAR_0.pkt_len.reg_slc0_len);
}
