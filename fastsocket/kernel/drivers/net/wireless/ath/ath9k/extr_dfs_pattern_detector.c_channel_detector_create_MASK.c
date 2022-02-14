
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int u16 ;
struct radar_detector_specs {int dummy; } ;
struct pri_detector {int dummy; } ;
struct dfs_pattern_detector {int num_radar_types; int channel_detectors; struct radar_detector_specs* radar_spec; int ah; } ;
struct channel_detector {int head; struct pri_detector** detectors; int freq; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct ath_common* FUNC_1 (int ) ;
 int FUNC_2 (struct ath_common*,int ,char*,int ) ;
 int FUNC_3 (struct dfs_pattern_detector*,struct channel_detector*) ;
 struct channel_detector* FUNC_4 (int,int ) ;
 struct pri_detector** FUNC_5 (size_t,int ) ;
 int FUNC_6 (int *,int *) ;
 struct pri_detector* FUNC_7 (struct radar_detector_specs const*) ;

__attribute__((used)) static struct channel_detector *
FUNC_8(struct dfs_pattern_detector *VAR_2, u16 VAR_3)
{
 u32 VAR_4, VAR_5;
 struct channel_detector *VAR_6;
 struct ath_common *VAR_7 = FUNC_1(VAR_2->ah);

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0))
  goto fail;

 FUNC_0(&VAR_6->head);
 VAR_6->freq = VAR_3;
 VAR_4 = sizeof(VAR_6->detectors) * VAR_2->num_radar_types;
 VAR_6->detectors = FUNC_5(VAR_4, VAR_1);
 if (VAR_6->detectors == ((void*)0))
  goto fail;

 for (VAR_5 = 0; VAR_5 < VAR_2->num_radar_types; VAR_5++) {
  const struct radar_detector_specs *VAR_8 = &VAR_2->radar_spec[VAR_5];
  struct pri_detector *VAR_9 = FUNC_7(VAR_8);
  if (VAR_9 == ((void*)0))
   goto fail;
  VAR_6->detectors[VAR_5] = VAR_9;
 }
 FUNC_6(&VAR_6->head, &VAR_2->channel_detectors);
 return VAR_6;

fail:
 FUNC_2(VAR_7, VAR_0,
  "failed to allocate channel_detector for freq=%d\n", VAR_3);
 FUNC_3(VAR_2, VAR_6);
 return ((void*)0);
}
