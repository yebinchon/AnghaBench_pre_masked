
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parisc_device {int dummy; } ;
struct match_id_data {char id; struct parisc_device* dev; } ;
struct device {int dummy; } ;


 struct parisc_device* FUNC_0 (char,struct device*) ;
 scalar_t__ FUNC_1 (struct device*,struct match_id_data*,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct parisc_device * FUNC_2(struct device *VAR_1, char VAR_2)
{
 struct match_id_data VAR_3 = {
  .id = VAR_2,
 };
 if (FUNC_1(VAR_1, &VAR_3, VAR_0))
  return VAR_3.dev;
 else
  return FUNC_0(VAR_2, VAR_1);
}
