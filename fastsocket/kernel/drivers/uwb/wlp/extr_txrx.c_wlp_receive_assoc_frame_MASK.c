
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {int * data; } ;
struct wlp_session {scalar_t__ exp_message; TYPE_3__ neighbor_addr; int (* cb ) (struct wlp*) ;struct sk_buff* data; } ;
struct wlp_frame_assoc {scalar_t__ type; int version; } ;
struct wlp {struct wlp_session* session; TYPE_2__* rc; } ;
struct uwb_dev_addr {int * data; } ;
struct sk_buff {scalar_t__ data; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_5__ {TYPE_1__ uwb_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (TYPE_3__*,struct uwb_dev_addr*,int) ;
 int FUNC_3 (struct wlp*) ;
 int FUNC_4 (struct wlp*,struct sk_buff*,struct uwb_dev_addr*) ;
 scalar_t__ FUNC_5 (struct wlp*,int *,scalar_t__*,int) ;

__attribute__((used)) static
void FUNC_6(struct wlp *VAR_2, struct sk_buff *VAR_3,
        struct uwb_dev_addr *VAR_4)
{
 struct device *VAR_5 = &VAR_2->rc->uwb_dev.dev;
 struct wlp_frame_assoc *VAR_6 = (void *) VAR_3->data;
 struct wlp_session *VAR_7 = VAR_2->session;
 u8 VAR_8;

 if (FUNC_5(VAR_2, &VAR_6->version, &VAR_8,
       sizeof(VAR_6->version)) < 0)
  goto error;
 if (VAR_8 != VAR_1) {
  FUNC_0(VAR_5, "Unsupported WLP version in association "
   "message.\n");
  goto error;
 }
 if (VAR_7 != ((void*)0)) {


  if (VAR_6->type == VAR_7->exp_message ||
      VAR_6->type == VAR_0) {
   if (!FUNC_2(&VAR_7->neighbor_addr, VAR_4,
       sizeof(*VAR_4))) {
    VAR_7->data = VAR_3;
    (VAR_7->cb)(VAR_2);
   } else {
    FUNC_0(VAR_5, "Received expected message from "
     "unexpected source.  Expected message "
     "%d or F0 from %02x:%02x, but received "
     "it from %02x:%02x. Dropping.\n",
     VAR_7->exp_message,
     VAR_7->neighbor_addr.data[1],
     VAR_7->neighbor_addr.data[0],
     VAR_4->data[1], VAR_4->data[0]);
    goto error;
   }
  } else {
   FUNC_0(VAR_5, "Association already in progress. "
    "Dropping.\n");
   goto error;
  }
 } else {
  FUNC_4(VAR_2, VAR_3, VAR_4);
 }
 return;
error:
 FUNC_1(VAR_3);
}
