
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nouveau_i2c {int (* find ) (struct nouveau_i2c*,int ) ;int (* find_type ) (struct nouveau_i2c*,int ) ;} ;
struct nouveau_dp_func {int dummy; } ;
struct nouveau_disp {int dummy; } ;
struct nouveau_bios {int dummy; } ;
struct dp_state {int head; int* dpcd; int link_nr; int link_bw; int stat; int aux; int info; int version; struct dcb_output* outp; struct nouveau_dp_func const* func; struct nouveau_disp* disp; } ;
struct dcb_output {int i2c_index; int extdev; scalar_t__ location; int hashm; int hasht; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dp_state*) ;
 int FUNC_4 (struct dp_state*) ;
 int FUNC_5 (struct dp_state*) ;
 int FUNC_6 (struct dp_state*,int) ;
 int FUNC_7 (struct dp_state*) ;
 int FUNC_8 (struct dp_state*,int ) ;
 int FUNC_9 (int ,int,int) ;
 struct nouveau_bios* FUNC_10 (struct nouveau_disp*) ;
 struct nouveau_i2c* FUNC_11 (struct nouveau_disp*) ;
 int FUNC_12 (int ,int,int*,int) ;
 int FUNC_13 (struct nouveau_bios*,int ,int ,int *,int *,int *,int *,int *) ;
 int FUNC_14 (struct nouveau_i2c*,int ) ;
 int FUNC_15 (struct nouveau_i2c*,int ) ;

int
FUNC_16(struct nouveau_disp *VAR_3, const struct nouveau_dp_func *VAR_4,
   struct dcb_output *VAR_5, int VAR_6, u32 VAR_7)
{
 struct nouveau_bios *VAR_8 = FUNC_10(VAR_3);
 struct nouveau_i2c *VAR_9 = FUNC_11(VAR_3);
 struct dp_state VAR_10 = {
  .disp = VAR_3,
  .func = VAR_4,
  .outp = VAR_5,
  .head = VAR_6,
 }, *VAR_11 = &VAR_10;
 const u32 VAR_12[] = { 270000, 162000, 0 };
 const u32 *VAR_13 = VAR_12;
 u8 VAR_14, VAR_15, VAR_16;
 u32 VAR_17;
 int VAR_18;


 VAR_17 = FUNC_13(VAR_8, VAR_5->hasht, VAR_5->hashm, &VAR_11->version,
     &VAR_14, &VAR_15, &VAR_16, &VAR_11->info);
 if (!VAR_17) {
  FUNC_0("bios data not found\n");
  return -VAR_1;
 }


 if (VAR_5->location)
  VAR_11->aux = VAR_9->find_type(VAR_9, FUNC_2(VAR_5->extdev));
 else
  VAR_11->aux = VAR_9->find(VAR_9, FUNC_1(VAR_5->i2c_index));
 if (!VAR_11->aux) {
  FUNC_0("no aux channel?!\n");
  return -VAR_2;
 }

 VAR_18 = FUNC_12(VAR_11->aux, 0x00000, VAR_11->dpcd, sizeof(VAR_11->dpcd));
 if (VAR_18) {
  FUNC_0("failed to read DPCD\n");
  return VAR_18;
 }


 VAR_7 = (VAR_7 / 8) * 10;


 FUNC_6(VAR_11, VAR_11->dpcd[3] & 0x01);


 while (*VAR_13 > (VAR_11->dpcd[1] * 27000))
  VAR_13++;

 while (VAR_13[0]) {

  VAR_11->link_nr = VAR_11->dpcd[2] & VAR_0;
  while ((VAR_11->link_nr >> 1) * VAR_13[0] > VAR_7)
   VAR_11->link_nr >>= 1;


  while ((VAR_13[1] * VAR_11->link_nr) > VAR_7)
   VAR_13++;
  VAR_11->link_bw = VAR_13[0];


  VAR_18 = FUNC_7(VAR_11);
  if (VAR_18 == 0) {

   FUNC_9(VAR_11->stat, 0x00, sizeof(VAR_11->stat));
   if (!FUNC_3(VAR_11) &&
       !FUNC_4(VAR_11))
    break;
  } else
  if (VAR_18 >= 1) {

   break;
  }


  VAR_13++;
 }


 FUNC_8(VAR_11, 0);


 FUNC_5(VAR_11);
 return 1;
}
