
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parisc_device {int dummy; } ;
struct find_data {unsigned long hpa; struct parisc_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct find_data*) ;

__attribute__((used)) static struct parisc_device *FUNC_1(unsigned long VAR_1)
{
 struct find_data VAR_2 = {
  .hpa = VAR_1,
 };
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, &VAR_2);
 return VAR_3 ? VAR_2.dev : ((void*)0);
}
