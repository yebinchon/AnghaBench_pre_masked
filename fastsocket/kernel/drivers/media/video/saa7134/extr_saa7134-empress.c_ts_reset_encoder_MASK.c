
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {scalar_t__ empress_started; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct saa7134_dev* VAR_1)
{
 if (!VAR_1->empress_started)
  return;

 FUNC_1(VAR_0, 0x00);
 FUNC_0(10);
 FUNC_1(VAR_0, 0x01);
 FUNC_0(100);
 VAR_1->empress_started = 0;
}
