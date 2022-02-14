
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union oid_res_t {struct obj_bsslist* ptr; int u; } ;
typedef int u32 ;
struct prism2_hostapd_param {int dummy; } ;
struct obj_bsslist {int * bsslist; scalar_t__ nr; } ;
struct net_device {int dummy; } ;
struct iw_request_info {scalar_t__ flags; int cmd; } ;
typedef int islpci_private ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct obj_bsslist*) ;
 int FUNC_2 (int *,int ,int ,int *,union oid_res_t*) ;
 int FUNC_3 (int ,int) ;
 int * FUNC_4 (struct net_device*) ;
 char* FUNC_5 (struct net_device*,struct iw_request_info*,char*,char*,int *,int ) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_6,
                     struct prism2_hostapd_param *VAR_7)
{
 islpci_private *VAR_8 = FUNC_4(VAR_6);
 struct iw_request_info VAR_9;
 int VAR_10, VAR_11;
 struct obj_bsslist *VAR_12;
 u32 VAR_13 = 0;
 char *VAR_14 = "";
 char *VAR_15 = "foo";
 union oid_res_t VAR_16;

 if (FUNC_0(VAR_8) < VAR_5) {

  return 0;
 }


 VAR_11 = FUNC_2(VAR_8, VAR_1, 0, ((void*)0), &VAR_16);
 VAR_13 = VAR_16.u;





 VAR_11 |= FUNC_2(VAR_8, VAR_0, 0, ((void*)0), &VAR_16);
 VAR_12 = VAR_16.ptr;

 VAR_9.cmd = VAR_4;
 VAR_9.flags = 0;


 for (VAR_10 = 0; VAR_10 < FUNC_3(VAR_2, (int) VAR_12->nr); VAR_10++)
  VAR_15 = FUNC_5(VAR_6, &VAR_9, VAR_15,
         VAR_14 + VAR_3,
         &(VAR_12->bsslist[VAR_10]),
         VAR_13);
 FUNC_1(VAR_12);

 return VAR_11;
}
