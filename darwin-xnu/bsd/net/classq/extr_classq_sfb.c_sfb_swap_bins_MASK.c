
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct sfbbinstats {scalar_t__ pmark; scalar_t__ bytes; scalar_t__ pkts; } ;
struct sfb_fcl {int fclist; } ;
struct TYPE_3__ {int num_rehash; } ;
struct sfb {int sfb_flags; int sfb_current; TYPE_2__** sfb_bins; int sfb_qid; int sfb_ifp; TYPE_1__ sfb_stats; int sfb_clearpkts; } ;
struct TYPE_4__ {int freezetime; int fudge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sfbbinstats* FUNC_0 (struct sfb*,int,int,int) ;
 struct sfb_fcl* FUNC_1 (struct sfb*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ,int ,int,int ) ;
 int FUNC_7 (struct sfb*,struct sfb_fcl*) ;
 int FUNC_8 (struct sfb*) ;

__attribute__((used)) static void
FUNC_9(struct sfb *VAR_7, u_int32_t VAR_8)
{
 int VAR_9, VAR_10, VAR_11;

 if (VAR_7->sfb_flags & VAR_1)
  return;

 VAR_11 = VAR_7->sfb_current;
 FUNC_3((VAR_11 + (VAR_11 ^ 1)) == 1);

 (*VAR_7->sfb_bins)[VAR_11].fudge = FUNC_8(VAR_7);
 VAR_7->sfb_clearpkts = VAR_8;
 VAR_7->sfb_stats.num_rehash++;

 VAR_11 = (VAR_7->sfb_current ^= 1);

 if (VAR_6) {
  FUNC_6(VAR_0, "%s: SFB qid=%d, set %d is now current, "
      "qlen=%d\n", FUNC_5(VAR_7->sfb_ifp), VAR_7->sfb_qid, VAR_11, VAR_8);
 }


 FUNC_4(&(*VAR_7->sfb_bins)[VAR_11].freezetime,
     sizeof ((*VAR_7->sfb_bins)[VAR_11].freezetime));


 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  struct sfb_fcl *VAR_12 = FUNC_1(VAR_7, VAR_9);

  if (!FUNC_2(&VAR_12->fclist))
   FUNC_7(VAR_7, VAR_12);

  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
   struct sfbbinstats *VAR_13, *VAR_14;

   VAR_13 = FUNC_0(VAR_7, VAR_10, VAR_9, VAR_11);
   VAR_14 = FUNC_0(VAR_7, VAR_10, VAR_9, VAR_11 ^ 1);

   VAR_13->pkts = 0;
   VAR_13->bytes = 0;
   if (VAR_13->pmark > VAR_4)
    VAR_13->pmark = VAR_4;
   if (VAR_13->pmark < 0)
    VAR_13->pmark = 0;





   if (VAR_14->pmark > VAR_5)
    VAR_14->pmark = VAR_5;
  }
 }
}
