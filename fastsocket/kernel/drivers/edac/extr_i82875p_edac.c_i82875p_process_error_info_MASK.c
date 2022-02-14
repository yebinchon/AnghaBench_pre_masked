
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_ctl_info {TYPE_1__* csrows; } ;
struct i82875p_error_info {int errsts; int errsts2; int eap; int des; int derrsyn; } ;
struct TYPE_2__ {int nr_channels; } ;


 int VAR_0 ;
 int FUNC_0 (struct mem_ctl_info*,int) ;
 int FUNC_1 (struct mem_ctl_info*,int,int ,int ,int,int,char*) ;
 int FUNC_2 (struct mem_ctl_info*,char*) ;
 int FUNC_3 (struct mem_ctl_info*,int,int ,int,char*) ;

__attribute__((used)) static int FUNC_4(struct mem_ctl_info *VAR_1,
    struct i82875p_error_info *VAR_2,
    int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = VAR_1->csrows[0].nr_channels - 1;

 if (!(VAR_2->errsts & 0x0081))
  return 0;

 if (!VAR_3)
  return 1;

 if ((VAR_2->errsts ^ VAR_2->errsts2) & 0x0081) {
  FUNC_2(VAR_1, "UE overwrote CE");
  VAR_2->errsts = VAR_2->errsts2;
 }

 VAR_2->eap >>= VAR_0;
 VAR_4 = FUNC_0(VAR_1, VAR_2->eap);

 if (VAR_2->errsts & 0x0080)
  FUNC_3(VAR_1, VAR_2->eap, 0, VAR_4, "i82875p UE");
 else
  FUNC_1(VAR_1, VAR_2->eap, 0, VAR_2->derrsyn, VAR_4,
    VAR_5 ? (VAR_2->des & 0x1) : 0,
    "i82875p CE");

 return 1;
}
