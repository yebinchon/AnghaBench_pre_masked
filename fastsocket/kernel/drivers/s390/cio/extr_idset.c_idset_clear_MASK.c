
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idset {int num_id; int num_ssid; int bitmap; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2(struct idset *VAR_0)
{
 FUNC_1(VAR_0->bitmap, 0, FUNC_0(VAR_0->num_ssid, VAR_0->num_id));
}
