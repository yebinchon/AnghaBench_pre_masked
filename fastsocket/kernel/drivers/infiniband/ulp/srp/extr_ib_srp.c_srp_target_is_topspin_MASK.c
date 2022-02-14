
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct srp_target_port {int ioc_guid; } ;


 int FUNC_0 (int *,int const*,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1(struct srp_target_port *VAR_1)
{
 static const u8 VAR_2[3] = { 0x00, 0x05, 0xad };
 static const u8 VAR_3[3] = { 0x00, 0x1b, 0x0d };

 return VAR_0 &&
  (!FUNC_0(&VAR_1->ioc_guid, VAR_2, sizeof VAR_2) ||
   !FUNC_0(&VAR_1->ioc_guid, VAR_3, sizeof VAR_3));
}
