
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_ud_header {int immediate_data; scalar_t__ immediate_present; int deth; int bth; int grh; scalar_t__ grh_present; int vlan; scalar_t__ vlan_present; int eth; scalar_t__ eth_present; int lrh; scalar_t__ lrh_present; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ,int *,void*) ;
 int VAR_10 ;
 int FUNC_2 (void*,int *,int) ;
 int VAR_11 ;

int FUNC_3(struct ib_ud_header *VAR_12,
        void *VAR_13)
{
 int VAR_14 = 0;

 if (VAR_12->lrh_present) {
  FUNC_1(VAR_10, FUNC_0(VAR_10),
   &VAR_12->lrh, VAR_13 + VAR_14);
  VAR_14 += VAR_4;
 }
 if (VAR_12->eth_present) {
  FUNC_1(VAR_8, FUNC_0(VAR_8),
   &VAR_12->eth, VAR_13 + VAR_14);
  VAR_14 += VAR_2;
 }
 if (VAR_12->vlan_present) {
  FUNC_1(VAR_11, FUNC_0(VAR_11),
   &VAR_12->vlan, VAR_13 + VAR_14);
  VAR_14 += VAR_5;
 }
 if (VAR_12->grh_present) {
  FUNC_1(VAR_9, FUNC_0(VAR_9),
   &VAR_12->grh, VAR_13 + VAR_14);
  VAR_14 += VAR_3;
 }

 FUNC_1(VAR_6, FUNC_0(VAR_6),
  &VAR_12->bth, VAR_13 + VAR_14);
 VAR_14 += VAR_0;

 FUNC_1(VAR_7, FUNC_0(VAR_7),
  &VAR_12->deth, VAR_13 + VAR_14);
 VAR_14 += VAR_1;

 if (VAR_12->immediate_present) {
  FUNC_2(VAR_13 + VAR_14, &VAR_12->immediate_data, sizeof VAR_12->immediate_data);
  VAR_14 += sizeof VAR_12->immediate_data;
 }

 return VAR_14;
}
