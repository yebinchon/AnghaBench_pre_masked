
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idset {int num_ssid; int num_id; int bitmap; } ;


 int FUNC_0 (int ,int) ;

int FUNC_1(struct idset *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0->bitmap, VAR_0->num_ssid * VAR_0->num_id);
 if (VAR_1 >= VAR_0->num_ssid * VAR_0->num_id)
  return 1;
 return 0;
}
