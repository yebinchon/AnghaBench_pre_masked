
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp_wss_info {int dummy; } ;
struct wlp_wss {int bcast; int secure_status; int accept_enroll; int name; int wssid; } ;
struct wlp_attr_wss_info {int hdr; void* wss_info; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*,int ) ;
 int FUNC_2 (int *,int ,size_t) ;
 scalar_t__ FUNC_3 (void*,int *) ;
 scalar_t__ FUNC_4 (void*,int ,int) ;
 scalar_t__ FUNC_5 (void*,int ) ;
 size_t FUNC_6 (void*,int *) ;

__attribute__((used)) static size_t FUNC_7(struct wlp_attr_wss_info *VAR_1,
          struct wlp_wss *VAR_2)
{
 size_t VAR_3;
 void *VAR_4 = VAR_1->wss_info;
 size_t VAR_5 = sizeof(*VAR_1);

 VAR_3 = sizeof(struct wlp_wss_info) + FUNC_0(VAR_2->name);
 FUNC_2(&VAR_1->hdr, VAR_0, VAR_3);
 VAR_5 = FUNC_6(VAR_4, &VAR_2->wssid);
 VAR_5 += FUNC_4(VAR_4 + VAR_5, VAR_2->name, FUNC_0(VAR_2->name));
 VAR_5 += FUNC_1(VAR_4 + VAR_5, VAR_2->accept_enroll);
 VAR_5 += FUNC_5(VAR_4 + VAR_5, VAR_2->secure_status);
 VAR_5 += FUNC_3(VAR_4 + VAR_5, &VAR_2->bcast);
 return sizeof(*VAR_1) + VAR_5;
}
