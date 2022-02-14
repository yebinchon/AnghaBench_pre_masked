
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sn_hwperf_port_info {int conn_id; } ;
struct sn_hwperf_object_info {int ports; scalar_t__ id; } ;
typedef int ptdata ;
typedef scalar_t__ cnodeid_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct sn_hwperf_object_info*) ;
 scalar_t__ FUNC_2 (struct sn_hwperf_object_info*) ;
 int FUNC_3 (struct sn_hwperf_object_info*) ;
 scalar_t__ FUNC_4 (struct sn_hwperf_object_info*) ;
 int VAR_4 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int ,scalar_t__,int,int ,int ,int ,int *) ;
 struct sn_hwperf_object_info* FUNC_7 (struct sn_hwperf_object_info*,int,int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (struct sn_hwperf_object_info*) ;

__attribute__((used)) static int FUNC_11(struct sn_hwperf_object_info *VAR_6,
 int VAR_7, cnodeid_t VAR_8, cnodeid_t *VAR_9, cnodeid_t *VAR_10)
{
 int VAR_11;
 struct sn_hwperf_object_info *VAR_12 = ((void*)0);
 struct sn_hwperf_object_info *VAR_13;
 struct sn_hwperf_object_info *VAR_14;
 struct sn_hwperf_object_info *VAR_15;
 struct sn_hwperf_port_info VAR_16[16];
 int VAR_17, VAR_18, VAR_19;
 cnodeid_t VAR_20;
 int VAR_21 = 0;
 int VAR_22 = 0;

 if (!FUNC_5(VAR_8))
  return -VAR_0;

 if (FUNC_8(VAR_8)) {
  if (VAR_10)
   *VAR_10 = VAR_8;
  VAR_22++;
 }

 if (FUNC_9(VAR_8)) {
  if (VAR_9)
   *VAR_9 = VAR_8;
  VAR_21++;
 }

 if (VAR_22 && VAR_21)
  return 0;


 for (VAR_18=0, VAR_13=VAR_6; VAR_18 < VAR_7; VAR_18++, VAR_13++) {
  if (!FUNC_3(VAR_13) && !FUNC_2(VAR_13))
   continue;
  if (VAR_8 == FUNC_10(VAR_13)) {
   VAR_12 = VAR_13;
   break;
  }
 }
 if (!VAR_12) {
  VAR_11 = -VAR_2;
  goto err;
 }


 VAR_17 = VAR_13->ports * sizeof(struct sn_hwperf_port_info);
 FUNC_0(VAR_17 > sizeof(VAR_16));
 VAR_11 = FUNC_6(VAR_5,
         VAR_3, VAR_12->id, VAR_17,
         (u64)&VAR_16, 0, 0, ((void*)0));
 if (VAR_11 != VAR_4) {
  VAR_11 = -VAR_0;
  goto err;
 }


 for (VAR_15=((void*)0), VAR_19=0; VAR_19 < VAR_13->ports; VAR_19++) {
  VAR_14 = FUNC_7(VAR_6, VAR_7, VAR_16[VAR_19].conn_id);
  if (VAR_14 && FUNC_4(VAR_14))
   VAR_15 = VAR_14;
  if (!VAR_14 || FUNC_1(VAR_14) ||
      !FUNC_3(VAR_14) || FUNC_2(VAR_14)) {
   continue;
  }
  VAR_20 = FUNC_10(VAR_14);
  if (!VAR_22 && FUNC_8(VAR_20)) {
   if (VAR_10)
    *VAR_10 = VAR_20;
   VAR_22++;
  }
  if (!VAR_21 && FUNC_9(VAR_20)) {
   if (VAR_9)
    *VAR_9 = VAR_20;
   VAR_21++;
  }
 }

 if (VAR_15 && (!VAR_22 || !VAR_21)) {

  VAR_17 = VAR_15->ports * sizeof(struct sn_hwperf_port_info);
  FUNC_0(VAR_17 > sizeof(VAR_16));
  VAR_11 = FUNC_6(VAR_5,
          VAR_3, VAR_15->id, VAR_17,
          (u64)&VAR_16, 0, 0, ((void*)0));
  if (VAR_11 != VAR_4) {
   VAR_11 = -VAR_0;
   goto err;
  }
  for (VAR_19=0; VAR_19 < VAR_15->ports; VAR_19++) {
   VAR_14 = FUNC_7(VAR_6, VAR_7,
    VAR_16[VAR_19].conn_id);
   if (!VAR_14 || VAR_14->id == VAR_8 ||
       FUNC_1(VAR_14) ||
       !FUNC_3(VAR_14) ||
       FUNC_2(VAR_14)) {
    continue;
   }
   VAR_20 = FUNC_10(VAR_14);
   if (!VAR_22 && FUNC_8(VAR_20)) {
    if (VAR_10)
     *VAR_10 = VAR_20;
    VAR_22++;
   }
   if (!VAR_21 && FUNC_9(VAR_20)) {
    if (VAR_9)
     *VAR_9 = VAR_20;
    VAR_21++;
   }
   if (VAR_22 && VAR_21)
    break;
  }
 }

 if (!VAR_22 || !VAR_21) {

  for (VAR_18=0, VAR_13=VAR_6; VAR_18 < VAR_7; VAR_18++, VAR_13++) {
   if (FUNC_1(VAR_13) ||
       FUNC_2(VAR_13) ||
       !FUNC_3(VAR_13)) {
    continue;
   }
   VAR_20 = FUNC_10(VAR_13);
   if (!VAR_22 && FUNC_8(VAR_20)) {
    if (VAR_10)
     *VAR_10 = VAR_20;
    VAR_22++;
   }
   if (!VAR_21 && FUNC_9(VAR_20)) {
    if (VAR_9)
     *VAR_9 = VAR_20;
    VAR_21++;
   }
   if (VAR_22 && VAR_21)
    break;
  }
 }

 if (!VAR_22 || !VAR_21)
  VAR_11 = -VAR_1;

err:
 return VAR_11;
}
