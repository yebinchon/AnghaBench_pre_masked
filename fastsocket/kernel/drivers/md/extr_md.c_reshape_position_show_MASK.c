
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {scalar_t__ reshape_position; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,unsigned long long) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct mddev *VAR_1, char *VAR_2)
{
 if (VAR_1->reshape_position != VAR_0)
  return FUNC_0(VAR_2, "%llu\n",
          (unsigned long long)VAR_1->reshape_position);
 FUNC_1(VAR_2, "none\n");
 return 5;
}
