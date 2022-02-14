
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {char* sd_fsname; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct gfs2_sbd *VAR_1, char *VAR_2)
{
 return FUNC_0(VAR_2, VAR_0, "%s\n", VAR_1->sd_fsname);
}
