
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;
struct bpf_d {int bd_flags; scalar_t__ bd_hbuf_read; int bd_sel; int bd_slen; int bd_state; int bd_immediate; int bd_hlen; int * bd_bif; } ;
typedef int dev_t ;
typedef int caddr_t ;


 int VAR_0 ;
 struct bpf_d* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (struct bpf_d*) ;
 struct bpf_d** VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct bpf_d*) ;
 int FUNC_2 (struct bpf_d*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,char*,int *) ;
 int FUNC_7 (struct proc*,int *,void*) ;

int
FUNC_8(dev_t VAR_7, int VAR_8, void * VAR_9, struct proc *VAR_10)
{
 struct bpf_d *VAR_11;
 int VAR_12 = 0;

 FUNC_3(VAR_6);

 VAR_11 = VAR_5[FUNC_5(VAR_7)];
 if (VAR_11 == ((void*)0) || VAR_11 == VAR_1 ||
     (VAR_11->bd_flags & VAR_0) != 0) {
  FUNC_4(VAR_6);
  return (VAR_3);
 }

 FUNC_0(VAR_11);

 if (VAR_11->bd_bif == ((void*)0)) {
  FUNC_1(VAR_11);
  FUNC_4(VAR_6);
  return (VAR_3);
 }

 while (VAR_11->bd_hbuf_read != 0)
  FUNC_6((caddr_t)VAR_11, VAR_6, VAR_4, "bpf_reading", ((void*)0));

 if ((VAR_11->bd_flags & VAR_0) != 0) {
  FUNC_1(VAR_11);
  FUNC_4(VAR_6);
  return (VAR_3);
 }

 switch (VAR_8) {
  case 129:
   if (VAR_11->bd_hlen != 0 ||
       ((VAR_11->bd_immediate ||
       VAR_11->bd_state == VAR_2) && VAR_11->bd_slen != 0))
    VAR_12 = 1;
   else {





    FUNC_7(VAR_10, &VAR_11->bd_sel, VAR_9);
    FUNC_2(VAR_11);
   }
   break;

  case 128:

   VAR_12 = 1;
   break;
 }

 FUNC_1(VAR_11);
 FUNC_4(VAR_6);

 return (VAR_12);
}
