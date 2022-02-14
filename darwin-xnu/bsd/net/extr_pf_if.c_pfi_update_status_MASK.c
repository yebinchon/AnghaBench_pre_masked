
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfi_kif_cmp {int pfik_name; } ;
struct pfi_kif {int pfik_tzero; scalar_t__*** pfik_bytes; scalar_t__*** pfik_packets; } ;
struct pf_status {scalar_t__*** bcounters; scalar_t__*** pcounters; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 struct pfi_kif* FUNC_1 (int ,int *,struct pfi_kif*) ;
 int FUNC_2 (scalar_t__***,int) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,char const*,int) ;

void
FUNC_5(const char *VAR_4, struct pf_status *VAR_5)
{
 struct pfi_kif *VAR_6;
 struct pfi_kif_cmp VAR_7;
 int VAR_8, VAR_9, VAR_10;

 FUNC_0(VAR_1, VAR_0);

 FUNC_4(VAR_7.pfik_name, VAR_4, sizeof (VAR_7.pfik_name));
 VAR_6 = FUNC_1(VAR_2, &VAR_3, (struct pfi_kif *)(void *)&VAR_7);
 if (VAR_6 == ((void*)0))
  return;

 if (VAR_5 != ((void*)0)) {
  FUNC_2(VAR_5->pcounters, sizeof (VAR_5->pcounters));
  FUNC_2(VAR_5->bcounters, sizeof (VAR_5->bcounters));
  for (VAR_8 = 0; VAR_8 < 2; VAR_8++)
   for (VAR_9 = 0; VAR_9 < 2; VAR_9++)
    for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
     VAR_5->pcounters[VAR_8][VAR_9][VAR_10] +=
      VAR_6->pfik_packets[VAR_8][VAR_9][VAR_10];
     VAR_5->bcounters[VAR_8][VAR_9] +=
      VAR_6->pfik_bytes[VAR_8][VAR_9][VAR_10];
    }
 } else {

  FUNC_2(VAR_6->pfik_packets, sizeof (VAR_6->pfik_packets));
  FUNC_2(VAR_6->pfik_bytes, sizeof (VAR_6->pfik_bytes));
  VAR_6->pfik_tzero = FUNC_3();
 }
}
