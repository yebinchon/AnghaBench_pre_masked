
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stb6100_state {int reference; int frequency; } ;
struct dvb_frontend {struct stb6100_state* tuner_priv; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int,char*,int,int,int,int,int,int,int) ;
 int FUNC_1 (struct stb6100_state*,int*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_12, u32 *VAR_13)
{
 int VAR_14;
 u32 VAR_15, VAR_16, VAR_17;
 int VAR_18, VAR_19;
 struct stb6100_state *VAR_20 = VAR_12->tuner_priv;
 u8 VAR_21[VAR_7];

 VAR_14 = FUNC_1(VAR_20, VAR_21);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_19 = (VAR_21[VAR_8] & VAR_9) >> VAR_10;
 VAR_18 = (VAR_21[VAR_1] & VAR_3) >> VAR_4;
 VAR_15 = VAR_21[VAR_6];
 VAR_16 = ((VAR_21[VAR_1] & VAR_2) << 8) | VAR_21[VAR_5];
 VAR_17 = (VAR_16 * VAR_20->reference >> (9 - VAR_18)) + (VAR_15 * VAR_20->reference << VAR_18);
 *VAR_13 = VAR_20->frequency = VAR_17 >> (VAR_19 + 1);

 FUNC_0(VAR_11, VAR_0, 1,
  "frequency = %u kHz, odiv = %u, psd2 = %u, fxtal = %u kHz, fvco = %u kHz, N(I) = %u, N(F) = %u",
  VAR_20->frequency, VAR_19, VAR_18, VAR_20->reference, VAR_17, VAR_15, VAR_16);
 return 0;
}
