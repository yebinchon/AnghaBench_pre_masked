
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct TYPE_3__ {int bandwidth_hz; int isdbt_sb_mode; scalar_t__ isdbt_partial_reception; } ;
struct TYPE_4__ {TYPE_1__ dtv_property_cache; } ;
struct dib8000_state {scalar_t__ timf; int revision; TYPE_2__ fe; } ;


 int VAR_0 ;
 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,int) ;
 int FUNC_2 (struct dib8000_state*,int ,int ) ;
 int FUNC_3 (struct dib8000_state*) ;
 int FUNC_4 (struct dib8000_state*,int,int) ;
 int FUNC_5 (struct dib8000_state*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_1)
{
 struct dib8000_state *VAR_2 = VAR_1->demodulator_priv;
 int VAR_3 = 0;
 u16 VAR_4, VAR_5 = FUNC_5(VAR_2);


 if (VAR_2 == ((void*)0))
  return -VAR_0;

 FUNC_1(VAR_2, VAR_2->fe.dtv_property_cache.bandwidth_hz / 1000);
 FUNC_2(VAR_2, 0, 0);


 VAR_3 |= FUNC_4(VAR_2, 770, 0x4000);
 VAR_3 |= FUNC_4(VAR_2, 770, 0x0000);
 FUNC_6(45);





 if (VAR_2->timf == 0) {
  if (VAR_2->fe.dtv_property_cache.isdbt_sb_mode == 1) {
   if (VAR_2->fe.dtv_property_cache.isdbt_partial_reception == 0)
    FUNC_6(300);
   else
    FUNC_6(500);
  } else
   FUNC_6(200);
 }

 if (VAR_2->fe.dtv_property_cache.isdbt_sb_mode == 1) {
  if (VAR_2->fe.dtv_property_cache.isdbt_partial_reception == 0) {


   FUNC_4(VAR_2, 32, ((13 - VAR_5) << 12) | (6 << 8) | 0x40);



   VAR_3 |= FUNC_4(VAR_2, 37, (12 - VAR_5) | ((5 + VAR_5) << 5));

  } else {


   FUNC_4(VAR_2, 32, ((12 - VAR_5) << 12) | (6 << 8) | 0x60);

   VAR_3 |= FUNC_4(VAR_2, 37, (11 - VAR_5) | ((5 + VAR_5) << 5));
  }

 } else {

  FUNC_4(VAR_2, 32, ((11 - VAR_5) << 12) | (6 << 8) | 0x80);

  VAR_3 |= FUNC_4(VAR_2, 37, (10 - VAR_5) | ((5 + VAR_5) << 5));

 }


 if ((FUNC_0(VAR_2, 568) >> 11) & 0x1)
  FUNC_3(VAR_2);


 FUNC_4(VAR_2, 6, 0x200);

 if (VAR_2->revision == 0x8002) {
  VAR_4 = FUNC_0(VAR_2, 903);
  FUNC_4(VAR_2, 903, VAR_4 & ~(1 << 3));
  FUNC_6(1);
  FUNC_4(VAR_2, 903, VAR_4 | (1 << 3));
 }

 return VAR_3;
}
