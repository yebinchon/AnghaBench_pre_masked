
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qib_ibport {scalar_t__ sm_lid; unsigned long subnet_timeout; scalar_t__ trap_timeout; int lock; TYPE_1__* sm_ah; int tid; struct ib_mad_agent* send_agent; } ;
struct ib_smp {int class_version; int data; int attr_id; int tid; int method; int mgmt_class; int base_version; } ;
struct ib_mad_send_buf {struct ib_mad_send_buf* ah; struct ib_smp* mad; } ;
struct ib_mad_agent {int dummy; } ;
struct ib_ah {struct ib_ah* ah; struct ib_smp* mad; } ;
struct TYPE_4__ {int lflags; } ;
struct TYPE_3__ {struct ib_mad_send_buf ibah; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct ib_mad_send_buf*) ;
 int FUNC_1 (struct ib_mad_send_buf*) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct ib_mad_send_buf* FUNC_4 (struct ib_mad_agent*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct ib_mad_send_buf*) ;
 int FUNC_6 (struct ib_mad_send_buf*,int *) ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (int ,void*,unsigned int) ;
 TYPE_2__* FUNC_8 (struct qib_ibport*) ;
 struct ib_mad_send_buf* FUNC_9 (struct qib_ibport*,scalar_t__) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_13 (struct ib_mad_send_buf*) ;
 scalar_t__ FUNC_14 (unsigned long) ;

__attribute__((used)) static void FUNC_15(struct qib_ibport *VAR_11, void *VAR_12, unsigned VAR_13)
{
 struct ib_mad_send_buf *VAR_14;
 struct ib_mad_agent *VAR_15;
 struct ib_smp *VAR_16;
 int VAR_17;
 unsigned long VAR_18;
 unsigned long VAR_19;

 VAR_15 = VAR_11->send_agent;
 if (!VAR_15)
  return;


 if (!(FUNC_8(VAR_11)->lflags & VAR_9))
  return;


 if (VAR_11->trap_timeout && FUNC_12(VAR_10, VAR_11->trap_timeout))
  return;

 VAR_14 = FUNC_4(VAR_15, 0, 0, 0, VAR_6,
          VAR_5, VAR_1);
 if (FUNC_0(VAR_14))
  return;

 VAR_16 = VAR_14->mad;
 VAR_16->base_version = VAR_3;
 VAR_16->mgmt_class = VAR_4;
 VAR_16->class_version = 1;
 VAR_16->method = VAR_7;
 VAR_11->tid++;
 VAR_16->tid = FUNC_3(VAR_11->tid);
 VAR_16->attr_id = VAR_8;

 FUNC_7(VAR_16->data, VAR_12, VAR_13);

 FUNC_10(&VAR_11->lock, VAR_18);
 if (!VAR_11->sm_ah) {
  if (VAR_11->sm_lid != FUNC_2(VAR_2)) {
   struct ib_ah *VAR_20;

   VAR_20 = FUNC_9(VAR_11, VAR_11->sm_lid);
   if (FUNC_0(VAR_20))
    VAR_17 = FUNC_1(VAR_20);
   else {
    VAR_14->ah = VAR_20;
    VAR_11->sm_ah = FUNC_13(VAR_20);
    VAR_17 = 0;
   }
  } else
   VAR_17 = -VAR_0;
 } else {
  VAR_14->ah = &VAR_11->sm_ah->ibah;
  VAR_17 = 0;
 }
 FUNC_11(&VAR_11->lock, VAR_18);

 if (!VAR_17)
  VAR_17 = FUNC_6(VAR_14, ((void*)0));
 if (!VAR_17) {

  VAR_19 = (4096 * (1UL << VAR_11->subnet_timeout)) / 1000;
  VAR_11->trap_timeout = VAR_10 + FUNC_14(VAR_19);
 } else {
  FUNC_5(VAR_14);
  VAR_11->trap_timeout = 0;
 }
}
