
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ u_int32_t ;
struct pf_fragment {scalar_t__ fr_timeout; int fr_af; int fr_id6; int fr_id; } ;
struct TYPE_2__ {scalar_t__* timeout; } ;




 int FUNC_0 (struct pf_fragment*) ;
 int FUNC_1 (char*) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 struct pf_fragment* FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct pf_fragment*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (struct pf_fragment*) ;
 scalar_t__ FUNC_9 () ;

void
FUNC_10(void)
{
 struct pf_fragment *VAR_4;
 u_int32_t VAR_5 = FUNC_9() -
     VAR_2.timeout[VAR_0];

 while ((VAR_4 = FUNC_3(&VAR_3, VAR_3)) != ((void*)0)) {
  FUNC_4(FUNC_0(VAR_4));
  if (VAR_4->fr_timeout > VAR_5)
   break;

  switch (VAR_4->fr_af) {
  case 129:
        FUNC_1(("expiring IPv4 %d(0x%llx) from queue.\n",
     FUNC_7(VAR_4->fr_id),
     (uint64_t)FUNC_5(VAR_4)));
        break;
  case 128:
        FUNC_1(("expiring IPv6 %d(0x%llx) from queue.\n",
     FUNC_6(VAR_4->fr_id6),
     (uint64_t)FUNC_5(VAR_4)));
        break;
  default:
        FUNC_4(0 && "only IPv4 and IPv6 supported");
        break;
  }
  FUNC_8(VAR_4);
 }

 while ((VAR_4 = FUNC_3(&VAR_1, VAR_1)) != ((void*)0)) {
  FUNC_4(!FUNC_0(VAR_4));
  if (VAR_4->fr_timeout > VAR_5)
   break;

  switch (VAR_4->fr_af) {
  case 129:
        FUNC_1(("expiring IPv4 %d(0x%llx) from cache.\n",
     FUNC_7(VAR_4->fr_id),
     (uint64_t)FUNC_5(VAR_4)));
        break;
  case 128:
        FUNC_1(("expiring IPv6 %d(0x%llx) from cache.\n",
     FUNC_6(VAR_4->fr_id6),
     (uint64_t)FUNC_5(VAR_4)));
        break;
  default:
        FUNC_4(0 && "only IPv4 and IPv6 supported");
        break;
  }
  FUNC_8(VAR_4);
  FUNC_4(FUNC_2(&VAR_1) ||
      FUNC_3(&VAR_1, VAR_1) != VAR_4);
 }
}
