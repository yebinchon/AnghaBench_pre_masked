
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dentry {int dummy; } ;
struct array_data {unsigned int elements; int * array; } ;
typedef int mode_t ;


 int VAR_0 ;
 struct dentry* FUNC_0 (char const*,int ,struct dentry*,struct array_data*,int *) ;
 struct array_data* FUNC_1 (int,int ) ;
 int VAR_1 ;

struct dentry *FUNC_2(const char *VAR_2, mode_t VAR_3,
         struct dentry *VAR_4,
         u32 *VAR_5, unsigned VAR_6)
{
 struct array_data *VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_0);

 if (VAR_7 == ((void*)0))
  return ((void*)0);

 VAR_7->array = VAR_5;
 VAR_7->elements = VAR_6;

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_7, &VAR_1);
}
