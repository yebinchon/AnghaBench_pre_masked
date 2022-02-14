
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sb1000_private {int rx_error_dpc_count; } ;
struct net_device {int base_addr; int mem_start; char* name; } ;


 struct sb1000_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int*,unsigned char*) ;
 int FUNC_2 (int*,char*,unsigned char const*) ;
 int FUNC_3 (int*,char*) ;
 int FUNC_4 (int*,char*) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_0)
{
 static const unsigned char VAR_1[6] = {0x80, 0x26, 0x00, 0x00, 0x00, 0x00};

 char *VAR_2;
 unsigned char VAR_3[5];
 int VAR_4[2];
 struct sb1000_private *VAR_5 = FUNC_0(VAR_0);
 const int VAR_6 = 200;

 VAR_4[0] = VAR_0->base_addr;

 VAR_4[1] = VAR_0->mem_start;
 VAR_2 = VAR_0->name;

 FUNC_4(VAR_4, VAR_2);
 FUNC_2(VAR_4, VAR_2, VAR_1);
 FUNC_3(VAR_4, VAR_2);
 FUNC_1(VAR_4, VAR_3);
 if (VAR_3[1] & 0x10)
  VAR_5->rx_error_dpc_count = VAR_6;
 return;
}
