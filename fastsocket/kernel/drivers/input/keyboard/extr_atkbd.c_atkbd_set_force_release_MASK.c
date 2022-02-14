
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atkbd {int force_release_mask; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static ssize_t FUNC_3(struct atkbd *VAR_2,
     const char *VAR_3, size_t VAR_4)
{

 FUNC_0(VAR_1, VAR_0);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_1, VAR_0);
 if (VAR_5)
  return VAR_5;

 FUNC_2(VAR_2->force_release_mask, VAR_1, sizeof(VAR_2->force_release_mask));
 return VAR_4;
}
