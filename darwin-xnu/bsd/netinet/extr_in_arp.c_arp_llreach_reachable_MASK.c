
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int64_t ;
typedef int tmp ;
struct llinfo_arp {scalar_t__ la_lastused; int la_rt; struct if_llreach* la_llreach; } ;
struct if_llreach {int lr_reqcnt; scalar_t__ lr_lastrcvd; int lr_ifp; } ;
typedef int int64_t ;
struct TYPE_2__ {int sin_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct llinfo_arp*) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct if_llreach*) ;
 scalar_t__ FUNC_5 (struct if_llreach*,scalar_t__) ;
 int FUNC_6 (int ,int *,char*,int) ;
 int FUNC_7 (int ,char*,int ,int ,char const*,int,int) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ) ;

__attribute__((used)) static __inline int
FUNC_10(struct llinfo_arp *VAR_5)
{
 struct if_llreach *VAR_6;
 const char *VAR_7 = ((void*)0);


 if (VAR_3 == 0)
  return (1);

 if ((VAR_6 = VAR_5->la_llreach) == ((void*)0)) {




  return (1);
 } else if (FUNC_4(VAR_6)) {





  if (VAR_6->lr_reqcnt == 1)
   return (1);


  if (VAR_5->la_lastused == 0) {
   FUNC_1(VAR_5->la_llreach != ((void*)0));
   FUNC_2(VAR_5);
  }
  if (FUNC_5(VAR_6, VAR_5->la_lastused))
   return (1);

  VAR_7 = "has alias(es) and hasn't been used in a while";
 } else {
  VAR_7 = "haven't heard from it in a while";
 }

 if (VAR_4 > 1) {
  char VAR_8[VAR_2];
  u_int64_t VAR_9 = FUNC_8();

  FUNC_7(VAR_1, "%s: ARP probe(s) needed for %s; "
      "%s [lastused %lld, lastrcvd %lld] secs ago\n",
      FUNC_3(VAR_6->lr_ifp), FUNC_6(VAR_0,
      &FUNC_0(FUNC_9(VAR_5->la_rt))->sin_addr, VAR_8, sizeof (VAR_8)), VAR_7,
      (VAR_5->la_lastused ? (int64_t)(VAR_9 - VAR_5->la_lastused) : -1),
      (VAR_6->lr_lastrcvd ? (int64_t)(VAR_9 - VAR_6->lr_lastrcvd) : -1));

 }
 return (0);
}
