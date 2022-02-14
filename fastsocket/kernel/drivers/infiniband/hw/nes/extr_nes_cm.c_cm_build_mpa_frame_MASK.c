
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nes_cm_node {int mpa_frame_rev; int mpa_frame_size; int * mpa_frame_buf; } ;
struct ietf_rtr_msg {int dummy; } ;
struct ietf_mpa_v2 {int dummy; } ;
struct ietf_mpa_v1 {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct nes_cm_node*,int *,int ) ;
 int FUNC_1 (struct nes_cm_node*,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct nes_cm_node *VAR_1, u8 **VAR_2,
         u16 *VAR_3, u8 *VAR_4, u8 VAR_5)
{
 int VAR_6 = 0;

 *VAR_2 = (VAR_4) ? VAR_4 : &VAR_1->mpa_frame_buf[0];

 switch (VAR_1->mpa_frame_rev) {
 case 129:
  *VAR_2 = (u8 *)*VAR_2 + sizeof(struct ietf_rtr_msg);
  *VAR_3 = sizeof(struct ietf_mpa_v1) + VAR_1->mpa_frame_size;
  FUNC_0(VAR_1, *VAR_2, VAR_5);
  break;
 case 128:
  *VAR_3 = sizeof(struct ietf_mpa_v2) + VAR_1->mpa_frame_size;
  FUNC_1(VAR_1, *VAR_2, VAR_5);
  break;
 default:
  VAR_6 = -VAR_0;
 }
 return VAR_6;
}
