
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parisc_device {scalar_t__ hw_path; } ;
struct match_id_data {scalar_t__ id; struct parisc_device* dev; } ;
struct device {int dummy; } ;


 struct parisc_device* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device * VAR_0, void * VAR_1)
{
 struct parisc_device * VAR_2 = FUNC_0(VAR_0);
 struct match_id_data * VAR_3 = VAR_1;

 if (VAR_2->hw_path == VAR_3->id) {
  VAR_3->dev = VAR_2;
  return 1;
 }
 return 0;
}
