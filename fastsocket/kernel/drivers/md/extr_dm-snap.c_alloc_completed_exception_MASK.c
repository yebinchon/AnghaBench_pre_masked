
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_exception {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dm_exception* FUNC_0 (int ,int ) ;

__attribute__((used)) static struct dm_exception *FUNC_1(void)
{
 struct dm_exception *VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (!VAR_3)
  VAR_3 = FUNC_0(VAR_2, VAR_0);

 return VAR_3;
}
