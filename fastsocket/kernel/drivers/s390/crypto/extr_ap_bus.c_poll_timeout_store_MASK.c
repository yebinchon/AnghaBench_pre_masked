
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bus_type {int dummy; } ;
typedef size_t ssize_t ;
typedef int ktime_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,unsigned long long) ;
 unsigned long long VAR_3 ;
 int FUNC_6 (char const*,char*,unsigned long long*) ;

__attribute__((used)) static ssize_t FUNC_7(struct bus_type *VAR_4, const char *VAR_5,
      size_t VAR_6)
{
 unsigned long long VAR_7;
 ktime_t VAR_8;


 if (FUNC_6(VAR_5, "%llu\n", &VAR_7) != 1 || VAR_7 < 1 ||
     VAR_7 > 120000000000ULL)
  return -VAR_0;
 VAR_3 = VAR_7;
 VAR_8 = FUNC_5(0, VAR_3);

 if (!FUNC_2(&VAR_2) ||
     !FUNC_0(&VAR_2, FUNC_1(&VAR_2), VAR_8)) {
  FUNC_3(&VAR_2, VAR_8);
  FUNC_4(&VAR_2, VAR_1);
 }
 return VAR_6;
}
