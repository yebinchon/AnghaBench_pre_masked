
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int dummy; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct block_device*,char*) ;
 scalar_t__ FUNC_2 (struct block_device*) ;

__attribute__((used)) static void FUNC_3(struct block_device *VAR_3)
{
 sector_t VAR_4 = FUNC_2(VAR_3);
 char VAR_5[VAR_0];

 if (VAR_4 > VAR_2)
  FUNC_0("Metadata device %s is larger than %u sectors: excess space will not be used.",
         FUNC_1(VAR_3, VAR_5), VAR_1);
}
