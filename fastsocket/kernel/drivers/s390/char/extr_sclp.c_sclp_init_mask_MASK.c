
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int response_code; } ;
struct init_sccb {scalar_t__ sclp_send_mask; scalar_t__ sclp_receive_mask; TYPE_1__ header; } ;
typedef scalar_t__ sccb_mask_t ;
struct TYPE_5__ {scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__*,scalar_t__*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 unsigned long VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 () ;
 TYPE_2__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_4 () ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_8(int VAR_19)
{
 unsigned long VAR_20;
 struct init_sccb *VAR_21 = (struct init_sccb *) VAR_12;
 sccb_mask_t VAR_22;
 sccb_mask_t VAR_23;
 int VAR_24;
 int VAR_25;
 unsigned long VAR_26;

 FUNC_5(&VAR_13, VAR_20);

 if (VAR_14 != VAR_15) {
  FUNC_6(&VAR_13, VAR_20);
  return -VAR_0;
 }
 if (VAR_9 == VAR_10) {
  FUNC_6(&VAR_13, VAR_20);
  return -VAR_1;
 }
 VAR_14 = VAR_16;

 if (VAR_19)
  FUNC_0(&VAR_22, &VAR_23);
 else {
  VAR_22 = 0;
  VAR_23 = 0;
 }
 VAR_25 = -VAR_2;
 for (VAR_24 = 0; VAR_24 <= VAR_5; VAR_24++) {

  FUNC_1(VAR_22, VAR_23);
  FUNC_6(&VAR_13, VAR_20);
  if (FUNC_2(&VAR_11)) {

   VAR_26 = VAR_8 + VAR_4 * VAR_3;
   while (FUNC_7(VAR_8, VAR_26))
    FUNC_4();
   FUNC_5(&VAR_13, VAR_20);
   continue;
  }
  while (VAR_11.status != VAR_6 &&
         VAR_11.status != VAR_7)
   FUNC_4();
  FUNC_5(&VAR_13, VAR_20);
  if (VAR_11.status == VAR_6 &&
      VAR_21->header.response_code == 0x20) {

   if (VAR_19) {
    VAR_17 = VAR_21->sclp_receive_mask;
    VAR_18 = VAR_21->sclp_send_mask;
   } else {
    VAR_17 = 0;
    VAR_18 = 0;
   }
   FUNC_6(&VAR_13, VAR_20);
   FUNC_3();
   FUNC_5(&VAR_13, VAR_20);
   VAR_25 = 0;
   break;
  }
 }
 VAR_14 = VAR_15;
 FUNC_6(&VAR_13, VAR_20);
 return VAR_25;
}
