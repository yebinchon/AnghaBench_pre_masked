
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hpsb_iso {int dummy; } ;
struct firedtv {struct hpsb_iso* backend_data; int device; int isochannel; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 struct hpsb_iso* FUNC_1 (int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_2 (struct hpsb_iso*,int,int,int ) ;
 int FUNC_3 (struct hpsb_iso*) ;
 TYPE_1__* FUNC_4 (struct firedtv*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct firedtv *VAR_5)
{
 struct hpsb_iso *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(FUNC_4(VAR_5)->host,
    VAR_2, VAR_1,
    VAR_5->isochannel, VAR_3,
    -1,
    VAR_4);
 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_5->device, "cannot initialize iso receive\n");
  return -VAR_0;
 }
 VAR_5->backend_data = VAR_6;

 VAR_7 = FUNC_2(VAR_6, -1, -1, 0);
 if (VAR_7 != 0) {
  FUNC_0(VAR_5->device, "cannot start iso receive\n");
  FUNC_3(VAR_6);
  VAR_5->backend_data = ((void*)0);
 }
 return VAR_7;
}
