
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ user_addr_t ;
typedef scalar_t__ u_long ;
typedef scalar_t__ u_int ;
struct bpf_insn {int dummy; } ;
struct bpf_d {scalar_t__ bd_hbuf_read; int bd_flags; struct bpf_insn* bd_filter; } ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (struct bpf_insn*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int ,char*,int *) ;
 int FUNC_5 (struct bpf_d*) ;

__attribute__((used)) static int
FUNC_6(struct bpf_d *VAR_12, u_int VAR_13, user_addr_t VAR_14,
    u_long VAR_15)
{
 struct bpf_insn *VAR_16, *VAR_17;
 u_int VAR_18, VAR_19;

 while (VAR_12->bd_hbuf_read != 0)
  FUNC_4((caddr_t)VAR_12, VAR_11, VAR_9, "bpf_reading", ((void*)0));

 if ((VAR_12->bd_flags & VAR_2) != 0)
  return (VAR_6);

 VAR_17 = VAR_12->bd_filter;
 if (VAR_14 == VAR_10) {
  if (VAR_13 != 0)
   return (VAR_4);
  VAR_12->bd_filter = ((void*)0);
  FUNC_5(VAR_12);
  if (VAR_17 != 0)
   FUNC_0((caddr_t)VAR_17, VAR_7);
  return (0);
 }
 VAR_18 = VAR_13;
 if (VAR_18 > VAR_3)
  return (VAR_4);

 VAR_19 = VAR_18 * sizeof(struct bpf_insn);
 VAR_16 = (struct bpf_insn *) FUNC_1(VAR_19, VAR_7, VAR_8);




 if (FUNC_3(VAR_14, (caddr_t)VAR_16, VAR_19) == 0 &&
     FUNC_2(VAR_16, (int)VAR_18)) {
  VAR_12->bd_filter = VAR_16;

  if (VAR_15 == VAR_0 || VAR_15 == VAR_1)
   FUNC_5(VAR_12);

  if (VAR_17 != 0)
   FUNC_0((caddr_t)VAR_17, VAR_7);

  return (0);
 }
 FUNC_0((caddr_t)VAR_16, VAR_7);
 return (VAR_4);
}
