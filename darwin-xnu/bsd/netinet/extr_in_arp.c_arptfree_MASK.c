
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct sockaddr_dl {scalar_t__ sdl_alen; } ;
struct TYPE_3__ {scalar_t__ rmx_expire; } ;
struct rtentry {scalar_t__ rt_expire; int rt_flags; scalar_t__ rt_refcnt; int rt_gateway; TYPE_1__ rt_rmx; } ;
struct llinfo_arp {int la_flags; scalar_t__ la_probeexp; scalar_t__ la_asked; int la_holdq; scalar_t__ la_prbreq_cnt; struct rtentry* la_rt; } ;
struct arptf_arg {int killed; scalar_t__ probing; int draining; int aging; int sticky; int qsize; int qlen; int found; } ;
struct TYPE_4__ {int timeouts; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (struct rtentry*) ;
 struct sockaddr_dl* FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct llinfo_arp*) ;
 TYPE_2__ VAR_7 ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_8 ;
 int FUNC_9 (struct rtentry*,int *,int ,int *,int ) ;
 int FUNC_10 (struct rtentry*) ;
 int FUNC_11 (struct rtentry*) ;
 int FUNC_12 (int ,int ,int *,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_13(struct llinfo_arp *VAR_9, void *VAR_10)
{
 struct arptf_arg *VAR_11 = VAR_10;
 struct rtentry *VAR_12 = VAR_9->la_rt;
 uint64_t VAR_13;

 FUNC_0(VAR_8, VAR_0);


 FUNC_1(VAR_12);

 FUNC_4(VAR_12->rt_expire == 0 || VAR_12->rt_rmx.rmx_expire != 0);
 FUNC_4(VAR_12->rt_expire != 0 || VAR_12->rt_rmx.rmx_expire == 0);

 VAR_11->found++;
 VAR_13 = FUNC_6();


 if (VAR_11->probing && (VAR_9->la_flags & VAR_1) &&
     VAR_9->la_probeexp <= VAR_13) {
  struct sockaddr_dl *VAR_14 = FUNC_3(VAR_12->rt_gateway);
  if (VAR_14 != ((void*)0))
   VAR_14->sdl_alen = 0;
  (void) FUNC_5(VAR_9);



  FUNC_9(VAR_12, ((void*)0),
      VAR_2, ((void*)0), VAR_6);
 }
 VAR_11->qlen += FUNC_7(&VAR_9->la_holdq);
 VAR_11->qlen += VAR_9->la_prbreq_cnt;
 VAR_11->qsize += FUNC_8(&VAR_9->la_holdq);

 if (VAR_12->rt_expire == 0 || (VAR_12->rt_flags & VAR_4)) {
  VAR_11->sticky++;

  if (VAR_12->rt_expire == 0) {
   FUNC_2(VAR_12);
   return;
  }
 }


 if (!VAR_11->draining && VAR_12->rt_expire > VAR_13) {
  FUNC_2(VAR_12);
  VAR_11->aging++;
  return;
 }

 if (VAR_12->rt_refcnt > 0) {





  if (!VAR_11->draining && !VAR_11->probing) {
   struct sockaddr_dl *VAR_15 = FUNC_3(VAR_12->rt_gateway);
   if (VAR_15 != ((void*)0))
    VAR_15->sdl_alen = 0;
   VAR_9->la_asked = 0;
   VAR_12->rt_flags &= ~VAR_3;
  }
  FUNC_2(VAR_12);
 } else if (!(VAR_12->rt_flags & VAR_4) && !VAR_11->probing) {







  FUNC_2(VAR_12);
  FUNC_12(VAR_5, FUNC_10(VAR_12), ((void*)0),
      FUNC_11(VAR_12), 0, ((void*)0));
  VAR_7.timeouts++;
  VAR_11->killed++;
 } else {

  FUNC_2(VAR_12);
 }
}
