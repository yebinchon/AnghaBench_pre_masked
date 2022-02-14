
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int voice_priority ;
typedef int u8 ;
struct ath_mci_profile_info {scalar_t__ type; int voice_type; int list; } ;
struct ath_mci_profile {scalar_t__ num_sco; int voice_priority; int info; } ;
struct ath_common {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_mci_profile*,struct ath_mci_profile_info*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct ath_mci_profile*) ;
 struct ath_mci_profile_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct ath_mci_profile_info*,struct ath_mci_profile_info*,int) ;

__attribute__((used)) static bool FUNC_5(struct ath_common *VAR_4,
    struct ath_mci_profile *VAR_5,
    struct ath_mci_profile_info *VAR_6)
{
 struct ath_mci_profile_info *VAR_7;
 u8 VAR_8[] = { 110, 110, 110, 112, 110, 110, 114, 116, 118 };

 if ((VAR_5->num_sco == VAR_1) &&
     (VAR_6->type == VAR_3))
  return 0;

 if (((FUNC_1(VAR_5) - VAR_5->num_sco) == VAR_0) &&
     (VAR_6->type != VAR_3))
  return 0;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return 0;

 FUNC_4(VAR_7, VAR_6, 10);
 FUNC_0(VAR_5, VAR_6);
 FUNC_3(&VAR_7->list, &VAR_5->info);
 if (VAR_6->type == VAR_3) {
  if (VAR_6->voice_type < sizeof(VAR_8))
   VAR_5->voice_priority = VAR_8[VAR_6->voice_type];
  else
   VAR_5->voice_priority = 110;
 }

 return 1;
}
