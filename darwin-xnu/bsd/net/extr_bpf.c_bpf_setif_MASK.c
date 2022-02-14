
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct bpf_if {scalar_t__ bif_dlt; struct ifnet* bif_ifp; struct bpf_if* bif_next; } ;
struct bpf_d {scalar_t__ bd_hbuf_read; int bd_flags; struct bpf_if* bd_bif; } ;
typedef struct ifnet* ifnet_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ifnet*) ;
 int VAR_4 ;
 int FUNC_1 (struct bpf_d*) ;
 scalar_t__ FUNC_2 (struct bpf_d*,struct bpf_if*) ;
 scalar_t__ FUNC_3 (struct bpf_d*,int ) ;
 struct bpf_if* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,int ,char*,int *) ;
 int FUNC_5 (struct bpf_d*) ;

__attribute__((used)) static int
FUNC_6(struct bpf_d *VAR_8, ifnet_t VAR_9, bool VAR_10, bool VAR_11)
{
 struct bpf_if *VAR_12;
 int VAR_13;

 while (VAR_8->bd_hbuf_read != 0 && !VAR_11)
  FUNC_4((caddr_t)VAR_8, VAR_6, VAR_4, "bpf_reading", ((void*)0));

 if ((VAR_8->bd_flags & VAR_0) != 0)
  return (VAR_3);




 for (VAR_12 = VAR_5; VAR_12 != 0; VAR_12 = VAR_12->bif_next) {
  struct ifnet *VAR_14 = VAR_12->bif_ifp;

  if (VAR_14 == 0 || VAR_14 != VAR_9)
   continue;



  if (VAR_12->bif_dlt == VAR_2 && !(VAR_8->bd_flags & VAR_1))
   continue;



  if (!VAR_7 && FUNC_0(VAR_14))
   continue;




  VAR_13 = FUNC_1(VAR_8);
  if (VAR_13 != 0)
   return (VAR_13);



  if (VAR_12 != VAR_8->bd_bif) {
   if (VAR_8->bd_bif != ((void*)0)) {
    if (FUNC_3(VAR_8, 0) != 0)
     return (VAR_3);
   }
   if (FUNC_2(VAR_8, VAR_12) != 0)
    return (VAR_3);
  }
  if (VAR_10) {
  FUNC_5(VAR_8);
  }
  return (0);
 }

 return (VAR_3);
}
