
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stb0899_internal {int status; int t_derot; } ;
struct stb0899_state {int verbose; struct stb0899_internal internal; } ;
typedef enum stb0899_status { ____Placeholder_stb0899_status } stb0899_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct stb0899_state*,int ) ;
 int FUNC_5 (struct stb0899_state*,int ,int ) ;

__attribute__((used)) static enum stb0899_status FUNC_6(struct stb0899_state *VAR_7)
{
 struct stb0899_internal *VAR_8 = &VAR_7->internal;
 u8 VAR_9;

 FUNC_3(VAR_8->t_derot);

 VAR_9 = FUNC_4(VAR_7, VAR_5);
 FUNC_1(VAR_2, VAR_9, 1);
 FUNC_5(VAR_7, VAR_5, VAR_9);

 VAR_9 = FUNC_4(VAR_7, VAR_6);
 FUNC_2(VAR_7->verbose, VAR_3, 1, "--------------------> STB0899_DSTATUS=[0x%02x]", VAR_9);
 if (FUNC_0(VAR_1, VAR_9)) {
  VAR_8->status = VAR_0;
  FUNC_2(VAR_7->verbose, VAR_3, 1, "-------------> CARRIEROK !");
 } else {
  VAR_8->status = VAR_4;
  FUNC_2(VAR_7->verbose, VAR_3, 1, "-------------> NOCARRIER !");
 }

 return VAR_8->status;
}
