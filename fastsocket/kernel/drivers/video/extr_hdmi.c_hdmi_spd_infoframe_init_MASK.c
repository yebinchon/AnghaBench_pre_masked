
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spd_infoframe {int version; int length; int product; int vendor; int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct hdmi_spd_infoframe*,int ,int) ;
 int FUNC_1 (int ,char const*,int) ;

int FUNC_2(struct hdmi_spd_infoframe *VAR_1,
       const char *VAR_2, const char *VAR_3)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->type = VAR_0;
 VAR_1->version = 1;
 VAR_1->length = 25;

 FUNC_1(VAR_1->vendor, VAR_2, sizeof(VAR_1->vendor));
 FUNC_1(VAR_1->product, VAR_3, sizeof(VAR_1->product));

 return 0;
}
