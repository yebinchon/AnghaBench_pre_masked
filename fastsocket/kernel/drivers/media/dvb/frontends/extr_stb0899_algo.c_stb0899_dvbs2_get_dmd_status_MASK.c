
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stb0899_state {int verbose; } ;
typedef enum stb0899_status { ____Placeholder_stb0899_status } stb0899_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ,int,char*,...) ;
 int FUNC_3 (int) ;

__attribute__((used)) static enum stb0899_status FUNC_4(struct stb0899_state *VAR_9, int VAR_10)
{
 int VAR_11 = -10, VAR_12 = 0, VAR_13, VAR_14;
 u32 VAR_15;

 do {
  VAR_15 = FUNC_1(VAR_7, VAR_2);
  FUNC_2(VAR_9->verbose, VAR_5, 1, "DMD_STATUS=[0x%02x]", VAR_15);
  if (FUNC_0(VAR_6, VAR_15))
   FUNC_2(VAR_9->verbose, VAR_5, 1, "------------->IF AGC LOCKED !");
  VAR_15 = FUNC_1(VAR_7, VAR_1);
  FUNC_2(VAR_9->verbose, VAR_5, 1, "----------->DMD STAT2=[0x%02x]", VAR_15);
  VAR_13 = FUNC_0(VAR_8, VAR_15);
  VAR_14 = FUNC_0(VAR_0, VAR_15);
  if (VAR_13 && VAR_14)
   VAR_12 = 1;

  VAR_11 += 10;
  FUNC_3(10);

 } while ((!VAR_12) && (VAR_11 <= VAR_10));

 if (VAR_12) {
  FUNC_2(VAR_9->verbose, VAR_5, 1, "----------------> DVB-S2 LOCK !");
  return VAR_3;
 } else {
  return VAR_4;
 }
}
