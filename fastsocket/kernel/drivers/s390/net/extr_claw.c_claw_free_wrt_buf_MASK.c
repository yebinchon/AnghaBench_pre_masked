
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {scalar_t__ ml_priv; } ;
struct TYPE_6__ {int tx_packets; int tx_bytes; } ;
struct claw_privbk {scalar_t__ write_free_count; struct ccwbk* p_write_active_last; struct ccwbk* p_write_active_first; TYPE_3__ stats; struct ccwbk* p_write_free_chain; } ;
struct TYPE_5__ {scalar_t__ count; } ;
struct TYPE_4__ {scalar_t__ flag; } ;
struct ccwbk {TYPE_2__ write; struct ccwbk* next; TYPE_1__ header; } ;


 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int,int ,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,struct net_device*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3( struct net_device *VAR_3 )
{

 struct claw_privbk *VAR_4 = (struct claw_privbk *)VAR_3->ml_priv;
        struct ccwbk*VAR_5;
 struct ccwbk*VAR_6;
 struct ccwbk*VAR_7;
 struct ccwbk*VAR_8;

 FUNC_0(4, VAR_2, "freewrtb");

        VAR_5=((void*)0);
        VAR_6=((void*)0);
        VAR_7=VAR_4->p_write_active_first;
        while ( (VAR_7!=((void*)0)) && (VAR_7->header.flag!=VAR_0))
        {
                VAR_8 = VAR_7->next;
                if (((VAR_8!=((void*)0)) &&
       (VAR_8->header.flag!=VAR_0)) ||
                    ((VAR_7 == VAR_4->p_write_active_last) &&
                     (VAR_7->header.flag!=VAR_0))) {


                        VAR_4->p_write_active_first=VAR_7->next;
   VAR_7->header.flag=VAR_0;
                        VAR_7->next=VAR_4->p_write_free_chain;
   VAR_4->p_write_free_chain=VAR_7;
                        ++VAR_4->write_free_count;
   VAR_4->stats.tx_bytes+= VAR_7->write.count;
   VAR_7=VAR_4->p_write_active_first;
                        VAR_4->stats.tx_packets++;
                }
                else {
   break;
                }
        }
        if (VAR_4->write_free_count!=0) {
                FUNC_2(VAR_1,VAR_3);
        }

        if (VAR_4->p_write_active_first==((void*)0)) {
                VAR_4->p_write_active_last=((void*)0);
        }
 FUNC_1(4, VAR_2, "FWC=%d", VAR_4->write_free_count);
        return;
}
