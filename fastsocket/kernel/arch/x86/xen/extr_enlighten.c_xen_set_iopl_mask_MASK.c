
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct physdev_set_iopl {int iopl; } ;


 int FUNC_0 (int ,struct physdev_set_iopl*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(unsigned VAR_1)
{
 struct physdev_set_iopl VAR_2;


 VAR_2.iopl = (VAR_1 == 0) ? 1 : (VAR_1 >> 12) & 3;
 FUNC_0(VAR_0, &VAR_2);
}
