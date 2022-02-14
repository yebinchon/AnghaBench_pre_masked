
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_vfs; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char const*,int *,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct gfs2_sbd *VAR_3, const char *VAR_4,
     size_t VAR_5)
{
 if (!FUNC_0(VAR_0))
  return -VAR_1;

 if (FUNC_2(VAR_4, ((void*)0), 0) != 1)
  return -VAR_2;

 FUNC_1(VAR_3->sd_vfs, 0);
 return VAR_5;
}
