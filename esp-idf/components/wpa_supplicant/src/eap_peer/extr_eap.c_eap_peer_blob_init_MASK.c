
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_config_blob {int dummy; } ;
struct eap_sm {TYPE_1__* blob; } ;
struct TYPE_2__ {char* name; scalar_t__ data; scalar_t__ len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

int FUNC_4(struct eap_sm *VAR_11)
{
 int VAR_12, VAR_13;

 if (!VAR_11)
  return -1;

 if (VAR_7 && VAR_8) {
  VAR_11->blob[0].name = (char *)FUNC_3(VAR_0+1);
  if (VAR_11->blob[0].name == ((void*)0)) {
   VAR_13 = -2;
   goto _out;
  }
  FUNC_2(VAR_11->blob[0].name, VAR_3, VAR_0+1);
  VAR_11->blob[0].len = VAR_8;
  VAR_11->blob[0].data = VAR_7;
 }

 if (VAR_9 && VAR_10) {
  VAR_11->blob[1].name = (char *)FUNC_3(VAR_0+1);
  if (VAR_11->blob[1].name == ((void*)0)) {
   VAR_13 = -2;
   goto _out;
  }
  FUNC_2(VAR_11->blob[1].name, VAR_4, VAR_0+1);
  VAR_11->blob[1].len = VAR_10;
  VAR_11->blob[1].data = VAR_9;
 }

 if (VAR_5 && VAR_6) {
  VAR_11->blob[2].name = (char *)FUNC_3(VAR_0+1);
  if (VAR_11->blob[2].name == ((void*)0)) {
   VAR_13 = -2;
   goto _out;
  }
  FUNC_2(VAR_11->blob[2].name, VAR_2, VAR_0+1);
  VAR_11->blob[2].len = VAR_6;
  VAR_11->blob[2].data = VAR_5;
 }

 return 0;
_out:
 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  if (VAR_11->blob[VAR_12].name) {
   FUNC_1(VAR_11->blob[VAR_12].name);
   VAR_11->blob[VAR_12].name = ((void*)0);
  }
 }
 FUNC_0(&VAR_11->blob[0], sizeof(struct wpa_config_blob)*VAR_1);

 return VAR_13;
}
