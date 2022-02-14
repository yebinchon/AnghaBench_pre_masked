
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct block_device {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct block_device*) ;
 int VAR_3 ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct super_block*,int ,char*,int ,int ) ;
 struct block_device* FUNC_4 (int ,int) ;

__attribute__((used)) static struct block_device *FUNC_5(dev_t VAR_4, struct super_block *VAR_5)
{
 struct block_device *VAR_6;
 char VAR_7[VAR_0];

 VAR_6 = FUNC_4(VAR_4, VAR_1|VAR_2);
 if (FUNC_0(VAR_6))
  goto fail;
 return VAR_6;

fail:
 FUNC_3(VAR_5, VAR_3, "error: failed to open journal device %s: %ld",
  FUNC_2(VAR_4, VAR_7), FUNC_1(VAR_6));

 return ((void*)0);
}
