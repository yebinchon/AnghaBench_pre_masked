
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ qid7; scalar_t__ idx3; } ;
union cvmx_pko_reg_queue_ptrs1 {scalar_t__ u64; TYPE_1__ s; } ;
struct TYPE_4__ {int tail; int static_p; int static_q; int s_tail; int qos_mask; int buf_ptr; scalar_t__ queue; scalar_t__ port; scalar_t__ index; } ;
union cvmx_pko_mem_queue_ptrs {scalar_t__ u64; TYPE_2__ s; } ;
typedef scalar_t__ uint64_t ;
typedef int cvmx_pko_status_t ;
typedef int cvmx_cmd_queue_result_t ;





 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,scalar_t__) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__*) ;
 int FUNC_7 (int ,scalar_t__) ;

cvmx_pko_status_t FUNC_8(uint64_t VAR_21, uint64_t VAR_22,
           uint64_t VAR_23,
           const uint64_t VAR_24[])
{
 cvmx_pko_status_t VAR_25;
 uint64_t VAR_26;
 union cvmx_pko_mem_queue_ptrs VAR_27;
 union cvmx_pko_reg_queue_ptrs1 VAR_28;
 int VAR_29 = -1;
 int VAR_30 = -1;

 if ((VAR_21 >= VAR_13)
     && (VAR_21 != VAR_11)) {
  FUNC_4("ERROR: cvmx_pko_config_port: Invalid port %llu\n",
        (unsigned long long)VAR_21);
  return VAR_5;
 }

 if (VAR_22 + VAR_23 > VAR_8) {
  FUNC_4
      ("ERROR: cvmx_pko_config_port: Invalid queue range %llu\n",
       (unsigned long long)(VAR_22 + VAR_23));
  return VAR_7;
 }

 if (VAR_21 != VAR_11) {





  for (VAR_26 = 0; VAR_26 < VAR_23; VAR_26++) {

   if (VAR_29 == -1
       && VAR_24[VAR_26] ==
       128)
    VAR_29 = VAR_26;

   if (VAR_29 != -1
       && VAR_30 == -1
       && VAR_24[VAR_26] != 128
       && VAR_26)
    VAR_30 = VAR_26 - 1;
   else if (VAR_29 != -1
     && VAR_30 == -1
     && VAR_26 == VAR_23 - 1)

    VAR_30 = VAR_26;






   if (VAR_30 != -1
       && (int)VAR_26 > VAR_30
       && VAR_24[VAR_26] ==
       128) {
    FUNC_4("ERROR: cvmx_pko_config_port: "
          "Static priority queues aren't "
          "contiguous or don't start at "
          "base queue. q: %d, eq: %d\n",
     (int)VAR_26, VAR_30);
    return VAR_6;
   }
  }
  if (VAR_29 > 0) {
   FUNC_4("ERROR: cvmx_pko_config_port: Static "
         "priority queues don't start at base "
         "queue. sq: %d\n",
    VAR_29);
   return VAR_6;
  }





 }






 VAR_25 = VAR_18;







 for (VAR_26 = 0; VAR_26 < VAR_23; VAR_26++) {
  uint64_t *VAR_31 = ((void*)0);

  VAR_28 = 0;
  VAR_28 = VAR_26 >> 3;
  VAR_28 = (VAR_22 + VAR_26) >> 7;

  VAR_27.u64 = 0;
  VAR_27.s.tail = VAR_26 == (VAR_23 - 1);
  VAR_27.s.index = VAR_26;
  VAR_27.s.port = VAR_21;
  VAR_27.s.queue = VAR_22 + VAR_26;

  if (!FUNC_5()) {
   VAR_27.s.static_p = VAR_29 >= 0;
   VAR_27.s.static_q = (int)VAR_26 <= VAR_30;
   VAR_27.s.s_tail = (int)VAR_26 == VAR_30;
  }





  switch ((int)VAR_24[VAR_26]) {
  case 0:
   VAR_27.s.qos_mask = 0x00;
   break;
  case 1:
   VAR_27.s.qos_mask = 0x01;
   break;
  case 2:
   VAR_27.s.qos_mask = 0x11;
   break;
  case 3:
   VAR_27.s.qos_mask = 0x49;
   break;
  case 4:
   VAR_27.s.qos_mask = 0x55;
   break;
  case 5:
   VAR_27.s.qos_mask = 0x57;
   break;
  case 6:
   VAR_27.s.qos_mask = 0x77;
   break;
  case 7:
   VAR_27.s.qos_mask = 0x7f;
   break;
  case 8:
   VAR_27.s.qos_mask = 0xff;
   break;
  case 128:

   if (!FUNC_5()) {
    VAR_27.s.qos_mask = 0xff;
    break;
   }
  default:
   FUNC_4("ERROR: cvmx_pko_config_port: Invalid "
         "priority %llu\n",
    (unsigned long long)VAR_24[VAR_26]);
   VAR_27.s.qos_mask = 0xff;
   VAR_25 = VAR_6;
   break;
  }

  if (VAR_21 != VAR_11) {
   cvmx_cmd_queue_result_t VAR_32 =
       FUNC_3(FUNC_0
            (VAR_22 + VAR_26),
            VAR_9,
            VAR_1,
            VAR_2
            -
            VAR_4
            * 8);
   if (VAR_32 != VAR_0) {
    switch (VAR_32) {
    case 129:
     FUNC_4("ERROR: "
           "cvmx_pko_config_port: "
           "Unable to allocate "
           "output buffer.\n");
     return VAR_12;
    case 131:
     FUNC_4
         ("ERROR: cvmx_pko_config_port: Port already setup.\n");
     return VAR_14;
    case 130:
    default:
     FUNC_4
         ("ERROR: cvmx_pko_config_port: Command queue initialization failed.\n");
     return VAR_3;
    }
   }

   VAR_31 =
       (uint64_t *)
       FUNC_2(FUNC_0
        (VAR_22 + VAR_26));
   VAR_27.s.buf_ptr = FUNC_6(VAR_31);
  } else
   VAR_27.s.buf_ptr = 0;

  VAR_19;

  if (!FUNC_1(VAR_20))
   FUNC_7(VAR_17, VAR_28);
  FUNC_7(VAR_10, VAR_27.u64);
 }

 return VAR_25;
}
