
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dst_state {int* messages; } ;
typedef int slot_command ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,char*,...) ;
 scalar_t__ FUNC_1 (struct dst_state*,int*,int,int*,int ) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct dst_state *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9;
 static u8 VAR_10[8] = {0x07, 0x40, 0x00, 0x00, 0x02, 0x00, 0x00, 0xff};
 const int VAR_11 = 8, VAR_12 = 4, VAR_13 = 7;

 FUNC_2(&VAR_10[0], VAR_10[0]);
 if ((FUNC_1(VAR_5, VAR_10, sizeof (VAR_10), VAR_5->messages, VAR_3)) < 0) {
  FUNC_0(VAR_4, VAR_1, 1, " -->dst_put_ci FAILED !");
  return -1;
 }
 FUNC_0(VAR_4, VAR_2, 1, " -->dst_put_ci SUCCESS !");


 FUNC_0(VAR_4, VAR_2, 0, " DST data = [");
 for (VAR_8 = 0; VAR_8 < VAR_5->messages[0] + 1; VAR_8++) {
  FUNC_0(VAR_4, VAR_2, 0, " 0x%02x", VAR_5->messages[VAR_8]);
 }
 FUNC_0(VAR_4, VAR_2, 0, "]\n");


 VAR_9 = VAR_5->messages[VAR_13];
 if (VAR_9 >= 100) {
  VAR_9 = 100;
  FUNC_0(VAR_4, VAR_1, 1, "Invalid number of ids (>100). Recovering.");
 }
 FUNC_3(&VAR_5->messages[0], VAR_0, VAR_9 * 2);

 FUNC_0(VAR_4, VAR_2, 0, " CA_INFO = [");
 VAR_6 = VAR_11;
 VAR_7 = VAR_12;
 for(VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  FUNC_0(VAR_4, VAR_2, 0, " 0x%02x%02x", VAR_5->messages[VAR_6 + 0], VAR_5->messages[VAR_6 + 1]);

  VAR_5->messages[VAR_7 + 0] = VAR_5->messages[VAR_6 + 0];
  VAR_5->messages[VAR_7 + 1] = VAR_5->messages[VAR_6 + 1];
  VAR_6 += 2;
  VAR_7 += 2;
 }
 FUNC_0(VAR_4, VAR_2, 0, "]\n");

 return 0;
}
