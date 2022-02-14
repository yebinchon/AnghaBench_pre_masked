
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct matrox_device {int port_data; int port_index; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static __inline__ u8 FUNC_3(struct matrox_device *VAR_0, u8 VAR_1)
{
 u8 VAR_2;

 FUNC_2(VAR_1, VAR_0->port_index);
 VAR_2 = FUNC_1(VAR_0->port_data);
 FUNC_0();

 return VAR_2;
}
