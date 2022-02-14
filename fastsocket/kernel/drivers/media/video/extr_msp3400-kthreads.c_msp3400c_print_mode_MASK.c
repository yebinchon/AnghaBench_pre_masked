
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp_state {int main; int second; scalar_t__ mode; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct i2c_client*) ;
 int VAR_4 ;
 struct msp_state* FUNC_1 (int ) ;
 int FUNC_2 (int,int ,struct i2c_client*,char*,int,int) ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_5)
{
 struct msp_state *VAR_6 = FUNC_1(FUNC_0(VAR_5));

 if (VAR_6->main == VAR_6->second)
  FUNC_2(1, VAR_4, VAR_5,
   "mono sound carrier: %d.%03d MHz\n",
   VAR_6->main / 910000, (VAR_6->main / 910) % 1000);
 else
  FUNC_2(1, VAR_4, VAR_5,
   "main sound carrier: %d.%03d MHz\n",
   VAR_6->main / 910000, (VAR_6->main / 910) % 1000);
 if (VAR_6->mode == VAR_1 || VAR_6->mode == VAR_2)
  FUNC_2(1, VAR_4, VAR_5,
   "NICAM/FM carrier  : %d.%03d MHz\n",
   VAR_6->second / 910000, (VAR_6->second/910) % 1000);
 if (VAR_6->mode == VAR_0)
  FUNC_2(1, VAR_4, VAR_5,
   "NICAM/AM carrier  : %d.%03d MHz\n",
   VAR_6->second / 910000, (VAR_6->second / 910) % 1000);
 if (VAR_6->mode == VAR_3 && VAR_6->main != VAR_6->second) {
  FUNC_2(1, VAR_4, VAR_5,
   "FM-stereo carrier : %d.%03d MHz\n",
   VAR_6->second / 910000, (VAR_6->second / 910) % 1000);
 }
}
