
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max1586_data {unsigned int max_uV; unsigned int min_uV; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct max1586_data *VAR_1,
 unsigned VAR_2)
{
 unsigned VAR_3 = VAR_1->max_uV - VAR_1->min_uV;

 return VAR_1->min_uV + (VAR_2 * VAR_3 / VAR_0);
}
