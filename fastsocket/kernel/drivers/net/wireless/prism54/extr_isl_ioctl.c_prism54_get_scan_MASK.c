
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union oid_res_t {struct obj_bsslist* ptr; int u; } ;
typedef int u32 ;
struct obj_bsslist {int * bsslist; scalar_t__ nr; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; scalar_t__ flags; } ;
typedef int islpci_private ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct obj_bsslist*) ;
 int FUNC_2 (int *,int ,int ,int *,union oid_res_t*) ;
 int * FUNC_3 (struct net_device*) ;
 char* FUNC_4 (struct net_device*,struct iw_request_info*,char*,char*,int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_5, struct iw_request_info *VAR_6,
   struct iw_point *VAR_7, char *VAR_8)
{
 islpci_private *VAR_9 = FUNC_3(VAR_5);
 int VAR_10, VAR_11;
 struct obj_bsslist *VAR_12;
 u32 VAR_13 = 0;
 char *VAR_14 = VAR_8;
 union oid_res_t VAR_15;

 if (FUNC_0(VAR_9) < VAR_4) {

  VAR_7->length = 0;
  return 0;
 }


 VAR_11 = FUNC_2(VAR_9, VAR_1, 0, ((void*)0), &VAR_15);
 VAR_13 = VAR_15.u;
 VAR_11 |= FUNC_2(VAR_9, VAR_0, 0, ((void*)0), &VAR_15);
 VAR_12 = VAR_15.ptr;


 for (VAR_10 = 0; VAR_10 < (int) VAR_12->nr; VAR_10++) {
  VAR_14 = FUNC_4(VAR_5, VAR_6, VAR_14,
         VAR_8 + VAR_7->length,
         &(VAR_12->bsslist[VAR_10]),
         VAR_13);


  if((VAR_8 + VAR_7->length - VAR_14) <= VAR_3) {

   VAR_11 = -VAR_2;
   break;
  }
 }

 FUNC_1(VAR_12);
 VAR_7->length = (VAR_14 - VAR_8);
 VAR_7->flags = 0;

 return VAR_11;
}
