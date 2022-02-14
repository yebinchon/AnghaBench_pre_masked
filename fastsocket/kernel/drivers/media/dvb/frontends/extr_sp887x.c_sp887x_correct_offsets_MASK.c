
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sp887x_state {int dummy; } ;
struct TYPE_3__ {int bandwidth; } ;
struct TYPE_4__ {TYPE_1__ ofdm; } ;
struct dvb_frontend_parameters {int frequency; scalar_t__ inversion; TYPE_2__ u; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int,int *,int*) ;
 int FUNC_1 (struct sp887x_state*,int,int const) ;

__attribute__((used)) static void FUNC_2 (struct sp887x_state* VAR_2,
        struct dvb_frontend_parameters *VAR_3,
        int VAR_4)
{
 static const u32 VAR_5 [] = { 1879617, 4544878, 8098561 };
 int VAR_6 = VAR_3->u.ofdm.bandwidth - VAR_0;
 int VAR_7 = VAR_4 - VAR_3->frequency;
 int VAR_8 = 61003;
 int VAR_9 = 36000000;
 int VAR_10;
 int VAR_11;

 if (VAR_3->inversion == VAR_1)
  VAR_10 = VAR_9 - VAR_7;
 else
  VAR_10 = VAR_9 + VAR_7;

 FUNC_0(VAR_10 / 333, VAR_8, ((void*)0), &VAR_11);

 if (VAR_3->inversion == VAR_1)
  VAR_11 = -VAR_11;


 FUNC_1(VAR_2, 0x319, VAR_5[VAR_6] >> 12);
 FUNC_1(VAR_2, 0x31a, VAR_5[VAR_6] & 0xfff);


 FUNC_1(VAR_2, 0x309, VAR_11 >> 12);
 FUNC_1(VAR_2, 0x30a, VAR_11 & 0xfff);
}
