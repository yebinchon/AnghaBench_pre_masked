
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct find_data {char const* busid; unsigned int id; unsigned int mask; struct amba_device* dev; struct device* parent; } ;
struct device {int dummy; } ;
struct amba_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,struct find_data*,int ) ;

struct amba_device *
FUNC_1(const char *VAR_2, struct device *VAR_3, unsigned int VAR_4,
   unsigned int VAR_5)
{
 struct find_data VAR_6;

 VAR_6.dev = ((void*)0);
 VAR_6.parent = VAR_3;
 VAR_6.busid = VAR_2;
 VAR_6.id = VAR_4;
 VAR_6.mask = VAR_5;

 FUNC_0(&VAR_0, ((void*)0), &VAR_6, VAR_1);

 return VAR_6.dev;
}
