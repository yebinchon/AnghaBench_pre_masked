
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c2port_device {int flash_access; int access; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct c2port_device*,int ) ;
 int FUNC_1 (struct c2port_device*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static ssize_t FUNC_3(struct c2port_device *VAR_2,
      int VAR_3)
{
 int VAR_4;


 if (!VAR_2->access)
  return -VAR_1;

 VAR_2->flash_access = !!VAR_3;


 if (VAR_2->flash_access == 0)
  return 0;



 FUNC_0(VAR_2, VAR_0);


 VAR_4 = FUNC_1(VAR_2, 0x02);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_4 = FUNC_1(VAR_2, 0x01);
 if (VAR_4 < 0)
  return VAR_4;



 FUNC_2(25);

 return 0;
}
