
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_geometry {int sectors; int heads; int cylinders; } ;
struct block_device {int bd_disk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct block_device *VAR_0, struct hd_geometry *VAR_1)
{
 FUNC_1(FUNC_0(VAR_0->bd_disk),
       &VAR_1->cylinders, &VAR_1->heads, &VAR_1->sectors);
 return 0;
}
