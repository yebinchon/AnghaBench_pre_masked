
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HDMI_ASPECT_T ;
__attribute__((used)) static const char *FUNC_0(HDMI_ASPECT_T VAR_0) {
   switch(VAR_0) {
   case 130:
      return "4:3";
   case 134:
      return "14:9";
   case 131:
      return "16:9";
   case 129:
      return "5:4";
   case 132:
      return "16:10";
   case 133:
      return "15:9";
   case 128:
      return "64:27 (21:9)";
   default:
      return "unknown AR";
   }
}
