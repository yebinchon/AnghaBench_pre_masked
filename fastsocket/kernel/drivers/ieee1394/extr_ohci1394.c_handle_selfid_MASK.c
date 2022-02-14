
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_ohci {int* selfid_buf_cpu; scalar_t__ selfid_swap; int self_id_errors; } ;
struct hpsb_host {int dummy; } ;
typedef int quadlet_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct hpsb_host*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ti_ohci*,int ) ;
 int FUNC_6 (struct ti_ohci*,int,int) ;

__attribute__((used)) static void FUNC_7(struct ti_ohci *VAR_3, struct hpsb_host *VAR_4,
    int VAR_5, int VAR_6)
{
 quadlet_t *VAR_7 = VAR_3->selfid_buf_cpu;
 quadlet_t VAR_8=FUNC_5(VAR_3, VAR_2);
 size_t VAR_9;
 quadlet_t VAR_10, VAR_11;



 if (VAR_3->selfid_swap)
  VAR_10 = FUNC_4(VAR_7[0]);
 else
  VAR_10 = VAR_7[0];

 if ((VAR_8 & 0x80000000) ||
     ((VAR_8 & 0x00FF0000) != (VAR_10 & 0x00FF0000))) {
  FUNC_1(VAR_0,
        "Error in reception of SelfID packets [0x%08x/0x%08x] (count: %d)",
        VAR_8, VAR_10, VAR_3->self_id_errors);



  if (VAR_3->self_id_errors<VAR_1) {
   FUNC_6 (VAR_3, 1, 0x40);
   VAR_3->self_id_errors++;
  } else {
   FUNC_1(VAR_0,
         "Too many errors on SelfID error reception, giving up!");
  }
  return;
 }


 VAR_3->self_id_errors = 0;

 VAR_9 = ((VAR_8 & 0x00001FFC) >> 2) - 1;
 VAR_7++;

 while (VAR_9 > 0) {
  if (VAR_3->selfid_swap) {
   VAR_10 = FUNC_4(VAR_7[0]);
   VAR_11 = FUNC_4(VAR_7[1]);
  } else {
   VAR_10 = VAR_7[0];
   VAR_11 = VAR_7[1];
  }

  if (VAR_10 == ~VAR_11) {
   FUNC_0 ("SelfID packet 0x%x received", VAR_10);
   FUNC_3(VAR_4, FUNC_2(VAR_10));
   if (((VAR_10 & 0x3f000000) >> 24) == VAR_5)
    FUNC_0 ("SelfID for this node is 0x%08x", VAR_10);
  } else {
   FUNC_1(VAR_0,
         "SelfID is inconsistent [0x%08x/0x%08x]", VAR_10, VAR_11);
  }
  VAR_7 += 2;
  VAR_9 -= 2;
 }

 FUNC_0("SelfID complete");

 return;
}
