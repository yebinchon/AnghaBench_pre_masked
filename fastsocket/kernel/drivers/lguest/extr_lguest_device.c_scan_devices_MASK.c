
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lguest_device_desc {scalar_t__ type; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct lguest_device_desc*,unsigned int) ;
 scalar_t__ FUNC_1 (struct lguest_device_desc*) ;
 struct lguest_device_desc* VAR_1 ;
 int FUNC_2 (char*,unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(void)
{
 unsigned int VAR_2;
 struct lguest_device_desc *VAR_3;


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2 += FUNC_1(VAR_3)) {
  VAR_3 = VAR_1 + VAR_2;


  if (VAR_3->type == 0)
   break;

  FUNC_2("Device at %i has size %u\n", VAR_2, FUNC_1(VAR_3));
  FUNC_0(VAR_3, VAR_2);
 }
}
