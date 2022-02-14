
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dvb_frontend {struct af9013_state* demodulator_priv; } ;
struct af9013_state {int dummy; } ;
typedef int fe_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct af9013_state*,int,int,int,scalar_t__*) ;
 int FUNC_1 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_5, fe_status_t *VAR_6)
{
 struct af9013_state *VAR_7 = VAR_5->demodulator_priv;
 int VAR_8 = 0;
 u8 VAR_9;
 *VAR_6 = 0;


 VAR_8 = FUNC_0(VAR_7, 0xd507, 6, 1, &VAR_9);
 if (VAR_8)
  goto error;
 if (VAR_9)
  *VAR_6 |= VAR_2 | VAR_0 | VAR_4 |
   VAR_3 | VAR_1;

 if (!*VAR_6) {

  VAR_8 = FUNC_0(VAR_7, 0xd330, 3, 1, &VAR_9);
  if (VAR_8)
   goto error;
  if (VAR_9)
   *VAR_6 |= VAR_2 | VAR_0 |
    VAR_4;
 }

 if (!*VAR_6) {

  VAR_8 = FUNC_0(VAR_7, 0xd333, 7, 1, &VAR_9);
  if (VAR_8)
   goto error;
  if (VAR_9)
   *VAR_6 |= VAR_2 | VAR_0;
 }

 if (!*VAR_6) {

  VAR_8 = FUNC_0(VAR_7, 0xd334, 6, 1, &VAR_9);
  if (VAR_8)
   goto error;
  if (VAR_9)
   *VAR_6 |= VAR_2 | VAR_0;
 }

 if (!*VAR_6) {

  VAR_8 = FUNC_0(VAR_7, 0xd1a0, 6, 1, &VAR_9);
  if (VAR_8)
   goto error;
  if (VAR_9)
   *VAR_6 |= VAR_2;
 }

 VAR_8 = FUNC_1(VAR_5);

error:
 return VAR_8;
}
