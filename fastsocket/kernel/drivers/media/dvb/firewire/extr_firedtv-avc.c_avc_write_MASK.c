
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct firedtv {int avc_reply_received; int device; int avc_wait; int avc_data_length; int avc_data; TYPE_1__* backend; } ;
struct TYPE_2__ {int (* write ) (struct firedtv*,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct firedtv*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct firedtv *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_3->avc_reply_received = 0;

 for (VAR_5 = 0; VAR_5 < 6; VAR_5++) {
  if (FUNC_4(VAR_2))
   FUNC_0(VAR_3->avc_data, VAR_3->avc_data_length);

  VAR_4 = VAR_3->backend->write(VAR_3, VAR_1,
    VAR_3->avc_data, VAR_3->avc_data_length);
  if (VAR_4) {
   FUNC_1(VAR_3->device, "FCP command write failed\n");

   return VAR_4;
  }





  if (FUNC_5(VAR_3->avc_wait,
           VAR_3->avc_reply_received,
           FUNC_2(200)) != 0)
   return 0;
 }
 FUNC_1(VAR_3->device, "FCP response timed out\n");

 return -VAR_0;
}
