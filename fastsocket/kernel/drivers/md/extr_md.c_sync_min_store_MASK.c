
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int sync_speed_min; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (char const*,char**,int) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct mddev *VAR_1, const char *VAR_2, size_t VAR_3)
{
 int VAR_4;
 char *VAR_5;
 if (FUNC_1(VAR_2, "system", 6)==0) {
  VAR_1->sync_speed_min = 0;
  return VAR_3;
 }
 VAR_4 = FUNC_0(VAR_2, &VAR_5, 10);
 if (VAR_2 == VAR_5 || (*VAR_5 && *VAR_5 != '\n') || VAR_4 <= 0)
  return -VAR_0;
 VAR_1->sync_speed_min = VAR_4;
 return VAR_3;
}
