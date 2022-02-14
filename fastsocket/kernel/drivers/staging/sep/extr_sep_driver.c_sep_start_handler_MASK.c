
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 unsigned long FUNC_1 (struct sep_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct sep_device *VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4 = 0;

 FUNC_0("SEP Driver:--------> sep_start_handler start\n");


 do
  VAR_3 = FUNC_1(VAR_2, VAR_1);
 while (!VAR_3);


 if (VAR_3 == 0x1)

  VAR_4 = FUNC_1(VAR_2, VAR_0);
 FUNC_0("SEP Driver:<-------- sep_start_handler end\n");
 return VAR_4;
}
