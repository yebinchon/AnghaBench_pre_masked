
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enclosure_device {int dummy; } ;
struct enclosure_component {unsigned char status; } ;


 unsigned char* FUNC_0 (struct enclosure_device*,struct enclosure_component*) ;

__attribute__((used)) static void FUNC_1(struct enclosure_device *VAR_0,
      struct enclosure_component *VAR_1)
{
 unsigned char *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  VAR_1->status = (VAR_2[0] & 0x0f);
}
