
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct prism2_hostapd_param {int cmd; } ;
struct iw_point {int length; int pointer; } ;
struct TYPE_11__ {int ap; } ;
typedef TYPE_1__ local_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;






 scalar_t__ FUNC_0 (struct prism2_hostapd_param*,int ,int) ;
 scalar_t__ FUNC_1 (int ,struct prism2_hostapd_param*,int) ;
 int FUNC_2 (struct prism2_hostapd_param*) ;
 struct prism2_hostapd_param* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,struct prism2_hostapd_param*) ;
 int FUNC_5 (TYPE_1__*,struct prism2_hostapd_param*,int) ;
 int FUNC_6 (TYPE_1__*,struct prism2_hostapd_param*,int) ;
 int FUNC_7 (TYPE_1__*,struct prism2_hostapd_param*) ;
 int FUNC_8 (TYPE_1__*,struct prism2_hostapd_param*) ;
 int FUNC_9 (TYPE_1__*,struct prism2_hostapd_param*,int) ;
 int FUNC_10 (TYPE_1__*,struct prism2_hostapd_param*,int) ;
 int FUNC_11 (TYPE_1__*,struct prism2_hostapd_param*,int) ;
 int FUNC_12 (TYPE_1__*,struct prism2_hostapd_param*,int) ;

__attribute__((used)) static int FUNC_13(local_info_t *VAR_5, struct iw_point *VAR_6)
{
 struct prism2_hostapd_param *VAR_7;
 int VAR_8 = 0;
 int VAR_9 = 0;

 if (VAR_6->length < sizeof(struct prism2_hostapd_param) ||
     VAR_6->length > VAR_4 || !VAR_6->pointer)
  return -VAR_1;

 VAR_7 = FUNC_3(VAR_6->length, VAR_3);
 if (VAR_7 == ((void*)0))
  return -VAR_2;

 if (FUNC_0(VAR_7, VAR_6->pointer, VAR_6->length)) {
  VAR_8 = -VAR_0;
  goto out;
 }

 switch (VAR_7->cmd) {
 case 128:
  VAR_8 = FUNC_10(VAR_5, VAR_7, VAR_6->length);
  break;
 case 135:
  VAR_8 = FUNC_5(VAR_5, VAR_7, VAR_6->length);
  break;
 case 134:
  VAR_8 = FUNC_6(VAR_5, VAR_7, VAR_6->length);
  break;
 case 129:
  VAR_8 = FUNC_12(VAR_5, VAR_7, VAR_6->length);
  break;
 case 131:
  VAR_8 = FUNC_9(VAR_5, VAR_7, VAR_6->length);
  break;
 case 130:
  VAR_8 = FUNC_11(VAR_5, VAR_7,
             VAR_6->length);
  break;
 case 133:
  VAR_8 = FUNC_7(VAR_5, VAR_7);
  break;
 case 132:
  VAR_8 = FUNC_8(VAR_5, VAR_7);
  break;
 default:
  VAR_8 = FUNC_4(VAR_5->ap, VAR_7);
  VAR_9 = 1;
  break;
 }

 if (VAR_8 == 1 || !VAR_9) {
  if (FUNC_1(VAR_6->pointer, VAR_7, VAR_6->length)) {
   VAR_8 = -VAR_0;
   goto out;
  } else if (VAR_9)
   VAR_8 = 0;
 }

 out:
 FUNC_2(VAR_7);
 return VAR_8;
}
