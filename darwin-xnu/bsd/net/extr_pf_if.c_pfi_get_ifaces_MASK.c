
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef int u ;
struct pfi_uif {int pfik_rules; int pfik_states; int pfik_flags; scalar_t__ pfik_tzero; int pfik_bytes; int pfik_packets; int pfik_name; } ;
struct pfi_kif {int pfik_rules; int pfik_states; int pfik_flags; scalar_t__ pfik_tzero; int pfik_bytes; int pfik_packets; int pfik_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct pfi_kif* FUNC_1 (int ,int *) ;
 struct pfi_kif* FUNC_2 (int ,int *,struct pfi_kif*) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (struct pfi_uif*,int) ;
 scalar_t__ FUNC_5 (struct pfi_uif*,int,int) ;
 scalar_t__ FUNC_6 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct pfi_kif*,int ) ;
 int FUNC_8 (struct pfi_kif*,int ) ;
 scalar_t__ FUNC_9 (char const*,struct pfi_kif*) ;

int
FUNC_10(const char *VAR_6, user_addr_t VAR_7, int *VAR_8)
{
 struct pfi_kif *VAR_9, *VAR_10;
 int VAR_11 = 0;

 FUNC_0(VAR_3, VAR_1);

 for (VAR_9 = FUNC_1(VAR_4, &VAR_5); VAR_9; VAR_9 = VAR_10) {
  VAR_10 = FUNC_2(VAR_4, &VAR_5, VAR_9);
  if (FUNC_9(VAR_6, VAR_9))
   continue;
  if (*VAR_8 > VAR_11++) {
   struct pfi_uif VAR_12;

   if (!VAR_9->pfik_tzero)
    VAR_9->pfik_tzero = FUNC_6();
   FUNC_7(VAR_9, VAR_2);


   FUNC_4(&VAR_12, sizeof (VAR_12));
   FUNC_3(VAR_9->pfik_name, &VAR_12.pfik_name, sizeof (VAR_12.pfik_name));
   FUNC_3(VAR_9->pfik_packets, &VAR_12.pfik_packets,
       sizeof (VAR_12.pfik_packets));
   FUNC_3(VAR_9->pfik_bytes, &VAR_12.pfik_bytes,
       sizeof (VAR_12.pfik_bytes));
   VAR_12.pfik_tzero = VAR_9->pfik_tzero;
   VAR_12.pfik_flags = VAR_9->pfik_flags;
   VAR_12.pfik_states = VAR_9->pfik_states;
   VAR_12.pfik_rules = VAR_9->pfik_rules;

   if (FUNC_5(&VAR_12, VAR_7, sizeof (VAR_12))) {
    FUNC_8(VAR_9, VAR_2);
    return (VAR_0);
   }
   VAR_7 += sizeof (VAR_12);
   VAR_10 = FUNC_2(VAR_4, &VAR_5, VAR_9);
   FUNC_8(VAR_9, VAR_2);
  }
 }
 *VAR_8 = VAR_11;
 return (0);
}
