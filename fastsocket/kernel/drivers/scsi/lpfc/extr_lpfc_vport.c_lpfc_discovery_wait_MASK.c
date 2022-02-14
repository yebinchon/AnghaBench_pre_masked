
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {scalar_t__ num_disc_nodes; int fc_flag; scalar_t__ port_state; struct lpfc_hba* phba; } ;
struct lpfc_hba {int fc_ratov; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned long VAR_11 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct lpfc_vport*,int ,int ,char*,scalar_t__,int,scalar_t__,...) ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct lpfc_vport *VAR_12)
{
 struct lpfc_hba *VAR_13 = VAR_12->phba;
 uint32_t VAR_14 = 0;
 unsigned long VAR_15;
 unsigned long VAR_16;

 VAR_14 = VAR_5 | VAR_4 | VAR_2 |
       VAR_3 | VAR_1 | VAR_0;






 VAR_15 = FUNC_2(((VAR_13->fc_ratov * 3) + 3) * 1000);
 VAR_15 += VAR_11;
 VAR_16 = VAR_11;
 while (FUNC_5(VAR_11, VAR_15)) {
  if ((VAR_12->num_disc_nodes > 0) ||
      (VAR_12->fc_flag & VAR_14) ||
      ((VAR_12->port_state > VAR_9) &&
       (VAR_12->port_state < VAR_10))) {
   FUNC_1(VAR_12, VAR_7, VAR_8,
     "1833 Vport discovery quiesce Wait:"
     " state x%x fc_flags x%x"
     " num_nodes x%x, waiting 1000 msecs"
     " total wait msecs x%x\n",
     VAR_12->port_state, VAR_12->fc_flag,
     VAR_12->num_disc_nodes,
     FUNC_0(VAR_11 - VAR_16));
   FUNC_3(1000);
  } else {

   FUNC_1(VAR_12, VAR_7, VAR_8,
      "1834 Vport discovery quiesced:"
      " state x%x fc_flags x%x"
      " wait msecs x%x\n",
      VAR_12->port_state, VAR_12->fc_flag,
      FUNC_0(VAR_11
      - VAR_16));
   break;
  }
 }

 if (FUNC_4(VAR_11, VAR_15))
  FUNC_1(VAR_12, VAR_6, VAR_8,
    "1835 Vport discovery quiesce failed:"
    " state x%x fc_flags x%x wait msecs x%x\n",
    VAR_12->port_state, VAR_12->fc_flag,
    FUNC_0(VAR_11 - VAR_16));
}
