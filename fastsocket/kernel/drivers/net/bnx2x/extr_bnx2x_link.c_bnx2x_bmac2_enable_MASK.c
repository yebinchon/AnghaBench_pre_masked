
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct link_vars {int dummy; } ;
struct link_params {int* mac_addr; scalar_t__ port; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct bnx2x*,int,int*,int) ;
 int FUNC_2 (struct link_params*,struct link_vars*,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct link_params *VAR_12,
         struct link_vars *VAR_13,
         u8 VAR_14)
{
 struct bnx2x *VAR_15 = VAR_12->bp;
 u8 VAR_16 = VAR_12->port;
 u32 VAR_17 = VAR_16 ? VAR_11 :
          VAR_10;
 u32 VAR_18[2];

 FUNC_0(VAR_9, "Enabling BigMAC2\n");

 VAR_18[0] = 0;
 VAR_18[1] = 0;
 FUNC_1(VAR_15, VAR_17 + VAR_0, VAR_18, 2);
 FUNC_3(30);


 VAR_18[0] = 0x3c;
 VAR_18[1] = 0;
 FUNC_1(VAR_15, VAR_17 + VAR_1,
      VAR_18, 2);

 FUNC_3(30);


 VAR_18[0] = ((VAR_12->mac_addr[2] << 24) |
         (VAR_12->mac_addr[3] << 16) |
         (VAR_12->mac_addr[4] << 8) |
   VAR_12->mac_addr[5]);
 VAR_18[1] = ((VAR_12->mac_addr[0] << 8) |
   VAR_12->mac_addr[1]);
 FUNC_1(VAR_15, VAR_17 + VAR_6,
      VAR_18, 2);

 FUNC_3(30);


 VAR_18[0] = 0x1000200;
 VAR_18[1] = 0;
 FUNC_1(VAR_15, VAR_17 + VAR_3,
      VAR_18, 2);
 FUNC_3(30);


 VAR_18[0] = VAR_7 + VAR_8;
 VAR_18[1] = 0;
 FUNC_1(VAR_15, VAR_17 + VAR_4, VAR_18, 2);
 FUNC_3(30);


 VAR_18[0] = VAR_7 + VAR_8;
 VAR_18[1] = 0;
 FUNC_1(VAR_15, VAR_17 + VAR_5, VAR_18, 2);
 FUNC_3(30);

 VAR_18[0] = VAR_7 + VAR_8 - 2;
 VAR_18[1] = 0;
 FUNC_1(VAR_15, VAR_17 + VAR_2, VAR_18, 2);
 FUNC_3(30);
 FUNC_2(VAR_12, VAR_13, VAR_14);

 return 0;
}
