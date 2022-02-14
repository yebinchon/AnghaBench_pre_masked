
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_segment_priv {int prot; int pg_count; int pg_start; } ;
struct agp_segment {int prot; int pg_count; int pg_start; } ;
struct agp_region {int seg_count; struct agp_segment_priv* seg_list; } ;
struct agp_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct agp_client*,struct agp_segment_priv**,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct agp_segment_priv*) ;
 struct agp_segment_priv** FUNC_3 (int,int ) ;
 struct agp_segment_priv* FUNC_4 (int,int ) ;

int FUNC_5(struct agp_client *VAR_2, struct agp_region *VAR_3)
{
 struct agp_segment_priv **VAR_4;
 struct agp_segment_priv *VAR_5;
 struct agp_segment *VAR_6;
 size_t VAR_7;

 VAR_5 = FUNC_4((sizeof(struct agp_segment_priv) * VAR_3->seg_count), VAR_1);
 if (VAR_5 == ((void*)0)) {
  FUNC_2(VAR_3->seg_list);
  VAR_3->seg_list = ((void*)0);
  return -VAR_0;
 }
 VAR_6 = VAR_3->seg_list;

 for (VAR_7 = 0; VAR_7 < VAR_3->seg_count; VAR_7++) {
  VAR_5[VAR_7].pg_start = VAR_6[VAR_7].pg_start;
  VAR_5[VAR_7].pg_count = VAR_6[VAR_7].pg_count;
  VAR_5[VAR_7].prot = FUNC_1(VAR_6[VAR_7].prot);
 }
 FUNC_2(VAR_3->seg_list);
 VAR_3->seg_list = ((void*)0);

 VAR_4 = FUNC_3(sizeof(void *), VAR_1);
 if (VAR_4 == ((void*)0)) {
  FUNC_2(VAR_5);
  return -VAR_0;
 }
 *VAR_4 = VAR_5;
 FUNC_0(VAR_2, VAR_4, VAR_3->seg_count);
 return 0;
}
