
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfs_pattern_detector {scalar_t__ (* set_dfs_domain ) (struct dfs_pattern_detector*,int) ;struct ath_hw* ah; int channel_detectors; } ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;
typedef enum nl80211_dfs_regions { ____Placeholder_nl80211_dfs_regions } nl80211_dfs_regions ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_common*,int ,char*,int) ;
 struct dfs_pattern_detector VAR_2 ;
 int FUNC_3 (struct dfs_pattern_detector*) ;
 struct dfs_pattern_detector* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (struct dfs_pattern_detector*,int) ;

struct dfs_pattern_detector *
FUNC_6(struct ath_hw *VAR_3, enum nl80211_dfs_regions VAR_4)
{
 struct dfs_pattern_detector *VAR_5;
 struct ath_common *VAR_6 = FUNC_1(VAR_3);

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 *VAR_5 = VAR_2;
 FUNC_0(&VAR_5->channel_detectors);

 VAR_5->ah = VAR_3;
 if (VAR_5->set_dfs_domain(VAR_5, VAR_4))
  return VAR_5;

 FUNC_2(VAR_6, VAR_0,"Could not set DFS domain to %d", VAR_4);
 FUNC_3(VAR_5);
 return ((void*)0);
}
