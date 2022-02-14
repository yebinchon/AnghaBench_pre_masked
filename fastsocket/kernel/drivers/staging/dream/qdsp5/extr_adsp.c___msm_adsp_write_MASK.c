
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct msm_adsp_module {scalar_t__ state; int num_commands; int id; int name; struct adsp_info* info; } ;
struct adsp_info {int send_irq; int write_ctrl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (struct adsp_info*,unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int ) ;

int FUNC_10(struct msm_adsp_module *VAR_17, unsigned VAR_18,
     void *VAR_19, size_t VAR_20)
{
 uint32_t VAR_21;
 uint32_t VAR_22;
 uint32_t VAR_23;
 uint32_t VAR_24 = 0;
 int VAR_25 = 0;
 int VAR_26 = 0;
 unsigned long VAR_27;
 struct adsp_info *VAR_28 = VAR_17->info;

 FUNC_6(&VAR_16, VAR_27);

 if (VAR_17->state != VAR_9) {
  FUNC_7(&VAR_16, VAR_27);
  FUNC_2("adsp: module %s not enabled before write\n",
         VAR_17->name);
  return -VAR_12;
 }
 if (FUNC_1(VAR_17->id)) {
  FUNC_7(&VAR_16, VAR_27);
  FUNC_3("adsp: module id validation failed %s  %d\n",
   VAR_17->name, VAR_17->id);
  return -VAR_13;
 }
 VAR_22 = FUNC_0(VAR_28, VAR_18);
 VAR_22 &= VAR_2;






 while (((VAR_21 = FUNC_5(VAR_28->write_ctrl)) &
  VAR_6) !=
  VAR_7) {
  if (VAR_25 > 100) {
   FUNC_2("adsp: timeout waiting for DSP write ready\n");
   VAR_26 = -VAR_11;
   goto fail;
  }
  FUNC_4("adsp: waiting for DSP write ready\n");
  FUNC_8(1);
  VAR_25++;
 }


 VAR_21 &= ~(VAR_3);
 VAR_21 |= VAR_4;


 VAR_21 &= ~(VAR_0);


 VAR_21 &= ~(VAR_2);
 VAR_21 |= VAR_22;

 FUNC_9(VAR_21, VAR_28->write_ctrl);





 FUNC_9(1, VAR_28->send_irq);





 VAR_25 = 0;
 while ((FUNC_5(VAR_28->write_ctrl) &
  VAR_3) ==
  VAR_4) {
  if (VAR_25 > 5000) {
   FUNC_2("adsp: timeout waiting for adsp ack\n");
   VAR_26 = -VAR_11;
   goto fail;
  }
  FUNC_8(1);
  VAR_25++;
 }


 VAR_21 = FUNC_5(VAR_28->write_ctrl);

 if ((VAR_21 & VAR_8) !=
    VAR_5) {
  VAR_26 = -VAR_10;
  goto fail;
 }




 VAR_23 = (VAR_21 & VAR_2) +
     (uint32_t)VAR_14;

 if (VAR_23 < (uint32_t)(VAR_14 + VAR_15)) {
  uint16_t *VAR_29 = (uint16_t *) VAR_19;
  uint16_t *VAR_30 = (uint16_t *)VAR_23;
  VAR_20 /= sizeof(uint16_t);


  VAR_24 = (uint32_t) VAR_29[0];


  VAR_20++;
  while (--VAR_20)
   *VAR_30++ = *VAR_29++;
 } else {
  uint32_t *VAR_31 = (uint32_t *) VAR_19;
  uint32_t *VAR_32 = (uint32_t *)VAR_23;
  VAR_20 /= sizeof(uint32_t);


  VAR_24 = VAR_31[0];

  VAR_20++;
  while (--VAR_20)
   *VAR_32++ = *VAR_31++;
 }


 VAR_21 &= ~(VAR_3);
 VAR_21 |= VAR_4;


 VAR_21 &= ~(VAR_0);
 VAR_21 |= VAR_1;


 VAR_21 &= ~(VAR_2);
 VAR_21 |= VAR_22;

 FUNC_9(VAR_21, VAR_28->write_ctrl);






 FUNC_9(1, VAR_28->send_irq);

 VAR_17->num_commands++;

fail:
 FUNC_7(&VAR_16, VAR_27);
 return VAR_26;
}
