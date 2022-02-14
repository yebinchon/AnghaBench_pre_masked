
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {unsigned long long recovery_cp; int flags; scalar_t__ pers; int recovery; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long VAR_4 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ,int *) ;
 unsigned long long FUNC_2 (char const*,char**,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static ssize_t
FUNC_4(struct mddev *VAR_5, const char *VAR_6, size_t VAR_7)
{
 char *VAR_8;
 unsigned long long VAR_9 = FUNC_2(VAR_6, &VAR_8, 10);

 if (VAR_5->pers && !FUNC_3(VAR_3, &VAR_5->recovery))
  return -VAR_0;
 if (FUNC_0(VAR_6, "none"))
  VAR_9 = VAR_4;
 else if (!*VAR_6 || (*VAR_8 && *VAR_8 != '\n'))
  return -VAR_1;

 VAR_5->recovery_cp = VAR_9;
 if (VAR_5->pers)
  FUNC_1(VAR_2, &VAR_5->flags);
 return VAR_7;
}
