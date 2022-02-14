
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct stb0899_params {long srate; } ;
struct stb0899_internal {long mclk; long sub_range; short derot_freq; scalar_t__ status; int direction; } ;
struct stb0899_state {int verbose; TYPE_1__* config; struct stb0899_params params; struct stb0899_internal internal; } ;
typedef enum stb0899_status { ____Placeholder_stb0899_status } stb0899_status ;
struct TYPE_2__ {short inversion; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (short) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (short) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int) ;
 short FUNC_4 (short) ;
 int FUNC_5 (int ,int ,int,char*,int,...) ;
 int FUNC_6 (struct stb0899_state*) ;
 scalar_t__ FUNC_7 (struct stb0899_state*) ;
 int FUNC_8 (struct stb0899_state*,int ) ;
 int FUNC_9 (struct stb0899_state*,int ,int *,int) ;
 int FUNC_10 (struct stb0899_state*,int ,int ) ;
 int FUNC_11 (struct stb0899_state*,int ,int *,int) ;

__attribute__((used)) static enum stb0899_status FUNC_12(struct stb0899_state *VAR_8)
{
 short int VAR_9, VAR_10, VAR_11, VAR_12 = 3;
 u8 VAR_13[2];
 u8 VAR_14;
 int VAR_15 = 1;

 struct stb0899_internal *VAR_16 = &VAR_8->internal;
 struct stb0899_params *VAR_17 = &VAR_8->params;

 VAR_10 = (VAR_17->srate / 4L) / VAR_16->mclk;
 VAR_11 = (VAR_16->sub_range / 2L) / VAR_16->mclk;
 VAR_9 = VAR_16->derot_freq;

 do {
  if ((VAR_16->status != VAR_0) || (FUNC_7(VAR_8) != VAR_4)) {

   VAR_9 += VAR_15 * VAR_16->direction * VAR_10;
   if (FUNC_4(VAR_9) > VAR_11)
    VAR_12--;

   if (VAR_12) {
    FUNC_5(VAR_8->verbose, VAR_5, 1, "Derot freq=%d, mclk=%d", VAR_9, VAR_16->mclk);
    VAR_14 = FUNC_8(VAR_8, VAR_6);
    FUNC_3(VAR_1, VAR_14, 1);
    FUNC_10(VAR_8, VAR_6, VAR_14);

    FUNC_3(VAR_3, VAR_13[0], FUNC_2(VAR_8->config->inversion * VAR_9));
    FUNC_3(VAR_2, VAR_13[1], FUNC_0(VAR_8->config->inversion * VAR_9));
    FUNC_11(VAR_8, VAR_7, VAR_13, 2);

    FUNC_6(VAR_8);
    VAR_15++;
   }
  }
  VAR_16->direction = -VAR_16->direction;
 } while ((VAR_16->status != VAR_4) && VAR_12);

 if (VAR_16->status == VAR_4) {
  FUNC_9(VAR_8, VAR_7, VAR_13, 2);
  VAR_16->derot_freq = VAR_8->config->inversion * FUNC_1(VAR_13[0], VAR_13[1]);
  FUNC_5(VAR_8->verbose, VAR_5, 1, "------> DATAOK ! Derot Freq=%d", VAR_16->derot_freq);
 }

 return VAR_16->status;
}
