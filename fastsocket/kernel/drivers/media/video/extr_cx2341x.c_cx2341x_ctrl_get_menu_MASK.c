
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx2341x_mpeg_params {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 char const* const* FUNC_0 (int) ;
 char const* const* FUNC_1 (int) ;

const char * const *FUNC_2(const struct cx2341x_mpeg_params *VAR_2, u32 VAR_3)
{
 static const char * const VAR_4[] = {
  "MPEG-2 Program Stream",
  "",
  "MPEG-1 System Stream",
  "MPEG-2 DVD-compatible Stream",
  "MPEG-1 VCD-compatible Stream",
  "MPEG-2 SVCD-compatible Stream",
  ((void*)0)
 };

 static const char *VAR_5[] = {
  "MPEG-2 Program Stream",
  "MPEG-2 Transport Stream",
  "MPEG-1 System Stream",
  "MPEG-2 DVD-compatible Stream",
  "MPEG-1 VCD-compatible Stream",
  "MPEG-2 SVCD-compatible Stream",
  ((void*)0)
 };

 static const char *VAR_6[] = {
  "",
  "MPEG-1/2 Layer II",
  "",
  "",
  "AC-3",
  ((void*)0)
 };

 switch (VAR_3) {
 case 128:
  return (VAR_2->capabilities & VAR_1) ?
   VAR_5 : VAR_4;
 case 136:
  return (VAR_2->capabilities & VAR_0) ?
   VAR_6 : FUNC_1(VAR_3);
 case 135:
 case 134:
  return ((void*)0);
 case 130:
 case 132:
 case 133:
 case 129:
 case 131:
  return FUNC_0(VAR_3);
 default:
  return FUNC_1(VAR_3);
 }
}
