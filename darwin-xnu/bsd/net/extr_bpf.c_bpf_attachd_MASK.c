
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bpf_if {int (* bif_tap ) (TYPE_1__*,int ,int ) ;int bif_dlt; TYPE_1__* bif_ifp; struct bpf_if* bif_next; struct bpf_d* bif_dlist; } ;
struct bpf_d {int bd_flags; struct bpf_d* bd_next; struct bpf_if* bd_bif; } ;
typedef int errno_t ;
struct TYPE_3__ {struct bpf_if* if_bpf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bpf_d*) ;
 struct bpf_if* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static errno_t
FUNC_3(struct bpf_d *VAR_7, struct bpf_if *VAR_8)
{
 int VAR_9 = VAR_8->bif_dlist == ((void*)0);
 int VAR_10 = 0;






 VAR_7->bd_bif = VAR_8;
 VAR_7->bd_next = VAR_8->bif_dlist;
 VAR_8->bif_dlist = VAR_7;





 FUNC_0(VAR_7);

 if (VAR_9) {

  if (VAR_8->bif_ifp->if_bpf == ((void*)0)) {
   struct bpf_if *VAR_11, *VAR_12 = ((void*)0);

   for (VAR_11 = VAR_5; VAR_11; VAR_11 = VAR_11->bif_next) {
    if (VAR_11->bif_ifp == VAR_8->bif_ifp) {
     VAR_12 = VAR_11;
     break;
    }
   }
   VAR_8->bif_ifp->if_bpf = VAR_12;
  }

  if (VAR_8->bif_ifp->if_bpf == VAR_8)
   FUNC_1(VAR_8->bif_ifp, VAR_3,
       VAR_6);

  if (VAR_8->bif_tap != ((void*)0))
   VAR_10 = VAR_8->bif_tap(VAR_8->bif_ifp, VAR_8->bif_dlt,
       VAR_3);
 }




 VAR_7->bd_flags &= ~(VAR_1 | VAR_0);

 if (VAR_8->bif_dlt == VAR_4) {
  VAR_7->bd_flags |= VAR_2;
 } else {
  VAR_7->bd_flags &= ~VAR_2;
 }
 return (VAR_10);
}
