
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct hvfb_par {scalar_t__ synthvid_version; } ;
struct fb_info {struct hvfb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,char**) ;
 scalar_t__ FUNC_1 (char*,int ,int*) ;
 int FUNC_2 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* FUNC_3 (char**,char*) ;

__attribute__((used)) static void FUNC_4(struct fb_info *VAR_11)
{
 struct hvfb_par *VAR_12 = VAR_11->par;
 char *VAR_13 = ((void*)0), *VAR_14;
 uint VAR_15 = 0, VAR_16 = 0;

 if (FUNC_0(VAR_2, &VAR_13) || !VAR_13 || !*VAR_13)
  return;

 VAR_14 = FUNC_3(&VAR_13, "x");
 if (!*VAR_14 || FUNC_1(VAR_14, 0, &VAR_15) ||
     !VAR_13 || !*VAR_13 || FUNC_1(VAR_13, 0, &VAR_16)) {
  FUNC_2("Screen option is invalid: skipped\n");
  return;
 }

 if (VAR_15 < VAR_1 || VAR_16 < VAR_0 ||
     (VAR_12->synthvid_version == VAR_6 &&
      VAR_15 * VAR_16 * VAR_8 / 8 > VAR_3) ||
     (VAR_12->synthvid_version == VAR_5 &&
      (VAR_15 > VAR_7 || VAR_16 > VAR_4))) {
  FUNC_2("Screen resolution option is out of range: skipped\n");
  return;
 }

 VAR_10 = VAR_15;
 VAR_9 = VAR_16;
 return;
}
