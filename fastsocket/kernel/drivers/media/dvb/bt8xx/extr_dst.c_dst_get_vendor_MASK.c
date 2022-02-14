
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dst_state {int * vendor; int rxbuffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*,...) ;
 int FUNC_1 (int*,int) ;
 scalar_t__ FUNC_2 (struct dst_state*,int*,int) ;
 int FUNC_3 (int **,int *,int) ;
 int FUNC_4 (int **,char,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct dst_state *VAR_3)
{
 u8 VAR_4[] = { 0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
 VAR_4[7] = FUNC_1(VAR_4, 7);
 if (FUNC_2(VAR_3, VAR_4, 8) < 0) {
  FUNC_0(VAR_2, VAR_1, 1, "Unsupported Command");
  return -1;
 }
 FUNC_4(&VAR_3->vendor, '\0', 8);
 FUNC_3(&VAR_3->vendor, &VAR_3->rxbuffer, 7);
 FUNC_0(VAR_2, VAR_0, 1, "Vendor=[%s]", &VAR_3->vendor[0]);

 return 0;
}
