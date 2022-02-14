
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gemtek_pci {int mute; int current_frequency; } ;


 int FUNC_0 (struct gemtek_pci*,int ) ;

__attribute__((used)) static void FUNC_1(struct gemtek_pci *VAR_0)
{
 if (VAR_0->mute) {
  FUNC_0(VAR_0, VAR_0->current_frequency);
  VAR_0->mute = 0;
 }
}
