
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hubdev_info {int hdi_nasid; } ;
typedef int nasid_t ;
typedef int ioerror_t ;
struct TYPE_6__ {void* ii_icrb0_e_regval; } ;
typedef TYPE_1__ ii_icrb0_e_u_t ;
struct TYPE_7__ {scalar_t__ d_bteop; void* ii_icrb0_d_regval; } ;
typedef TYPE_2__ ii_icrb0_d_u_t ;
struct TYPE_8__ {int c_btenum; void* ii_icrb0_c_regval; } ;
typedef TYPE_3__ ii_icrb0_c_u_t ;
struct TYPE_9__ {scalar_t__ b_mark; int b_initiator; scalar_t__ b_imsgtype; int b_ecode; void* ii_icrb0_b_regval; } ;
typedef TYPE_4__ ii_icrb0_b_u_t ;
struct TYPE_10__ {void* ii_icrb0_a_regval; } ;
typedef TYPE_5__ ii_icrb0_a_u_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 void* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int,int,int *,scalar_t__) ;
 int VAR_5 ;
 int FUNC_9 (struct hubdev_info*,int) ;
 int FUNC_10 (int ) ;

void FUNC_11(struct hubdev_info *VAR_6)
{
 nasid_t VAR_7;
 ii_icrb0_a_u_t VAR_8;
 ii_icrb0_b_u_t VAR_9;
 ii_icrb0_c_u_t VAR_10;
 ii_icrb0_d_u_t VAR_11;
 ii_icrb0_e_u_t VAR_12;
 int VAR_13;
 int VAR_14 = 0;
 ioerror_t VAR_15;

 VAR_7 = VAR_6->hdi_nasid;
 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {

  VAR_9.ii_icrb0_b_regval = FUNC_7(VAR_7, FUNC_1(VAR_13));

  if (VAR_9.b_mark == 0) {
   continue;
  }

  VAR_8.ii_icrb0_a_regval = FUNC_7(VAR_7, FUNC_0(VAR_13));

  FUNC_5(&VAR_15);


  VAR_10.ii_icrb0_c_regval = FUNC_7(VAR_7, FUNC_2(VAR_13));
  VAR_11.ii_icrb0_d_regval = FUNC_7(VAR_7, FUNC_3(VAR_13));
  VAR_12.ii_icrb0_e_regval = FUNC_7(VAR_7, FUNC_4(VAR_13));

  FUNC_6(&VAR_15, VAR_5, VAR_9.b_ecode);




  if (VAR_11.d_bteop ||
      ((VAR_9.b_initiator == VAR_2 ||
        VAR_9.b_initiator == VAR_3) &&
       (VAR_9.b_imsgtype == VAR_0 ||
        VAR_9.b_imsgtype == VAR_1))) {

   int VAR_16;

   if (VAR_11.d_bteop)
    VAR_16 = VAR_10.c_btenum;
   else
    VAR_16 = (VAR_9.b_initiator & 0x4) >> 2;

   FUNC_9(VAR_6, VAR_13);

   FUNC_8(FUNC_10(VAR_7), VAR_16,
           VAR_13, &VAR_15, VAR_11.d_bteop);
   VAR_14++;
   continue;
  }
 }
}
