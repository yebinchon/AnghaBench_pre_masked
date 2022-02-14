
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct synthvid_version_req {int dummy; } ;
struct synthvid_msg_hdr {int dummy; } ;
struct TYPE_6__ {int is_accepted; } ;
struct TYPE_5__ {void* version; } ;
struct TYPE_4__ {int size; int type; } ;
struct synthvid_msg {TYPE_3__ ver_resp; TYPE_2__ ver_req; TYPE_1__ vid_hdr; } ;
struct hvfb_par {void* synthvid_version; int wait; scalar_t__ init_buf; } ;
struct hv_device {int dummy; } ;
struct fb_info {struct hvfb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct fb_info* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (struct synthvid_msg*,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct hv_device*,struct synthvid_msg*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct hv_device *VAR_4, u32 VAR_5)
{
 struct fb_info *VAR_6 = FUNC_0(VAR_4);
 struct hvfb_par *VAR_7 = VAR_6->par;
 struct synthvid_msg *VAR_8 = (struct synthvid_msg *)VAR_7->init_buf;
 int VAR_9, VAR_10 = 0;

 FUNC_1(VAR_8, 0, sizeof(struct synthvid_msg));
 VAR_8->vid_hdr.type = VAR_2;
 VAR_8->vid_hdr.size = sizeof(struct synthvid_msg_hdr) +
  sizeof(struct synthvid_version_req);
 VAR_8->ver_req.version = VAR_5;
 FUNC_3(VAR_4, VAR_8);

 VAR_9 = FUNC_4(&VAR_7->wait, VAR_3);
 if (!VAR_9) {
  FUNC_2("Time out on waiting version response\n");
  VAR_10 = -VAR_1;
  goto out;
 }
 if (!VAR_8->ver_resp.is_accepted) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_7->synthvid_version = VAR_5;

out:
 return VAR_10;
}
