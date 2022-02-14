
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int rth_bkt_sz; int rth_algorithm; int rth_hash_type_ipv6ex; int rth_hash_type_tcpipv6ex; int rth_hash_type_ipv6; int rth_hash_type_tcpipv6; int rth_hash_type_ipv4; int rth_hash_type_tcpipv4; } ;
struct vxgedev {int no_of_vpath; TYPE_2__* vpaths; TYPE_1__ config; int vp_handles; } ;
struct vxge_hw_rth_hash_types {int hash_type_ipv6ex_en; int hash_type_tcpipv6ex_en; int hash_type_ipv6_en; int hash_type_tcpipv6_en; int hash_type_ipv4_en; int hash_type_tcpipv4_en; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
struct TYPE_4__ {int device_id; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int,int*,int*,int) ;
 int FUNC_2 (int ,int ,struct vxge_hw_rth_hash_types*,int) ;

__attribute__((used)) static enum vxge_hw_status FUNC_3(struct vxgedev *VAR_2)
{
 enum vxge_hw_status VAR_3 = VAR_1;
 struct vxge_hw_rth_hash_types VAR_4;
 u8 VAR_5[256] = {0};
 u8 VAR_6[256] = {0};
 int VAR_7;






 for (VAR_7 = 0; VAR_7 < (1 << VAR_2->config.rth_bkt_sz); VAR_7++) {
  VAR_5[VAR_7] = VAR_7;
  VAR_6[VAR_7] = VAR_7 % VAR_2->no_of_vpath;
 }


 VAR_4.hash_type_tcpipv4_en = VAR_2->config.rth_hash_type_tcpipv4;
 VAR_4.hash_type_ipv4_en = VAR_2->config.rth_hash_type_ipv4;
 VAR_4.hash_type_tcpipv6_en = VAR_2->config.rth_hash_type_tcpipv6;
 VAR_4.hash_type_ipv6_en = VAR_2->config.rth_hash_type_ipv6;
 VAR_4.hash_type_tcpipv6ex_en =
     VAR_2->config.rth_hash_type_tcpipv6ex;
 VAR_4.hash_type_ipv6ex_en = VAR_2->config.rth_hash_type_ipv6ex;


 VAR_3 = FUNC_1(VAR_2->vp_handles,
      VAR_2->no_of_vpath,
      VAR_6, VAR_5,
      VAR_2->config.rth_bkt_sz);
 if (VAR_3 != VAR_1) {
  FUNC_0(VAR_0,
   "RTH indirection table configuration failed "
   "for vpath:%d", VAR_2->vpaths[0].device_id);
  return VAR_3;
 }







  for (VAR_7 = 0; VAR_7 < VAR_2->no_of_vpath; VAR_7++) {
  VAR_3 = FUNC_2(
    VAR_2->vpaths[VAR_7].handle,
    VAR_2->config.rth_algorithm,
    &VAR_4,
    VAR_2->config.rth_bkt_sz);

   if (VAR_3 != VAR_1) {
   FUNC_0(VAR_0,
    "RTH configuration failed for vpath:%d",
    VAR_2->vpaths[VAR_7].device_id);
   return VAR_3;
   }
  }

 return VAR_3;
}
