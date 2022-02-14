
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gfs2_sbd {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct gfs2_sbd*,int,int ) ;
 int FUNC_2 (char const*,int *,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct gfs2_sbd *VAR_2, const char *VAR_3,
     size_t VAR_4)
{
 int VAR_5;
 u32 VAR_6;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 VAR_6 = FUNC_2(VAR_3, ((void*)0), 0);

 VAR_5 = FUNC_1(VAR_2, 1, VAR_6);
 return VAR_5 ? VAR_5 : VAR_4;
}
