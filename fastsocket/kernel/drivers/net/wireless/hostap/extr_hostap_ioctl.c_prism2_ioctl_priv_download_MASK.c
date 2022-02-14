
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct prism2_download_param {int num_areas; } ;
struct prism2_download_area {int dummy; } ;
struct iw_point {int length; int pointer; } ;
struct TYPE_6__ {TYPE_1__* func; } ;
typedef TYPE_2__ local_info_t ;
struct TYPE_5__ {int (* download ) (TYPE_2__*,struct prism2_download_param*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct prism2_download_param*,int ,int) ;
 int FUNC_1 (struct prism2_download_param*) ;
 struct prism2_download_param* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_2__*,struct prism2_download_param*) ;

__attribute__((used)) static int FUNC_4(local_info_t *VAR_4, struct iw_point *VAR_5)
{
 struct prism2_download_param *VAR_6;
 int VAR_7 = 0;

 if (VAR_5->length < sizeof(struct prism2_download_param) ||
     VAR_5->length > 1024 || !VAR_5->pointer)
  return -VAR_1;

 VAR_6 = FUNC_2(VAR_5->length, VAR_3);
 if (VAR_6 == ((void*)0))
  return -VAR_2;

 if (FUNC_0(VAR_6, VAR_5->pointer, VAR_5->length)) {
  VAR_7 = -VAR_0;
  goto out;
 }

 if (VAR_5->length < sizeof(struct prism2_download_param) +
     VAR_6->num_areas * sizeof(struct prism2_download_area)) {
  VAR_7 = -VAR_1;
  goto out;
 }

 VAR_7 = VAR_4->func->download(VAR_4, VAR_6);

 out:
 FUNC_1(VAR_6);
 return VAR_7;
}
