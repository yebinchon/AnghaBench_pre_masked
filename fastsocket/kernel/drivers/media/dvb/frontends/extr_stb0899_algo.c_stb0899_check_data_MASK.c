
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stb0899_params {int srate; } ;
struct stb0899_internal {int status; } ;
struct stb0899_state {int verbose; struct stb0899_params params; struct stb0899_internal internal; } ;
typedef enum stb0899_status { ____Placeholder_stb0899_status } stb0899_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ,int,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct stb0899_state*,int ) ;
 int FUNC_5 (struct stb0899_state*,int ,int) ;

__attribute__((used)) static enum stb0899_status FUNC_6(struct stb0899_state *VAR_9)
{
 struct stb0899_internal *VAR_10 = &VAR_9->internal;
 struct stb0899_params *VAR_11 = &VAR_9->params;

 int VAR_12 = 0, VAR_13 = 0, VAR_14 = 500, VAR_15;
 u8 VAR_16;

 VAR_10->status = VAR_3;


 VAR_16 = FUNC_4(VAR_9, VAR_5);
 FUNC_1(VAR_2, VAR_16, 1);
 FUNC_5(VAR_9, VAR_5, VAR_16);
 FUNC_3(1);
 VAR_16 = FUNC_4(VAR_9, VAR_5);
 FUNC_1(VAR_2, VAR_16, 0);
 FUNC_5(VAR_9, VAR_5, VAR_16);

 if (VAR_11->srate <= 2000000)
  VAR_14 = 2000;
 else if (VAR_11->srate <= 5000000)
  VAR_14 = 1500;
 else if (VAR_11->srate <= 15000000)
  VAR_14 = 1000;
 else
  VAR_14 = 500;

 FUNC_5(VAR_9, VAR_4, 0x00);
 while (1) {

  VAR_16 = FUNC_4(VAR_9, VAR_6);
  VAR_12 = FUNC_0(VAR_8, VAR_16);
  VAR_15 = FUNC_0(VAR_7, VAR_16);

  if (VAR_12 || VAR_15 || (VAR_13 > VAR_14))
   break;
  VAR_13++;
 }

 if (VAR_12) {
  VAR_10->status = VAR_0;
  FUNC_2(VAR_9->verbose, VAR_1, 1, "-----------------> DATA OK !");
 }

 return VAR_10->status;
}
