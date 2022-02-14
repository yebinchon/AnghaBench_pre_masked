
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* sb_uuid; } ;
struct gfs2_sbd {TYPE_1__ sd_sb; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (char*,int ,char*,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const) ;

__attribute__((used)) static ssize_t FUNC_2(struct gfs2_sbd *VAR_1, char *VAR_2)
{
 const u8 *VAR_3 = VAR_1->sd_sb.sb_uuid;
 VAR_2[0] = '\0';
 if (!FUNC_0(VAR_3))
  return 0;
 return FUNC_1(VAR_2, VAR_0, "%02X%02X%02X%02X-%02X%02X-"
   "%02X%02X-%02X%02X-%02X%02X%02X%02X%02X%02X\n",
   VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3], VAR_3[4], VAR_3[5],
   VAR_3[6], VAR_3[7], VAR_3[8], VAR_3[9], VAR_3[10], VAR_3[11],
   VAR_3[12], VAR_3[13], VAR_3[14], VAR_3[15]);
}
